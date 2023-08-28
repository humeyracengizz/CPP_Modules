#include "Phonebook.hpp"

bool	isNumber(string nbr)
{
	int i = -1;
	while (nbr[++i])
	{
		if(!isdigit(nbr[i]))
			return (false);
	}
	return (true);
}

string	shortener(string st)
{
	char str[11];
	int x = -1;
	int len;

	if(st.length() > 10)
	{
		while (++x <= 9)
		{
			if(x == 9)
			{
				str[x++] = '.';
				str[x] = 0;
				break ;
			}
			str[x] = st[x];
		}
		return (str);
	}
	else
	{
		len = st.length();
		len = 10 - len;
		while (st[++x])
			str[x] = st[x];
		while (len--)
			str[x++] = ' ';
		str[x] = 0;
		return (str);
	}
}

void	display_contact(PhoneBook *ph, int i)
{
	cout << i + 1 << " | " << shortener(ph->get_contact(i).get_first_name()) << \
			" | " << shortener(ph->get_contact(i).get_last_name()) << " | " << shortener(ph->get_contact(i).get_nick_name()) << endl;
}

void	display_detail(PhoneBook *ph, int i)
{
	cout << "First Name: " << shortener(ph->get_contact(i).get_first_name()) << endl;
	cout << "Last Name: " << shortener(ph->get_contact(i).get_last_name()) << endl;
	cout << "Nick Name: " << shortener(ph->get_contact(i).get_nick_name()) << endl;
	cout << "Dark Screen: " << shortener(ph->get_contact(i).get_darkest_secret()) << endl;
	cout << "Phone Number: " << shortener(ph->get_contact(i).get_phone_number()) << endl;
}

void	PhoneBook::search_contact(void)
{
	string search;
	int i = -1;

	if(add_cnt == 0)
	{
		cout << "No saved contacts! Please some save contact." << endl;
		return ;
	}
	while (++i < add_cnt)
		display_contact(this, i);
	i = -1;
	cout << "Please search contact index number:" << endl;
	getline(cin, search);
	while (++i < add_cnt)
	{
		if(std::atoi(search.c_str()) == contact[i].get_index())
		{
			display_detail(this, i);
			return ;
		}
	}
	cout << "The contact not found!" << endl;
}

void	PhoneBook::add_contact(void)
{
	static int i = 0;
	string str;

	if(i >= 8)
		i = 0;
	if(add_cnt < 8)
		add_cnt++;
	cout << i + 1 << '-' << " Enter a Name:" << endl;
	name:
	getline(cin, str);
	if (str == "\0")
		goto name;
	contact[i].set_first_name(str);
	cout << i + 1 << '-' << " Enter a Last Name:" << endl;
	last:
	getline(cin, str);
	if (str == "\0")
		goto last;
	contact[i].set_last_name(str);
	cout << i + 1 << '-' << " Enter a Nick Name:" << endl;
	nick:
	getline(cin, str);
	if (str == "\0")
		goto nick;
	contact[i].set_nick_name(str);
	cout << i + 1 << '-' << " Enter a Phone Number:" << endl;
	istnum:
	getline(cin, str);
	while (!isNumber(str))
	{
		cout << "Please type a number!\nEnter a Phone Number: ";
		getline(cin, str);
	}
	if (str == "\0")
		goto istnum;
	contact[i].set_phone_number(str);
	cout << i + 1 << '-' << " Enter a Darkest Secret:" << endl;
	dark:
	getline(cin, str);
	if (str == "\0")
		goto dark;
	contact[i].set_darkest_secret(str);
	contact[i].set_index(i + 1);
	i++;
}
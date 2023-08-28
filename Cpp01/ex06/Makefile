SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:%.cpp=%.o)
NAME = Harl
C++ = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)
	
.PHONY: clean fclean all
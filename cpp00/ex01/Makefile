NAME		= PhoneBook
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= ClasseContact.cpp \
			  ClassePhoneBook.cpp \
			  main.cpp \

OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS) $(CPPLINKS)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:        all clean fclean re
CC			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME		=	phonebook
SRCS		=	main.cpp PhoneBook.cpp Contact.cpp
OBJS		=	$(SRCS:.cpp=.o)
HFS			=	Contact.hpp PhoneBook.hpp

%.o			:	%.cpp $(HFS)
				$(CC) $(CXXFLAGS) -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(HFS)
				$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

.PHONY		:	clean fclean all re
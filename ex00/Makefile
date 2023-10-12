CC			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME		=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)
HFS			=

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

NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = megaphone.o

all: $(NAME)

megaphone.o: megaphone.cpp
	$(CXX) $(CXXFLAGS) -c megaphone.cpp -o megaphone.o


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


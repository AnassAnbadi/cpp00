NAME = phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
RM = rm -f

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = PhoneBook.hpp Contact.hpp
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

Contact.o: Contact.cpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
name = megaphone
srcs = megaphone.cpp
obj = $(srcs:.cpp=.o)
cc = c++
cflags = -Wall -Wextra -Werror -std=c++98
all: $(name)
$(name): $(obj)
	$(cc) $(cflags) -o $(name) $(obj)
clean:
	rm -f $(obj)
fclean: clean
	rm -f $(name)
re: fclean all
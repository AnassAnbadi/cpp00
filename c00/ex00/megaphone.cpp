#include <iostream>
#include <string>

bool isLower(char c)
{
    return (c >= 'a' && c <= 'z');
}

char toUpper(char c)
{
    if (isLower(c))
        return c - ('a' - 'A');
    return c;
}

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int j = 1; j < ac; j++)//here
    {
        std::string s(av[j]);

        for (size_t i = 0; i < s.length(); i++)
            s[i] = toUpper(s[i]);

        std::cout << s;
    }

    std::cout << std::endl;
    return 0;
}

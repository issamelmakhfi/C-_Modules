#include "PmergeMe.hpp"

void strIsdigit(char *str)
{
    size_t length = strlen(str);
    for (size_t i = 0; i < length; i++)
    {
        if (!isdigit(str[i]) && str[i] != 32)
            throw std::runtime_error("Error");
    }
}

void    readArgs(char *av[])
{
    int i = 1;
    
    while (av[i])
        strIsdigit(av[i++]);
}


int main(int ac, char **av)
{
    try {
        if (ac < 2)
            throw std::runtime_error("Error: Bad Arg");
        readArgs(av);
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
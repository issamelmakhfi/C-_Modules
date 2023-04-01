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

template <class T>
void    algorithm(char *av[], int ac)
{
    T v;

    for (int i = 1; i < ac; i++)
    {
        v.push_back(atoi(av[i]));
    }
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }

}

int main(int ac, char **av)
{
    try {
        if (ac < 2)
            throw std::runtime_error("Error: Bad Arg");
        readArgs(av);
        algorithm<std::vector<int> >(av, ac);
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
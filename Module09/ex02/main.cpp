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
void    insertionSort(T *A, int lidx, int ridx)
{
    int j;

    for (int i = lidx; i < ridx; i++)
    {
        j = i + 1;
        while (j > lidx && (*A)[j - 1] > (*A)[j])
        {
            std::swap((*A)[j], (*A)[j - 1]);
            j--;
        }
    }
}

template <class T>
void    merge(T *A, int ldix, int rdix)
{

}

template <class T>
void    mergeSort(T *A, int ldix, int ridx)
{
    int k = 2;
    int mid;

    if (rdix - ldix > k)
    {
        mid = (rdix + lidx) / 2;
        mergeSort(A, ldix, r);
        mergeSort(A, mid + 1, rdix);
    }
    else
        insertionSort(A, ldix, rdix);
}

template <class T>
void    algorithm(char *av[], int ac)
{
    T v;

    for (int i = 1; i < ac; i++)
    {
        v.push_back(atoi(av[i]));
    }
    insertionSort<T>(&v, 0, v.size());
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
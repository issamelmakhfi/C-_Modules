#include "PmergeMe.hpp"

void strIsdigit(char *str)
{
    size_t length = strlen(str);
    for (size_t i = 0; i < length; i++)
    {
        if (!isdigit(str[i]))
            throw std::runtime_error("Error");
    }
}

void    readArgs(char *av[])
{
    int i = 1;
    
    while (av[i])
        strIsdigit(av[i++]);
}

////////////////////////////////////////////////////////////////// Vector ////////////////////////////////////////////////////////

void    insertionSortV(std::vector<int> *A, int lidx, int ridx)
{
    int j;

    for (int i = lidx; i < ridx ; i++)
    {
        int tmp = (*A)[i + 1];
        j = i + 1;
        while (j > lidx && (*A)[j - 1] > tmp)
        {
            std::swap((*A)[j], (*A)[j - 1]);
            j--;
        }
        (*A)[j] = tmp;
    }
}

void    mergeV(std::vector<int> *A, int lidx, int mid, int ridx)
{
    int idx1 = mid - lidx + 1;
    int idx2 = ridx - mid;

    int L[idx1];
    int R[idx2];
    for (int i = 0; i < idx1; i++)
        L[i] = (*A)[lidx + i];
    for (int i = 0; i < idx2; i++)
        R[i] = (*A)[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = lidx;

    while (i < idx1 && j < idx2)
    {
        if (L[i] <= R[j])
        {
            (*A)[k] = L[i];
            i++;
        }
        else
        {
            (*A)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < idx1)
    {
        (*A)[k] = L[i];
        i++;
        k++;
    }
    
    while (j < idx2)
    {
        (*A)[k] = R[j];
        j++;
        k++;
    }
}

void    mergeSortV(std::vector<int> *A, int lidx, int ridx)
{
    int k = 2;
    int mid;

    if (ridx - lidx > k)
    {
        mid = (ridx + lidx) / 2;
        mergeSortV(A, lidx, mid);
        mergeSortV(A, mid + 1, ridx);
        mergeV(A, lidx, mid , ridx);
    }
    else
        insertionSortV(A, lidx, ridx);
}

void    vectorAlgo(std::vector<int> *v, char *av[], int ac, double *t)
{
    struct timeval start, end;

    gettimeofday(&start, NULL);
    for (int i = 1; i < ac; i++)
    {
        (*v).push_back(atoi(av[i]));
    }
    mergeSortV(v, 0, (*v).size() - 1);
    gettimeofday(&end, NULL);
    *t = static_cast<double>((end.tv_sec * 1e6 + end.tv_usec) - (start.tv_sec * 1e6 + start.tv_usec)) / 1e6;
}

/////////////////////////////////////////////////////////// Deque ///////////////////////////////////////////////////////////

void    insertionSortDeq(std::deque<int> *A, int lidx, int ridx)
{
    int j;

    for (int i = lidx; i < ridx ; i++)
    {
        int tmp = (*A)[i + 1];
        j = i + 1;
        while (j > lidx && (*A)[j - 1] > tmp)
        {
            std::swap((*A)[j], (*A)[j - 1]);
            j--;
        }
        (*A)[j] = tmp;
    }
}

void    mergeDeq(std::deque<int> *A, int lidx, int mid, int ridx)
{
    int idx1 = mid - lidx + 1;
    int idx2 = ridx - mid;

    int L[idx1];
    int R[idx2];
    for (int i = 0; i < idx1; i++)
        L[i] = (*A)[lidx + i];
    for (int i = 0; i < idx2; i++)
        R[i] = (*A)[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = lidx;

    while (i < idx1 && j < idx2)
    {
        if (L[i] <= R[j])
        {
            (*A)[k] = L[i];
            i++;
        }
        else
        {
            (*A)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < idx1)
    {
        (*A)[k] = L[i];
        i++;
        k++;
    }
    
    while (j < idx2)
    {
        (*A)[k] = R[j];
        j++;
        k++;
    }
}

void    mergeSortDeq(std::deque<int> *A, int lidx, int ridx)
{
    int k = 2;
    int mid;

    if (ridx - lidx > k)
    {
        mid = (ridx + lidx) / 2;
        mergeSortDeq(A, lidx, mid);
        mergeSortDeq(A, mid + 1, ridx);
        mergeDeq(A, lidx, mid , ridx);
    }
    else
        insertionSortDeq(A, lidx, ridx);
}

void    dequeAlgo(std::deque<int> *d, char *av[], int ac, double *t)
{
    struct timeval start , end;

    gettimeofday(&start, NULL);
    for (int i = 1; i < ac; i++)
    {
        (*d).push_back(atoi(av[i]));
    }
    mergeSortDeq(d, 0, (*d).size() - 1);
    gettimeofday(&end, NULL);
    *t = static_cast<double>((end.tv_sec * 1e6 + end.tv_usec) - (start.tv_sec * 1e6 + start.tv_usec)) / 1e6;
}

int main(int ac, char **av)
{
    try {
        std::vector<int> v;
        std::deque<int> d;
        double t;

        if (ac < 2)
            throw std::runtime_error("Error: Bad Arg");
        readArgs(av);
        std::cout << "\033[0;32mBefore: \033[0m";
        for(int i = 1; i < ac; i++)
            std::cout << av[i] << " ";
        std::cout << std::endl;
        vectorAlgo(&v, av, ac, &t);
        std::cout << "\033[0;32mAfter: \033[0m";
        for (size_t i = 0; i < v.size(); i++)
        {
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector<int> : \033[0;31m" << t << " sec\033[0m" << std::endl;
        dequeAlgo(&d, av, ac, &t);
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque<int> : \033[0;31m" << t  << " sec\033[0m" << std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
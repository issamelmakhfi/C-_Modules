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

void    vectorAlgo(char *av[], int ac)
{
    std::vector<int> v;

    for (int i = 1; i < ac; i++)
    {
        v.push_back(atoi(av[i]));
    }
    mergeSortV(&v, 0, v.size() - 1);
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << std::endl;
    // }
}

/////////////////////////////////////////////////////////// Deque ///////////////////////////////////////////////////////////

void    insertionSortDeq(std::vector<int> *A, int lidx, int ridx)
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

void    mergeDeq(std::vector<int> *A, int lidx, int mid, int ridx)
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

void    mergeSortDeq(std::vector<int> *A, int lidx, int ridx)
{
    int k = 2;
    int mid;

    if (ridx - lidx > k)
    {
        mid = (ridx + lidx) / 2;
        mergeSortDeq(A, lidx, mid);
        mergeSortDeq(A, mid + 1, ridx);
        mergeV(A, lidx, mid , ridx);
    }
    else
        insertionSortDeq(A, lidx, ridx);
}

void    dequeAlgo(char *av[], int ac)
{
    std::vector<int> v;

    for (int i = 1; i < ac; i++)
    {
        v.push_back(atoi(av[i]));
    }
    mergeSortDeq(&v, 0, v.size() - 1);
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << std::endl;
    // }

}

int main(int ac, char **av)
{
    try {
        clock_t time_req;
        if (ac < 2)
            throw std::runtime_error("Error: Bad Arg");
        readArgs(av);
        time_req = clock();
        vectorAlgo(av, ac);
        time_req = clock() - time_req;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector<int> : " <<  (float)time_req/CLOCKS_PER_SEC * 1000000 << std::endl;
        time_req = clock();
        dequeAlgo(av, ac);
        time_req = clock() - time_req;
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque<int> : " <<  (float)time_req/CLOCKS_PER_SEC * 1000000<< std::endl;
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
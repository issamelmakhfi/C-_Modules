#include "Array.hpp"


Array::Array()
{
    arr = new T;
}

Array::Array (unsigned int n) {
    for (size_t i = 0; i < n; i++)
    {
        arr[n] = new T;
    }
    std::cout << i << std::endl;
}

Array::Array &operator= (const Array &obj) {
    arr = new T;
    *arr = *(obj.arr);
}

size_t Array::size(void) {
    size_t len = sizeof(arr) / sizeof(arr[0]);
    return len;
}
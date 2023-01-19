#include "Data.hpp"

int main()
{
    Data *ptr = new Data;
    Data *ptr2;
    uintptr_t   ptr1;

    ptr->name = "ouazzani";
    ptr->age = 12;

    ptr1 = serialize(ptr);
    ptr2 = deserialize(ptr1);

    std::cout << "Name :" << ptr2->name << std::endl;
    std::cout << "Age  :" << ptr2->age << std::endl;
	return (0);
}

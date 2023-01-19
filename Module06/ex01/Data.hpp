#ifndef _DATA_HPP
#define _DATA_HPP

#include <iostream>

struct Data {
    int age;
    std::string name;
};


uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif
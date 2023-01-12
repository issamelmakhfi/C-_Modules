#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void leak()
// {
// 	system("leaks Brain");
// }

int main()
{
	Animal *p = new Dog();
	(void)p;
	// atexit(leak);
	return 0;
}
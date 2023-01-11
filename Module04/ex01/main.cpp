#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void leak()
// {
// 	system("leaks Brain");
// }

int main()
{
	Animal *array[2];
	int i = 0;

	while (i < 2)
	{
		if ( i < 1 )
			array[i] = new Dog();
		else
			array[i] = new Cat();
		i++;
	}
	*array[0] = *array[1];
	i = 0;
	while (i < 2)
	{
		delete array[i];
		i++;
	}
	// atexit(leak);
	return 0;
}
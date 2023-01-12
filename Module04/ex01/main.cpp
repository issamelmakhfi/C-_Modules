#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void leak()
// {
// 	system("leaks Brain");
// }


////////////////// main of Deep copy //////////////

// int main()
// {
// 	Animal *array[2];
// 	int i = 0;

// 	while (i < 2)
// 	{
// 		if ( i < 1 )
// 			array[i] = new Dog();
// 		else
// 			array[i] = new Cat();
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 2)
// 	{
// 		delete array[i];
// 		i++;
// 	}
// 	// atexit(leak);
// 	return 0;
// }

/////////////////////////// main of leaks /////////////// 


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	// atexit(leak);
	return 0;
}

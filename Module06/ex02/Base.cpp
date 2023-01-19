#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Base : Destructor Called" << std::endl;
}


Base	*generate(void)
{
	Base	*r_A = new A;
	Base	*r_B = new	B;
	Base	*r_C = new C;
	int indx = 0;
	time_t t;

	srand((unsigned ) time(&t));
	indx = rand() % 3;

	switch	(indx) {
		case	0:
			return (r_A);
		case	1:
			return (r_B);
		case	2:
			return	(r_C);
		default:
			return (r_A);
	}
}

void	identify(Base *p)
{
	if (A *r_A = dynamic_cast<A*>(p))
		std::cout << "This is A Object" << std::endl;
	else if (B *r_B = dynamic_cast<B*>(p))
		std::cout << "This is B Object" << std::endl;
	else if (C *r_C = dynamic_cast<C*>(p))
		std::cout << "This is C Object" << std::endl;
	else
		std::cout << "LA LA LA HADA MO HOWA HADA" << std::endl;
}

void	identify(Base &p)
{
	try {
		A &r_A = dynamic_cast<A&>(p);
		(void)r_A;
		std::cout << "This is A Object" << std::endl;
	}
	catch (std::exception const &E)
	{
		try {
			B &r_B = dynamic_cast<B&>(p);
			(void)r_B;
			std::cout << "This is B Object" << std::endl;
		}
		catch (std::exception const &E)
		{
			try {
				C &r_C = dynamic_cast<C&>(p);
				(void)r_C;
				std::cout << "This is C Object" << std::endl;
			}
			catch (std::exception const &E)
			{
				std::cout << E.what() << std::endl;
			}
		}
	}
}

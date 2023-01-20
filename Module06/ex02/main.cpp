#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void leak()
{
	system("leaks Base");
}

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);

	delete p;
	atexit(leak);
	return (0);
}

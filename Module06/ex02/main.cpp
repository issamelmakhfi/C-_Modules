#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	Base *p = generate();
	identify(p);
	identify(*p);

	return (0);
}

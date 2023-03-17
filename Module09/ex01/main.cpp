#include "RPN.hpp"

void	errorHandler(std::string mssg)
{
	std::cout << mssg << std::endl;
	exit(1);
}

int	isoperator(int c)
{
	if (c == '+' || c == '-' || c == '/' || c == '*' || c == 32)
		return 0;
	return 1;
}

void	parssArgs(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!isdigit(av[i]))
		{
			if (isoperator(av[i]))
				errorHandler("BAD ARG");
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int	top1;
	int top2;
	std::stack<int> stack;

	if (ac != 2)
		errorHandler("BAD ARGUMENTS");
	parssArgs(av[1]);
	while (av[1][i])
	{
		if (isdigit(av[1][i]))
			stack.push(av[1][i]);
		else
		{
			top1 = stack.top();
			stack.pop();
			top2 = stack.top();
			if (av[1][i] == '+')
				stack.push(top1 + top2);

		}
		i++;
	}
	while (!stack.empty())
	{
		std::cout << (char)stack.top() << " ";
		stack.pop();
	}


	return (0);
}

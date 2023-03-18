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
	int top2 = 0;
	std::stack<int> stack;

	if (ac != 2)
		errorHandler("BAD ARGUMENTS");
	parssArgs(av[1]);
	while (av[1][i])
	{
		if (isdigit(av[1][i]))
			stack.push(av[1][i] - 48);
		if (!isoperator(av[1][i]) && av[1][i] != ' ')
		{
			top1 = stack.top();
			stack.pop();
			if (!stack.empty())
			{
				top2 = stack.top();
				stack.pop();
			}
			if (av[1][i] == '+')
				stack.push(top2 + top1);
			if (av[1][i] == '-')
				stack.push(top2 - top1);
			if (av[1][i] == '*')
				stack.push(top2 * top1);
			if (av[1][i] == '/')
				stack.push(top2 / top1);					
		}
		i++;
	}
	while (!stack.empty())
	{
		std::cout << stack.top();
		stack.pop();
	}
	return (0);
}

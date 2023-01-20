#include "itr.hpp"

int main()
{

	int arr[] = {1, 2, 3, 4};
	char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

	size_t len = sizeof(arr) / sizeof(arr[0]);
	size_t len1 = sizeof(arr1) / sizeof(arr1[0]);

	iter(arr, len,  show);
	iter(arr1, len1,  show);

	return (0);
}

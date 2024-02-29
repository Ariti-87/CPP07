#include <iostream>
#include "iter.hpp"

int main()
{
	std::cout << "Array of int : " << std::endl;
	int arr[] = {1, 2, 3};
	iter(arr, 3, display<int>);
	std::cout << std::endl;

	std::cout << "Array of char : " << std::endl;
	char arr2[] = {'a', 'z', 'r', 'm', 'i'};
	iter(arr2, 5, display<char>);
	std::cout << std::endl;

	std::cout << "Array of str : " << std::endl;
	std::string arr3[] = {"cos", "sin", "tan"};
	iter(arr3, 3, display<std::string>);
	std::cout << std::endl;

	return 0;
}

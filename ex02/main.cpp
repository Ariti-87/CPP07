#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

int main()
{
	Array<int> arr(5);
	srand(time(NULL));
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = rand();
	std::cout << "Initial array : " << arr << std::endl;
	arr[2] = 10;
	std::cout << "Array after modification : " << arr << std::endl;

	try
	{
		arr[42] = 0;
	}
	catch(const std::out_of_range& oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}

	try
	{
		arr[-42] = 0;
	}
	catch(const std::out_of_range& oor)
	{
		std::cerr << RED << oor.what() << RESET << std::endl;
	}

	Array<int> arr2 = arr;
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != arr2[i])
		{
			std::cerr << "operator= : NOT OK" << std::endl;
			return 1;
		}
	}
	std::cout << "operator= : OK" << std::endl;
	Array<int> arr3(arr);
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != arr2[i])
		{
			std::cerr << "copy constructor : NOT OK" << std::endl;
			return 1;
		}
	}
	std::cout << "copy constructor : OK" << std::endl;

	Array<int> arr4;
	std::cout << "Empty array : " << arr4 << std::endl;

	return 0;
}

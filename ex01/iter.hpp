#ifndef DEF_ITER
#define DEF_ITER

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define VIOLET "\033[35m"
#define GREEN "\033[32m"
#define LGREEN "\033[92m"
#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define BLACK "\033[30m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

#include <iostream>

template<typename T, typename F>
void iter(T *arr, size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template<typename T>
void display(T element)
{
	std::cout << element << std::endl;
}

#endif


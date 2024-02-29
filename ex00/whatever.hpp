#ifndef DEF_WHATEVER
#define DEF_WHATEVER

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

template<typename T>
void swap(T & x, T & y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T const& max(T const& x, T const& y)
{
	return (x > y ? x : y);
}

template<typename T>
T const& min(T const& x, T const& y)
{
	return (x < y ? x : y);
}

#endif


#ifndef DEF_ARRAY
#define DEF_ARRAY

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
class Array
{
	public:
		Array() : _size(0), _data(NULL) {}

		Array(unsigned int n) : _size(n), _data(new T[n]) {}

		Array(Array const& src) : _size(src._size), _data(new T[src._size])
		{
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = src[i];
		}

		~Array() { delete[] _data; }

		Array &operator=(Array const& src)
		{
			if (this != &src)
			{
				delete[] _data;
				_size = src._size;
				_data = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = src._data[i];
			}
			return *this;
		}

		unsigned int const& size() const { return(_size); }

		T & operator[](unsigned int index)
		{
			if (index >= _size)
				throw (std::out_of_range("Index out of bounds"));
			return _data[index];
		}

		const T & operator[](unsigned int index) const
		{
			if (index >= _size)
				throw (std::out_of_range("Index out of bounds"));
			return _data[index];
		}

	private:
		unsigned int _size;
		T * _data;

};

template<typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const& arr)
{
	o << "[ ";
	for (unsigned int i = 0; i < arr.size(); i++)
		o << arr[i] << ", ";
	o << "]";
	return o;
}

#endif

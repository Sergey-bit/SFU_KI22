#include <iostream>
#include <random>

namespace dop
{
	template<typename T = float>
	T* read_1DArray(const size_t length)
	{
		T* array = new T[length];

		for (T* i = array; i < array + length; i++)
		{
			std::cout << "arr[" << i - array << "] = "; std::cin >> *i;
		}

		return array;
	}

	template<typename T = float>
	T** read_2DArray(const size_t length, const size_t sublen)
	{
		T** array = new T * [length];

		for (T** i = array; i < array + length; i++)
		{
			*array = read_1DArray<T>(sublen);
		}

		return array;
	}

	template<typename T = float>
	T* get_r1DArray(const size_t length)
	{
		T* array = new T[length];

		for (T* i = array; i < array + length; i++)
		{
			*i = rand();
		}

		return array;
	}

	template<typename T = float>
	T** get_r2DArray(const size_t length, const size_t sublen)
	{
		T** array = new T* [length];

		for (T** i = array; i < array + length; i++)
		{
			*i = get_r1DArray<T>(sublen);
		}

		return array;
	}

	template<typename T = float>
	void free_2DArray(T** array, const size_t length)
	{
		for (size_t i = 0; i < length; i++)
		{
			delete[] array[i];
		}

		delete[] array;
	}

	template<typename T = float>
	void print_1DArray(T* const array, const size_t length)
	{
		for (T* i = array; i < array + length; i++)
		{
			std::cout << "array[" << i - array << "]=" << *i << std::endl;
		}
	}

	template<typename T = float>
	void print_2DArray(T** const array, const size_t length, const size_t sublen)
	{
		for (T** i = array; i < array + length; i++)
		{
			for (T* j = *i; j < *i + sublen; j++)
			{
				std::cout << *j << " ";
			}

			std::cout << std::endl;
		}
	}

	template<typename T = float>
	bool isSorted(T* array, const size_t length)
	{
		if (length <= 2)
		{
			return true;
		}

		enum { INCREASE, DECREASE, UNDEFINED, };
		T last = array[0];

		int increase = UNDEFINED;
		bool res = true;

		for (size_t i = 1; i < length; i++)
		{
			if (increase == UNDEFINED && array[i] != last)
			{
				increase = (array[i] > last) ? INCREASE : DECREASE;
			}
			else if (increase != UNDEFINED && !((increase == INCREASE && array[i] >= last) || (increase == DECREASE && array[i] <= last)))
			{
				res = false;
				break;
			}
			last = array[i];
		}

		return res;
	}
};

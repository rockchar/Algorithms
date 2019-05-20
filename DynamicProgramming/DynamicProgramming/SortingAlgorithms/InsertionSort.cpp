#include "pch.h"
#include "InsertionSort.h"
#include <iostream>

void InsertionSort(int a[], size_t arr_size)
{
	int j;
	for (int i = 1; i < arr_size; i++)
	{
		for (j = i - i; j < i; j++)
		{
			if (a[j] > a[i])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}

		std::cout << "After iteration " << j <<"--->";
		for (int i = 0; i < arr_size; i++)
		{
			std::cout << a[i] << " ";
		}

		std::cout << "\n";
	}

	for (int i = 0; i < arr_size; i++)
	{
		std::cout << a[i] << " ";
	}
}
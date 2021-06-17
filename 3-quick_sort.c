#include "sort.h"
/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quickSort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sortAlg(array, 0, size - 1, size);
}

/**
  * sort_alg - recursive sorting algorithm
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full size of array
  */
void sortAlg(int *arr, int left, int right, size_t size)
{
	int pivote;

	if (left < right)
	{
		pivote = _split(arr, left, right, size);
		sortAlg(arr, left, pivote - 1, size);
		sortAlg(arr, pivote + 1, right, size);
	}
}

/**
  * split - split array
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full array size
  * Return: pivot index
  */
int _split(int *arr, int left, int right, size_t size)
{
	int i, i2, pivote, temp;

	pivote = arr[right];
	i = left;

	for (i2 = left; i2 < right; i2++)
	{
		if (arr[i2] < pivote)
		{
			if (i != i2)
			{
				temp = arr[i2];
				arr[i2] = arr[i];
				arr[i] = temp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[right])
	{
		temp = arr[i];
		arr[i] = arr[right];
		arr[right] = temp;
		print_array(arr, size);
	}

	return (i);
}

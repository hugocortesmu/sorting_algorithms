#include "sort.h"
/**
  * selection_sort - algoritmo de clasificacion
  * @array: array pa ordenar
  * @size: tamaño del array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int mini, temp, idex;

	for (i = 0; i < size; i++)
	{
		mini = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (mini > array[j])
			{
				mini = array[j];
				idex = j;
			}
		}
		if (mini != array[i])
		{
			temp = array[i];
			array[i] = mini;
			array[idex] = temp;
			print_array(array, size);
		}
	}
}

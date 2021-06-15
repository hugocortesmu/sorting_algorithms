#include "sort.h"
/**
 * bubble_sort - Sort an array with bubble sort algorithm
 * @size: size of array
 * @array: Array that is going to  be sorted
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
    int i, j, aux;

    for (j = 0; j < size; j++)
    {
        for(i = 0; i < size; i++)
        {
            if(i >= size-1)
            break;
            if (array[i] > array[i+1])
            {
                aux = array[i+1];
                array[i+1] = array[i];
                array[i] = aux;
				print_array(array, size);
            }

        }

        i = 0;
    }
}
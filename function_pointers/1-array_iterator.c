#include "main.h"
/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array
 * @array: the array to iterate through
 * @size: the size of the array
 * @action: pointer to the function to call for each element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

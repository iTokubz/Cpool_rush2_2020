/*
** EPITECH PROJECT, 2020
** Day4
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    int temp;

    for (int i = 0; i < size; i++) {
        if (array[i] > array[i + 1]) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = 0;
        }
    }
}
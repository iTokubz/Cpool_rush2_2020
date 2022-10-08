/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** my_how_many_char
*/

int my_char_isalnum(char c);

int my_how_many_char(char *str)
{
    int i = 0;
    int number = 0;

    while (str[i] != '\0') {
        if (my_char_isalnum(str[i]) == 1)
            number++;
        i++;
    }
    return (number);
}
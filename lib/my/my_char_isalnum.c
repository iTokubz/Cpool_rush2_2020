/*
** EPITECH PROJECT, 2020
** *
** File description:
** my_char_isalnum
*/

int my_char_isalnum(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= '0' && c <= '9')
        return (2);
    return (0);
}
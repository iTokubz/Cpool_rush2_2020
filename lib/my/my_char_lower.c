/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** my_char_lower
*/

char my_char_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

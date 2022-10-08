/*
** EPITECH PROJECT, 2020
** B-CPE-100-STG-1-1-rush2-axel.derbisz
** File description:
** fill
*/

#include "include/my.h"
#include "include/const.h"

int find_min_value(float *diff)
{
    float min = 200000.0000f;
    int index;

    for (int i = 0; i < 4; i++) {
        if (diff[i] < min) {
            min = diff[i];
            index = i;
        }
    }
    return (index);
}

void find_language(infos_case_t *my_case)
{
    int index;
    char lang[4][10] = {"Spanish", "French", "English", "German"};
    float diff[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    char c;

    c = my_char_lower(c);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; my_case[j].c != '\0'; j++) {
            c = my_case[j].c;
            diff[i] += my_tab[i][c - 97] - my_case[j].p;
            ABS(diff[i]);
        }
    }
    index = find_min_value(diff);
    my_putstr("=> ");
    my_putstr(lang[index]);
}
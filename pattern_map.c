/*
** EPITECH PROJECT, 2023
** pattern
** File description:
** pattern
*/

#include "include/p_my.h"
#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>

int setting(int l, int len_pattern)
{
    if (l < (len_pattern - 1)){
        l++;
    } else {
        l = 0;
    }
    return l;
}

char **pattern_2d(int nb, char **array, char *pattern)
{
    int i = 0;
    int j = 0;
    int l = 0;
    int len = 0;
    int len_pattern = my_strlen(pattern);

    for (len = 0; len < (nb * nb); len++) {
        array[i][j] = pattern[l];
        l = setting(l, len_pattern);
        j++;
        if (j == nb){
            array[i][j] = '\0';
            j = 0;
            i++;
        }
    }
    return array;
}

set_t *generate_pattern(char *pattern, int nb)
{
    set_t *set = malloc(sizeof(set_t));

    set->array = malloc(sizeof(char *) * (nb + 1));
    for (int i = 0; i < nb; i++)
        set->array[i] = malloc(sizeof(char) * (nb + 1));
    set->array = pattern_2d(nb, set->array, pattern);
    return set;
}

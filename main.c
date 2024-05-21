/*
** EPITECH PROJECT, 2023
** setting
** File description:
** setting
*/

#include "include/p_my.h"
#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

int emply_file(char *file)
{
    int fd = open(file, O_RDONLY);

    if (fd == -1)
        return 1;
    return 0;
}

int condition(char *pattern)
{
    if (my_strlen(pattern) == 0)
        return 1;
    for (int i = 0; pattern[i] != '\0'; i++)
        if (pattern[i] != '.' && pattern[i] != 'o')
            return 1;
    return 0;
}

int map_param(char *pattern, int nb)
{
    set_t *set = malloc(sizeof(set_t));
    int i = 0;

    set = generate_pattern(pattern, nb);
    for (i = 0; set->array[i] != NULL; i++)
        mini_printf("%s\n", set->array[i]);
    for (int j = 0; set->array[j] != NULL; j++)
        free(set->array[i]);
    free(set->array);
    free(set);
    return 0;
}

int load_file(char const *filepath)
{
    set_t *set = conversion(generate_map(filepath));
    int i = 0;

    for (i = 0; set->array[i] != NULL; i++){
        mini_printf("%s", set->array[i]);
    }
    for (int j = 0; set->array[j] != NULL; j++){
        free(set->array[j]);
    }
    free(set->array);
    free(set);
    return 0;
}

int main(int argc, char **argv)
{
    int nb = 0;

    if (argc < 2 || argc > 3)
        return 84;
    if (argc == 2){
        if (emply_file(argv[1]))
            return 84;
    load_file(argv[1]);
    }
    if (argc == 3){
        nb = my_getnbr(argv[1]);
        if (nb <= 0)
            return 84;
        if (condition(argv[2]))
            return 84;
        map_param(argv[2], nb);
    }
    return 0;
}

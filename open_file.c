/*
** EPITECH PROJECT, 2023
** open
** File description:
** file
*/

#include "include/p_my.h"
#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

set_t *conversion(char *file)
{
    set_t *set = malloc(sizeof(set_t));
    int cols = nb_cols(file);
    int line = nb_line(file);
    int z = skip_first_line(file);
    int j = 0;
    int i = 0;

    set->array = malloc(sizeof(char *) * (line + 1));
    for (i = 0; i < line; i++){
        set->array[i] = malloc(sizeof(char) + (cols + 1));
        for (j = 0; j < cols + 1; j++){
            set->array[i][j] = file[z + 1];
            z++;
        }
        j = 0;
    }
    set->array[i] = NULL;
    return set;
}

char *generate_map(char const *file)
{
    struct stat info;
    char *buffer = NULL;
    int fd = open(file, O_RDONLY);

    stat(file, &info);
    buffer = malloc(sizeof(char) * (info.st_size + 1));
    read(fd, buffer, info.st_size);
    buffer[info.st_size] = '\0';
    return buffer;
}

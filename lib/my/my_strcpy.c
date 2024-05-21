/*
** EPITECH PROJECT, 2023
** strcpy
** File description:
** strcpy
*/

#include "include/my.h"
#include "include/struct.h"

char *my_strcpy(char *dest, char const *src)
{
    int compteur;

    compteur = 0;
    while (src[compteur] != '\0'){
        dest[compteur] = src[compteur];
        compteur ++;
    }
    dest[compteur] = '\0';
    return (dest);
}

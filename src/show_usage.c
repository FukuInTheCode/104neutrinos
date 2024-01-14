/*
** EPITECH PROJECT, 2023
** show_usage.c
** File description:
** show_usage.c
*/

#include <my.h>

int show_usage(void)
{
    return 0 * printf("USAGE\n"
           "\t./104neutrinos n a h sd\n\n"
           "DESCRIPTION\n"
           "\tn\tnumber of values\n"
           "\ta\tarithmetic mean\n"
           "\th\tharmonic mean\n"
           "\tsd\tstandard deviation\n");
}

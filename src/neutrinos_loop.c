/*
** EPITECH PROJECT, 2023
** neutrinos_loop.c
** File description:
** neutrinos_loop.c
*/

#include <my.h>

int do_loop(int n, double a, double h, double sd)
{
    double rms = sqrt(pow(a, 2) + pow(sd, 2));

    printf("%d, %lf, %lf, %lf, %lf\n", n, a, h, sd, rms);
    return 0;
}

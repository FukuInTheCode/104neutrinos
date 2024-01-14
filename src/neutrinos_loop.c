/*
** EPITECH PROJECT, 2023
** neutrinos_loop.c
** File description:
** neutrinos_loop.c
*/

#include <my.h>

static int compute_means(long *n, double *means[3], double input_value)
{
    int error = 0;

    **means = (**means * *n + input_value) / (*n + 1.);
    *means[1] = (*n + 1.) / (1. / *means[1] * *n + 1. / input_value);
    *means[2] = sqrt((*n * pow(*means[2], 2) + pow(input_value - **means, 2))
        / (*n + 1.));
    (*n)++;
    return error;
}

int do_loop(long *n, double *a, double *h, double *sd)
{
    double v = 0.;
    char *end_ptr = NULL;
    char s[1001] = {0};
    int error = 0;

    for (bool is_looping = true; is_looping; memset(s, 0, 1001)) {
        printf("Enter next value: ") && scanf("%s", s);
        v = strtod(s, &end_ptr);
        error |= 84 * ((end_ptr != s + strlen(s)
            || v == 0.) && strcmp("END", s));
        error |= compute_means(n, (double *[4]){a, h, sd}, v);
        is_looping = !(!strcmp("END", s) || error);
        if (is_looping)
            printf("\tNumber of values:\t%ld\n\tStandard deviation:\t%.2lf\n"
               "\tArithmetic mean:\t%.2lf\n\tRoot mean square:\t%.2lf\n"
               "\tHarmonic mean:\t\t%.2lf\n\n",
               *n, *sd, *a, sqrt(*a * *a + *sd * *sd),*h);
    }
    return error;
}

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* Inclusion de stdlib.h pour malloc et exit */

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */

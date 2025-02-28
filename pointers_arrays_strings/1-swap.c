#include "main.h" 
/**
 *
 *
 *
 *
 *
 */
#include <stdio.h>

void swap_int(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}

int main() {
int x = 10, y = 20;
printf("Avant échange : x = %d, y = %d\n", x, y);

swap_int(&x, &y);  // On passe les adresses de x et y
printf("Après échange : x = %d, y = %d\n", x, y);

return 0;
}

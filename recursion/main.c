#include <stdio.h>
#include "main.h"

int main(void)
{
    printf("%d\n", wildcmp("hello", "h*o")); /* 1 */
    printf("%d\n", wildcmp("hello", "h*l")); /* 0 */
    printf("%d\n", wildcmp("hello", "*o")); /* 1 */
    printf("%d\n", wildcmp("hello", "*")); /* 1 */
    printf("%d\n", wildcmp("hello", "h*d")); /* 0 */
    printf("%d\n", wildcmp("hello", "hello*")); /* 1 */
    return (0);
}

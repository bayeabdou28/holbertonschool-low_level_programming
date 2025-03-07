#include <stdio.h>
#include "main.h"

int main(void)
{
    printf("%d\n", is_palindrome("madam")); /* 1 */
    printf("%d\n", is_palindrome("racecar")); /* 1 */
    printf("%d\n", is_palindrome("hello")); /* 0 */
    printf("%d\n", is_palindrome("a")); /* 1 */
    printf("%d\n", is_palindrome("")); /* 1 */
    return (0);
}


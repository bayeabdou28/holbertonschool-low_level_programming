/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
sign *= 1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
if (result > (2147483647 - digit) / 10)
return (sign == 1) ? 2147483647 : -2147483648;
if (result < (-2147483648 + digit) / 10)
return -2147483648;
result = result * 10 + sign * digit;
}
else if (result != 0)
break;
s++;
}

return result;
}

#include <stdio.h>
/**
 * main - causes and infinit loop
 *
 * Return: 0
 */
int main(void)
{
int i;

printf("infinite loop incoming :(\n");

i = 0;

/*
 *while (i < 10)
 *{
 *infinite loop - no increas of variable
 *putchar(i);
}
*/
printf("infinite loop avoided! \\0/\n");
return (0);
}

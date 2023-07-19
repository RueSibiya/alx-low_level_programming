#include <stdio.h>

/**
* main - entry point
* this program is betty compliant
* Return: 0 means success
*/

int main(void)
{
char abc;

int num;

for (num = 0; num <= 9; num++)

{
putchar((num % 10) + '0');
}
for (abc = 'a'; abc <= 'f'; abc++)
{
putchar(abc);
}
putchar('\n');

return (0);

}

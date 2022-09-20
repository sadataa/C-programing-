#include <stdio.h>
int main()
{
char DNA[100] = "cccbbbccbbb";
int count_of_c = 0,count_of_b = 0,i;
for ( i = 0; i < 100; i++)
{
if (DNA[i] == 'c')
{
count_of_c++;
continue;
}
if (DNA[i] == 'b')
count_of_b++;
}
if (count_of_b == 0)
printf("All characters are'c'\n");

else
printf("Ratio of number of 'c' and 'b' is: %f\n", (float)count_of_c / count_of_b);
}

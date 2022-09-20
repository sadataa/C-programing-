#include <stdio.h>

 void max(int *p, int size);

int main()
{
  long arr[100], *maximum, s, c,;

  printf("Enter the number of elements in array\n");
  scanf("%ld", &s);

  printf("Enter %ld integers\n", s);

  for ( c = 0 ; c < s ; c++ )
    scanf("%ld", &arr[c]);



max(arr,s);

}
 void max(int *p, int size){

long arr[100], *maximum, s, c, location = 1;



  maximum  = p;
  *maximum = *p;

  for (c = 1; c < size; c++)
  {
    if (*(p+c) > *maximum)
    {
       *maximum = *(p+c);

    }
  }

  printf("Maximum number is  %ld ", *maximum);

   printf("DOUBLE IS is  %ld ", *maximum*2);



}

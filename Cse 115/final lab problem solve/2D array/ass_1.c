#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int A[3][4]={1,2,3,4,4,5,6,7,7,8,9,9};

    printf("Original -");

     for(i=0; i<3; i++)
    {
        for(j=0;j<4; j++)
        {

              printf("%d  ",A[i][j]);
            }
            printf("\n");
        }









 printf("After -");


    for(i=0; i<3; i++)
    {
        for(j=0;j<4; j++)
        {
            if(i==0 || j==0 || i==2|| j==3)
            {
              sum=sum+A[i][j];
            }
        }


    }
printf("\nSum of the border elements = %d\n",sum);
}


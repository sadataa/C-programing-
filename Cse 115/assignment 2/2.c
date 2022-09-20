#include<stdio.h>
int main()
{

    int count=0;
    int n;
    printf(" elements to be stored in the array : ");
    scanf("%d",&n);
    int array[n];
    int i,j;
    printf("Input %d elements in the array: \n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&array[i]);

    }


    for(i=0; i<n; i++)
    {
        for( j=i+1; j<n; j++)
        {
            if(array[i]==array[j])
            {
                count++;

            }
        }
    }

    printf("Total number of duplicate elements found in the array is: %d",count);



}

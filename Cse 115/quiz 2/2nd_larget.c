#include<stdio.h>
int main()
{
    int array[5]={3,4,5,2,6};
    int large=array[0];
    int sl=array[0];


    for(int i=0 ; i<5; i++)
    {
        if(array[i]>large)
        {
            sl=large;
            large=array[i];

        }
    }
    printf("The secend largest number is = %d\n",sl);

    int fs=array[0];
    int ss=array[0];

    for(int i=0; i<5; i++)
    {
        if(fs>array[i])
        {
            ss=fs;
            fs=array[i];
        }
    }

    printf("The secend small number is: %d",ss);
}+

#include <stdio.h>

int main()
{
    int i,sum=0, number ,last, tem ;


    printf("Enter number ");
    scanf("%d",&number);
    tem=number;



    while(number>0){
    int fact=1;
        last=number%10;


        for(i=1;i<=last;i++){

           fact=fact*i;


        }

        printf(" factorial of %d is =%d",last,fact);
        sum=sum+fact;

    number=number/10;


    }

     printf(" sum=%d\t",sum);
     if(sum==tem){

        printf("strong");
     }
     else{
        printf("not strong");
     }

}

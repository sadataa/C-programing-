#include <stdio.h>
int even (int a);
int main (){
    int x,sum=0;
    while(1){
        printf("ente number ");
        scanf("%d",&x);
        if(x==0){
            continue;
        }
        if(x<0){
            break;
        }
        if(x>0){
           sum=sum+even(x) ;

        }


    }
     printf("%d",sum);
    return 0;
}


int even(int a)
{
    int sum=0,i;


         for(i=2;i<=a;i++)  {
             if(i%2==0){
                 sum=sum+i;
             }


        }
        return sum;
    }












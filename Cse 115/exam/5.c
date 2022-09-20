#include <stdio.h>
int naive(int n);

int main(){


int number1,number2,i,sum=0,answer=0;
printf("enter the 1st limit 2nd limit  :");
scanf("%d %d",&number1, &number2);



for(i=number1;i<=number2;i++){



   answer= naive(i);
    if(i%answer==0){
         printf("%d\n",i);
        sum=sum+i;
       }

}
  printf("sum=%d\n",sum);

}


int naive(int n){
    int sum=0,reminder;
int m=n;
while (n!=0){
        reminder=n%10;

    sum=sum+reminder;


    n=n/10;

}
       // printf("m=%d\n",m);
       // printf("sum=%d\n",sum);

    return sum;


}














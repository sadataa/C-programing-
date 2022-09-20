#include <stdio.h>
#include <math.h>
int main (){

int i,j,n,x,sum1=0,sum=0 ,sum3=0;

printf("enter the number of x:");
scanf("%d",&x);

printf("enter the number of n:");
scanf("%d",&n);

for(i=1;i<=n;i=i+2){


        sum=sum+pow(x,i);
}

for(j=2;j<=n;j=j+2){


        sum1=sum1+pow(x,j);

}

sum3=sum-sum1;

printf("%d",sum3);
return 0;
}


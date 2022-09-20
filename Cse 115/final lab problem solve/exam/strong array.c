#include<stdio.h>
int factorial(int num);
int main(){

int i , result,temp;


int array[100];
for(i=1;i<5;i++){


    printf("enter %d -",i);
    scanf("%d",&array[i]);
}



    for(i=1;i<5;i++){

    temp=array[i];
     result=factorial(array[i]);
     if(temp==result){

        printf(" strong=%d",array[i]);
     }
}

}













int factorial(int num){

int i ,sum=0,temp,last;
while(num>0){

    int fact=1;
    last=num%10;

    for(i=1;i<=last;i++){

        fact=fact*i;

    }
    sum=sum+fact;
    num=num/10;
}


return sum;

}






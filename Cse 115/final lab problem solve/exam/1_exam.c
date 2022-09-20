#include<stdio.h>


int main (){

int arr[100]={1,100,5,50,20};

int i, sum=0 ;

int max=arr[0];
for(i=0;i<5;i++){

    if(arr[i]>max){

        max=arr[i];
    }


}

printf("max=%d\n",max);


for(i=0;i<5;i++){

    if(max%arr[i]==0)
    {

    sum =1;



}
}


if(sum==0){

    Printf()
}
}

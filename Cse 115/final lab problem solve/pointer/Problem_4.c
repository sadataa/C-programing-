//Create an array of size given by the user. Find a number taken as input from user. Your task is
//to print the memory address and the index of the number using pointer to travel the array. Note
//that if number is found at multiple position you should print all memory address

///errror only done for one number cant do more than one
#include <stdio.h >

void search(int *arr, int size ,int *sear);
int main(){

int s,i,find;

printf("Enter array size -");
scanf("%d",&s);
int array[s];

for(i=0;i<s ;i++){

    printf("Enter array element arr[%d] -",i);
    scanf("%d",&array[i]);



}
printf("The number you are looking for  -");
scanf("%d",&find);

    search (array,s, &find);





}

void search(int *arr, int size, int *sear){

int i,x=0 ;
    for(i=0;i<size;i++){


       if(*(arr+i)==*sear){

        printf("found at %d",i+1);

        printf("the address is at %d",arr+i);
        x=1;


    }
    }



    if(x==0){
             printf("the position is  no found " );

    }


}

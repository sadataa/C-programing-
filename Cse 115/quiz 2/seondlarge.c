#include<stdio.h>

int main (){

    int arr[100]={5,10,2,22};
    int i ,size=3;

    int max1=arr[0];
    int max2=arr[0];



    for(i=0;i<=size;i++){
            if(arr[i]>max1){

                max2=max1;
                max1=arr[i];


            }



    }

    printf("%d\n",max2);



     int max3=arr[0];
    int max4=arr[0];



    for(i=0;i<=size;i++){
            if(arr[i]<max3){

                max4=max3;
                max3=arr[i];


            }



    }

    printf("smalll=%d",max4);













return 0;
}

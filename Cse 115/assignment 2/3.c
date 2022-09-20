#include <stdio.h>
    int main (){

int size,i,j;


    printf("enter size ");
    scanf ("%d",&size);
    int arr[size];




    for(i=0;i<size;i++){


    printf("element - ");
        scanf("%d",&arr[i]);

    }




    //printf("%d",n);

    for(i=0;i<size/2;i++){

         int x = arr[i];
        arr[i]=arr[size-i-1];

        arr[size-i-1]=x;




}


 for(i=0;i<size;i++){


        printf("%d\n",arr[i]);


}



    return 0;
    }




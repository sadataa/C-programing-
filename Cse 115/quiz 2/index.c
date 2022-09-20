#include<stdio.h>
int main (){

int i, s, size, array1[1000] ;



   printf("enter size ");
   scanf ("%d",&size);


    for(i=0;i<size;i++){

        printf("enter element of array 1 - %d ",i);
        scanf("%d",&array1[i]);


    }



int  big ;

big = array1[0];


for ( i=0;i<=size;i++){


    if(array1[i]>big){

        big=array1[i];

    }

}
  printf("%d", big );





for ( i=0;i<=size ;i++){

    if (array1[i]==big){

        printf("index of big is  %d\n",i);
    }
}





return 0;
}


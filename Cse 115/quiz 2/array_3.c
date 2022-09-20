#include<stdio.h>
#include <stdlib.h>

int main (){



    int arr[100] ,arr2[100],arr3[100];
    int i,j;
 int  max,range=1,search=5;




    for(i=0;i<=range;i++){
        printf("enter number=");
        scanf("%d",&arr[i]);
    }




    for(i=0;i<=range;i++){
            if(arr[i]==search){


                break ;

            }
            if(i==range){
                printf("not found ");

            }
}






return 0;
}











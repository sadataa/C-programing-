#include<stdio.h>
#include<string.h>
int main(){

    int arr[100][100];
    int row,i,j;

    printf("enter row -");
    scanf("%d",&row);


     for(i=0;i<row;i++){


        for(j=0;j<row;j++){

           printf("[%d][%d]",i,j);
           scanf("%d",&arr[i][j]);
        }
            }




     for(i=0;i<row;i++){


        for(j=0;j<row;j++){

          if(i==j){
            printf("%d  ",arr[i][j]);
          }
          else {

            printf("0  ");
          }
        }

        printf("\n");
            }



printf("upper right");
     for(i = 0; i < row; i++){
      printf("\n");
      for(j = 0; j < row; j++){
      if(i + j<=row-1){
         printf("%d ", arr[i][j]);
      }
      else{
         printf("0 ");

      }
   }
     }

return 0;
}





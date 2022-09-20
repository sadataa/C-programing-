#include<stdio.h>

int main(){


int arr[3][3];
int i ,j ;


for(i=0;i<3;i++){

    for(j=0;j<3;j++){



        printf("arr[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
    }



}


for(i=0;i<3;i++){

    for(j=0;j<3;j++){



        printf("%d ",arr[i][j]);
    }

   printf("\n");

}
printf("Aftr\n");

for(i=0;i<3;i++){

    for(j=0;j<3;j++){



      if(i==0||j==0||j==2||i==2){

        printf("%d ",arr[i][j]);
    }

      }


   printf("\n");

}




return 0;
}

#include<stdio.h>

int main(){
    int i , j,row,col,arr[3][3],x ;




    for(i=0;i<3;i++){



        for(j=0;j<3;j++){

            printf("arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);


        }
    }
  printf("The A matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }





 x=  arr[0][0]*((arr[1][1]*arr[2][2]) -(arr[1][2]*arr[2][1]));



int y =arr[0][1]*(( arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0]));

int z =  arr[0][2]*((arr[1][0]*arr[2][1]) -(arr[1][1]*arr[2][0]));


int sum =x-y+z;


printf("%d",sum);
return 0;
}

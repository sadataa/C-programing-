
# include<stdio.h>
int main (){


int i , j,row,col ;
int sum=0;
int arr[100][100];



printf("row== ");
scanf("%d",&row);
printf("coloum== ");
scanf("%d",&col);


for(i=0;i<row;i++){



    for(j=0;j<col;j++){
        printf("arr[%d][%d]",i,j);
       scanf("%d",&arr[i][j]) ;


    }
}

for(i=0;i<row;i++){



    for(j=0;j<col;j++){

     if(arr[i][j]%2==0){

        sum=sum+arr[i][j];

     }

    }

}


 printf("sum  = %d",sum);

}

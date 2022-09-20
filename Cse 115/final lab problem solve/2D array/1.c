# include<stdio.h>
int main (){

int arr[3][5];


int i , j ;

for(i=0;i<3;i++){



    for(j=0;j<5;j++){
        printf("arr[%d][%d]",i,j);
       scanf("%d",&arr[i][j]) ;


    }
}

for(i=0;i<3;i++){



    for(j=0;j<5;j++){

      printf("%f\t ",(float)(arr[i][j])*2.2) ;


    }
    printf("\n");
}




}

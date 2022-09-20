#include <stdio.h>
int main (){

int arr[100],size=5, flag=0, value =10, max,pos ;


int i ;
for(i=0;i<=size ;i++){
    scanf("%d",&arr[i]);
}



for(i=0;i<=size ;i++){

        if(arr[i]==value){
          pos =i+1;

          printf("position =%d\n",pos);
        }

}



for(i=pos-1;i<=size ;i++){




        arr[i]=arr[i+1];




    }




   for(i=0;i<=size-1 ;i++){

   printf("elsements are %d\n",arr[i]);


    }

return 0;

}

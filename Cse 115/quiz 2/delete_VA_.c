


#include<stdio.h>
int main (){

int arr[100],  s=3,  val=5, x,i;


       for(i=0;i<=s;i++) {

printf("enter val =");
         scanf(" %d",&arr[i]);

         }





for(i=0;i<=s;i++){

        if(arr[i]==val){

            x=i+1;


            printf("x==%d\n",x);
        }


}



         for(i=x-1;i<=s;i++) {


          arr[i]=arr[i+1];

         }



         for(i=0;i<s;i++) {


          printf("%d\n",arr[i]);

         }



return 0;



}

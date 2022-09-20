

#include <stdio.h>
void search(int arr[],int key,int size );

int main()
 {
   int str[]={10,11,12,13,13,15};
   int find,siz;
     printf("arrray size r -");
   scanf("%d",&siz);
   printf("find motherfucker -");
   scanf("%d",&find);

   search(str,find,siz);



 }




   void search(int arr[],int key,int size ){

   int i,x=0;

   for(i=0;i<=size;i++){

    if(arr[i]==key){

        x++;
    }
     else {
   continue;
     }

   }



       printf("got motherfucker %d times", x );

   }

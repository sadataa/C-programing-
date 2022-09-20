
#include <stdio.h>
void search(char arr[],char key);

int main()
 {
   char str[100]="bangladesh";
   char find;

   printf("find motherfucker -");
   scanf("%c",&find);

   search(str,find);



 }




   void search(char arr[],char key){

   int i,x=0;

   for(i=0;arr[i]!='\0';i++){

    if(arr[i]==key){

        x=1;
    }
     else {
    x=0;
     }

   }


   if(x==0){

       printf("got motherfucker");
    }
     else {
        printf("got  not motherfucker");
     }

   }

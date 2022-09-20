
#include <stdio.h>

int main() {

       int count =0,a=0,age;
   while (a!=15){
        printf("take input ");
        scanf("%d",&age);

           a=a+1;

      if (age>=40&&age<=60){



         count ++;

   }
        else {
            continue ;
        }





   }


    printf ("the number of people in this age %d ",count );



    return 0;
}


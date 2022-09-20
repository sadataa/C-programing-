//Write a C program using pointers to read in an array of integers and print its elements in reverse order


#include <stdio.h>
  void arr (int *a, int *b);
 int main()



 {
     int i,size =5;

 int c[]={10, 20, 30, 40, 50};
 int d[]={10, 20, 30, 40, 50};

    arr(c,d);


/*for(i = 0; i < size; i++){
printf("%d ", c[i]);

}


for(i = 0; i < size; i++){
printf("%d ", d[i]);

}
*/

 return 0;
 }

 void arr (int *a, int *b){

        int c[5];
int i;


        for (i=4;i>=0;i--){




    printf("%d ", *(a+i));

}

 }

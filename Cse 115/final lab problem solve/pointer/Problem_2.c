
//2. Write a function which will display sum of two arrays using pointer
 #include <stdio.h>
  void arr (int *a, int *b);
 int main()



 {
     int i,size =5;

 int c[/]={10, 20, 30, 40, 50};
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


        for (i=0;i<5;i++){

           c[i]=*(a+i) + *(b+i);


        }


    for(i = 0; i < 5; i++){
    printf("%d ", c[i]);

}

 }

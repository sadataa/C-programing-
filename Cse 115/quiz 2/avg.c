#include <stdio.h>


int main (){



float arr[100];
int i ;
float avg=0,sum=0,size;



printf("enter size");
scanf("%f",&size);


for(i=0;i<=size;i++){

 scanf("%f",&arr[i]);
}






for(i=0;i<=size;i++){


sum=sum+arr[i];



}

avg=sum/(size+1);


printf("ang =%f\n",avg);







for(i=0;i<=size;i++){
if (arr[i]>avg){



    printf("%f\n",arr[i]);
}
}




return 0;
}



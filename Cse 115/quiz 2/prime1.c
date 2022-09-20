#include <stdio.h>



int  main(){

int i ,n=8,count=0;


for (i=1;i<=n;i++){



    if(n%i==0){



        count++;
    }
}



if(count==2){


    printf("prime");
}





else{

 printf("  not prime");

}
return 0;
}

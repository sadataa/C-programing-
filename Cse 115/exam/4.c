#include<stdio.h>
int main (){


int i ,j,n=5 ,l=0;
char k='A';



for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
{

   printf(" ");
}

    for(j=1;j<=2*i-1;j++){
            if(i%2==0){



    printf("%c",k);
                k++;
            }
            else{
                  printf("%d",l);
                    l++;
            }


}

printf("\n");
}


return 0;
}

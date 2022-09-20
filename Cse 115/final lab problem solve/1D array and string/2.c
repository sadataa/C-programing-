
#include<stdio.h>

#include <string.h>
int main(){


int num ;

int i,j=0,k=0;




int str2[5],str3[5],str[5];

printf( "arr size - ");
scanf("%d",&num);

for(i=0;i<=num;i++){

printf("elemenys arr- ");
scanf("%d",&str[i]);

}






for(i=0;i<num;i++){


if(str[i]%2==0){

    str2[j]=str[i];
    j++;

}
else{

    str3[k]=str[i];
    k++;
}


        }




for(i=0;i<j;i++){

printf( "even - %d",str2[i]);
}

return 0;
}

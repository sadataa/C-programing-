#include<stdio.h>

#include <string.h>
int main(){

char str[1000]="saaaaadat";
int i,j,k;


for(i=1;str[i]!='\0';i++){

        for(j=i+1;str[j]!='\0';j++){



            if(str[j]==str[i]){

               for(k=j;str[k]!='\0';k++){
                        str[k]=str[k+1];


            }
        }



}
}

printf("%s",str);
return 0;
}


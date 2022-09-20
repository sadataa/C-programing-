#include<stdio.h>

int main (void){

FILE *read;
FILE *write;
FILE *negative;


int val;
int ok,sum=0,count=0;


read= fopen("read.txt","r");
write =fopen("positive.txt","w");
negative =fopen("negative.txt","a");



ok=fscanf( read ,"%d",&val);


while (ok !=EOF){


    if(val>1){
            fprintf(write," %d \n" ,val);

    }

    else {

        fprintf(negative,"%d \n" ,val);


    }

ok=fscanf( read ,"%d",&val);


}






fclose(read);
fclose(write);
fclose(negative);

}

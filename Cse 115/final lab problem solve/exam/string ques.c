# include<stdio.h>

int main(){

char name[20]="hello";
int i;

for(i=0;name[i]!='\0';i++){

if(name[i]=='l'){
     printf("x");
}

else{
        printf("%c",name[i]);


}

}

}

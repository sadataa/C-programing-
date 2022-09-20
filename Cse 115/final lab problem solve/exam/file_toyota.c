#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void search();
void input();
void search();

FILE *infile;


struct car
{
    char name[100];

    int no;
}s;

int main(){
input();
search();

}
void input()
{
    int i;
    infile= fopen("car.txt","a");
for(i=0;i<2;i++){
    printf("Enter car company name: ");
     scanf("%s",&s.name);

    printf("Enetr no.");
    scanf("%d",&s.no);
    fprintf(infile,"%s %d \n", s.name, s.no);

    printf("Record seaved sussfully....\n ");
}
fclose(infile);
}




void search(){

FILE *f2;
int status,flag=0;
char ok[100];



f2=fopen("car.txt","r");



printf("get it ");
scanf("%s",&ok);


status=fscanf(f2,"%s %d \n", s.name, &s.no);

while(status!=EOF){

    if(strcmp(s.name,ok)==0){

        printf("%s",s.name);
        flag=1;
    }


  status=fscanf(f2,"%s %d \n", s.name, &s.no);

}

if(flag==0){

    printf("fuck no ");
}

fclose(f2);
}

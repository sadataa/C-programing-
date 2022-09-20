#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void search();
void input();
FILE *infile;

struct car
{
    char company[40];
    char model[50];
   int price;
}s[100];
int status,i;

int main()
{
        while(1)
        {
            int choose;
        printf("1. for input car in text file.\n");
        printf("2. max\n");
        printf("0 for exit\n");
        printf("Enter your choose: ");
        scanf("%d",&choose);
        fflush(stdin);

        switch(choose)
        {
            case 0:
            exit(0);

            case 1:
            input();
            break;
            case 2:
              search();
            break;

        }
        }
}

void input()
{
    infile= fopen("car1.txt","a");
int num;
  printf("Enetr number of car\n ");
    scanf("%d",&num);


for(i=0;i<num;i++){
    printf("Enter car company name: ");
    scanf("%s",&s[i].company);

    printf("Ener model name: ");
    scanf("%s",&s[i].model);
    fflush(stdin);
    printf("Enetr price.");
    scanf("%d",&s[i].price);
    fprintf(infile,"%s %s %d \n", s[i].company, s[i].model, s[i].price);

    printf("Record seaved sussfully....\n ");
}
 fclose(infile);
}
void search(){
FILE *f2;
int status;
f2=fopen("car1.txt","r");
int max=s[0].price;
int f=0;

status=fscanf(f2,"%s %s %d \n", s[i].company, s[i].model, &s[i].price);


while(status!=EOF){

    if(s[i].price>max){
        max=s[i].price;


    }


    status=fscanf(f2,"%s %s %d \n", s[i].company, s[i].model, &s[i].price);

}
printf("max is =%d\n",max);


fclose(f2);
}

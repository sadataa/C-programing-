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
    double price;
}s[100];
int status,i;

int main()
{
        while(1)
        {
            int choose;
        printf("1. for input car in text file.\n");
        printf("2. display toyto car.\n");
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
    infile= fopen("car.txt","a");
for(i=0;i<2;i++){
    printf("Enter car company name: ");
    gets(s[i].company);
    fflush(stdin);
    printf("Ener model name: ");
    gets(s[i].model);
    fflush(stdin);
    printf("Enetr price.");
    scanf("%lf",&s[i].price);
    fprintf(infile,"%s %s %lf \n", s[i].company, s[i].model, s[i].price);
    fclose(infile);
    printf("Record seaved sussfully.... ");
}
}

void search()
{
    char Cname[40];
    int flag=0;

    printf("Enter your search company name: ");

    gets(Cname);
    infile= fopen("car.txt", "r");
        status= fscanf(infile,"%s %s %lf", s.company ,s.model , &s.price);
        while(status != EOF)
        {
            if(strcmp(s.company,Cname)==0)
            {
                printf("%s  %s %lf\n",s.company, s.model, s.price);
                flag =1;
            }
            status= fscanf(infile,"%s %s %lf", s.company ,s.model , &s.price);
        }

        if(flag==0)
    {
        printf("This %s  company not found Our Record.",Cname);
    }
    fclose(infile);

}

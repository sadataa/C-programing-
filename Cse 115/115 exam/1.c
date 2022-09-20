#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void input();
void find();

typedef struct student
{
    int rollno;
    char f_name[20];
    char l_name[20];
    int age;

}student;
int n;
student s[100];


int main()
{
     student s[n];
     int ch;
     printf("Enter No of student: ");
     scanf("%d",&n);

     while(1)
     {
         printf("Choose Your Option\n");
     printf("Press 1 for add student\n");
     printf("Press 2 for Search student");
     printf("\n Press 3 for exit\n");


     printf("Enter Your choose: ");
     scanf("%d",&ch);
     fflush(stdin);

     switch(ch)
     {

            case 1:
            input();
            break;

            case 2:
            find();
            break;


            case 3:
            exit(0);

     }
     }

}

void input()
{
    for(int i=0; i<n; i++)
    {
        printf("Enter student roll number: ");
        scanf("%d",&s[i].rollno);
        fflush(stdin);
        printf("Enter First name: ");
        gets(s[i].f_name);
        printf("Enter Last name: ");
        gets(s[i].l_name);
        printf("Enter Age: ");
        scanf("%d",&s[i].age);
    }
}

void find()
{
    char name[20];
    printf("/n Enter the first name you want to find  name: ");
    gets(name);

    for(int i=0; i<n; i++)
    {
       if(strcmp(s[i].f_name,name)==0)
       {
           printf("Name: %s %s\n",s[i].f_name,s[i].l_name);
           printf("Roll number %d\n",s[i].rollno);
           printf("Age %d\n",s[i].age);
       }

    }
}

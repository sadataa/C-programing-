#include <stdio.h>
#include <string.h>


void add_info(int n);
void display_info(int n);
void covid (int n);
void All(void);


struct sadat {


    int Registration_Number,Age,Contact ,Number,Corona_status;
    char Name[100],Gender[100],Address[1000];


}patient [50];



void main (){
    int option,x ;











    All();


}


void All( void){

int option,x ;

     printf("to add enter 1 - \n");


    printf("to Display  Covid patient display  2 - \n");

    scanf("%d", &option );

    switch(option){

case 1:



 printf("Add info of n- \n");

    scanf("%d", &x );


    add_info(x);
    break;





case 2:


    printf("The  Covid patient list  ");




   covid (x);

    break;
    }
}






void add_info(int n ){

int i ,Corona_status=0;
  for(i=0;i<=n;i++){

     printf("enter patient status 0 or 1 - ");
    scanf ("%d",&patient[i].Corona_status);

    printf("enter patient Age  ");
    scanf ("%d",&patient[i].Age);

    printf("enter patient Reg no  ");
    scanf ("%d",&patient[i].Registration_Number);

    printf("enter patient Contract  ");
    scanf ("%d",&patient[i].Contact);

    printf("enter patient Name ");
    scanf ("%s",&patient[i].Name);

    printf("enter patient Gender  ");
    scanf ("%s",&patient[i].Gender);

       printf("enter patient Address  ");
    scanf ("%s",&patient[i].Address);







  }

  All();
}
void display_info(int n){

    int i;

  for(i=0;i<=n;i++){






        printf(" patient  Age  %d \n",patient[i].Age);

        printf("patient Covid status   %d \n ",patient[i].Corona_status );

        printf("patient Reg  Number  %d \n ",patient[i].Registration_Number );
        printf("patient  Contract Number  %d \n ",patient[i].Contact );

        printf("patient Name   %s \n ",patient[i].Name );

        printf("patient Gender   %s \n ",patient[i].Gender );

        printf("patient  Address %s \n ",patient[i].Address );







  }




}



covid(int n){
    int i;
 for(i=0;i<=n;i++){

  if(patient[i].Corona_status==1){


    display_info(i);


  }
 }

All();
}

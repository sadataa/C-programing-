# include <stdio.h>

struct student {

char name [100];
int salary;
int d;
int m ;
int y;

}student[4] ;


int main (){

    int  i, num ,max,j;



for ( i=1;i<=4 ;i++){
    printf("Enter the name ");
    scanf("%s",&student[i].name);
    printf("Enter the salary ");
    scanf("%d",&student[i].salary);


    printf("Enter the  starting Date ");
    scanf("%d",&student[i].d);


    printf("Enter the  starting month ");
    scanf("%d",&student[i].m);


}
for ( i=1;i<=4 ;i++){
    max=student[1].salary;

    if(student[i].salary>max){

        j=i;

    }
}

        printf("name =%s\n ",student[j].name );

       printf("salary=%d\n ",student[j].salary);

       printf("DOB=%d / %d\ /%d",student[j].d,student[j].m);


return 0;

}

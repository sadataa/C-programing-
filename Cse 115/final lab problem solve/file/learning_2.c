
#include<stdio.h>
int main (void){

FILE *x;
int a=1555,b;
char sa[100]="hi";
char s2[100];
int z;


x=fopen("t.text","a");

fprintf(x , " %s %d",sa,a);

fclose(x);

x=fopen("t.text","r");


fscanf( x,"%s %d",&s2,&b);

printf("%d\n ",b);
printf("%s ",s2);


return 0;

}

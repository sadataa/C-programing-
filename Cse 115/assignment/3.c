
#include <stdio.h>
double  getArea(int a , int b , int h);
int main() {

int a , b ,h;
double  result ;
       printf ("the value of a  ");
       scanf ("%d",&a);
       printf ("the value of b  ");
       scanf ("%d",&b);
       printf ("the value of h  ");
       scanf ("%d",&h);

       result=getArea( a ,b ,h);


     printf("\nThe trapezoid area is = %.3f",result);
    return 0;
}


double getArea(int x , int y , int z){
 double sum =0;
  sum =1.0/2* (x+y)*z;
        return sum;



}


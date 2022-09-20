// Write a C program to calculate the area and perimeter of a circle using pointer.

#include <stdio.h>
#include <math.h>
void areaPeri(float *r);
int main(){

float x;

printf ("enter value of r ");
scanf ("%f",&x);

areaPeri(&x);


printf("x==%f",x);


}
void areaPeri(float *r){
    int perimenter  ;

perimenter =2*3.1416*(*r);
*r=3.1516*pow((*r),2);

printf("peremeter %d\n",perimenter);



}

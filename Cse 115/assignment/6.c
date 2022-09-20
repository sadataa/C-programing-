#include <stdio.h>

void sumofDegit1(int a);
void sumofDegit2(int a);
void sumofDegit3(int a);
int main() {

int a , b ,h;
double  result ;
       printf ("the value of a  ");
       scanf ("%d",&a);

    sumofDegit1(a);
    sumofDegit2(a);
    sumofDegit3(a);



    return 0;
}
void sumofDegit2(int n){
  int r, sum=0;


   for (n; n != 0; n = n/10) {
      r = n % 10;
      sum = sum + r;
   }

   printf("Sum of digits of a number using for = %d\n", sum);


}



void sumofDegit1(int x){
    int reminder,sum=0;

    while(x!=0){
            reminder =x%10;
    sum =sum+reminder;
    x=x/10;


    }

    printf("Sum of digits of a number using while = %d\n", sum);
}


  void sumofDegit3(int num ){
 int sum= 0;
 do {
  sum += num % 10;
  num /= 10;
 } while (num > 0);
 printf ("The Sum is using do while = %d \n",sum);

}


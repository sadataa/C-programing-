#include <stdio.h>
int Armstrong(int a);
int main() {
int  reminder,answer,i;

for (i=1; i<=500;i++){
   Armstrong(i);
}



return 0;

}

int Armstrong(int number){


    int x=number, reminder,sum=0;
while ( number !=0){

    reminder= number %10;

    sum=sum+(reminder*reminder*reminder);

    number=number/10;

}

if (x==sum){

printf("%d\n", sum);
}


}

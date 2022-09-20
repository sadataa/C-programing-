#include <stdio.h>
int palondram (int a);
int main() {
  int m,n ,i;
  printf("enter value of m :");
  scanf("%d",&m);
   printf("enter value of n :");
  scanf("%d",&n);


  for (i=m;i<=n;i++){

      palondram(i);

  }

    return 0;
}
int palondram (int x ){

    int w=x,ok=0,rem;
     while ( x!=0){
         rem=x%10;
         ok=ok*10+rem;
         x=x/10;


     }
     if (ok ==w){

         printf("%d pelenderom\n ",ok);
     }


}


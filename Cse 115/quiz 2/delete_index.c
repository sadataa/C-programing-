#include <stdio.h>
int max (int arr[100],int s);
int search (int arr[100],int s,int val);
int main ()
{
    int i ,array[100],size;
    printf("Enter size :");

    scanf("%d",&size);

    for(i=0;i<=size;i++){



        scanf("%d",&array[i]);
    }

 int sadat=max(array,size);

 int ind=search(array,size,5);


 delet(array,size,ind );

 printf(" big=%d",sadat);




}
int max (int arr[100],int s){

int big=arr[0],i;


for(i=0;i<=s;i++){

    if(arr[i]>big){

        big=arr[i];


    }


}



return big ;
}

int search (int arr[100],int s,int val){

int i;


    for(i=0;i<=s;i++){


        if(arr[i]==val){

         printf("index %d\n",i);
         return i;
        }
    }

}

int delet(int arr[100], int s, int ind ){

int i;


         for(i=ind;i<=s;i++) {


          arr[i]=arr[i+1];

         }
  printf("after delete -  ");

    for(i=0;i<s;i++) {

            printf("%d\n",arr[i]);

         }





}














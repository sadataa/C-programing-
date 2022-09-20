
#include <stdio.h>
    int main (){
void shiftArr1Pos (int arr1[], int arrSize) ;
 void arr1Rotate (int arr1[], int arrSize, int rotFrom)  ;

     int size,i,j,r;
    printf("enter size");
    scanf ("%d",&size);
    int arr[size];

    for(i=0;i<size;i++){

        printf("element - ");
        scanf("%d",&arr[i]);

    }

shiftArr1Pos(arr,size);

printf(" the position you want to Root from - ");
        scanf("%d",&r);

arr1Rotate (arr,size,r);

}







void shiftArr1Pos (int arr1[], int arrSize){
int n,i;
    printf("enter the index \n");
    scanf("%d",&n);

 printf("From %d th position the values of the array are\n",n);

for(i=n;i<arrSize;i++){


        printf("%d\n",arr1[i]);


}



}



arr1Rotate (int arr1[], int arrSize, int rotFrom){

int i;

printf("After rooting from index %d \n",rotFrom);
for(i=rotFrom;i<arrSize;i++){


        printf("%d\n",arr1[i]);


}


for(i=0;i<rotFrom;i++){


        printf("%d\n",arr1[i]);


}


}











#include <stdio.h>
    int main (){


    int arr[100]={1,2,1,5,6};

    int i,j,n;


    //printf("%d",n);

    for(i=0;i<100;i++){

            int uni=0;

       for (j=i+1;j<100;j++){

        if(arr[i]==arr[j]){


            uni=1;
        }



       }


       if(uni==0){


            printf("%d\n",arr[i]);

       }





    }

    return 0;
    }




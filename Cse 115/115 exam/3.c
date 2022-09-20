///Tanvir Sadat

///1812796642
    #include <stdio.h>


    void sw (int *arr, int k, int size);
    void swap(int *ptr1, int *ptr2);
    int  main()
    {

        int x[10];
        int i, n,z;

        printf("Enter array size...\n");
        scanf("%d", &n);

        printf("Enter the element \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", x + i);
        }


        printf("enter value of k...\n");
        scanf("%d", &z);

        sw ( x, z, n);




    }

void sw ( int *arr, int k, int size){


int i;



        swap(arr+k , arr + k+1);
        printf("\nResultant Array...\n");

        for (i = 0; i < size; i++)
        {
            printf("Array[%d] = %d\n", i, arr[i]);
        }

    }




    void swap(int *ptr1, int *ptr2 )
    {

        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

    }

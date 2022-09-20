#include <stdio.h>

int main()
{
    int arr[7]={1,5,8,5,9,3,5};
    int serach_key=5;
    int firstIndex=-1,lastIndex=-1,i;
    for(i=0;i<7;i++)
    {
        if(arr[i]==serach_key)
        {
            if(firstIndex==-1)
            {
                firstIndex=i;
                lastIndex=i;
            }
            else
            {
                lastIndex=i;
            }

        }
    }
    printf("First index: %d\n",firstIndex);
    printf("Last index: %d",lastIndex);

    return 0;
}

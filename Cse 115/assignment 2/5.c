#include<stdio.h>

int main (){



char str[100]="Ssadat123";



//puts(str);


int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
       while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
puts(str);

return 0;








}

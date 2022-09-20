#include <stdio.h>
#include <string.h>

struct S_info
{
    char title[50];
    char singerName[20];
    int date;

};



int main()
{
    struct S_info s;
    int numSongs;
    char sa[100]="s";
    int i;
    FILE *fp;
    fp = fopen("songs.txt", "a");
    printf("Enter number of songs: ");
    scanf("%d", &numSongs);
    for(i = 1; i <= numSongs; i++)
        {
            printf("\nEnter %d song details:\n", i);
            printf("Enter title of song: ");
            scanf("%s", s.title);

            printf("Enter singer name: ");
            scanf("%s", s.singerName);



            fprintf(fp,"%s %s \n",s.title,s.singerName);
        }
        fclose(fp);
        printf("\n\nTitles of the songs in file: \n\n");






    FILE *fp1;

    fp1 = fopen("songs.txt", "r");
    if(fp1== NULL)
    {
        printf("File Can't Open...");
    }

    else
        {
            while(!feof(fp1))
            {
                fscanf(fp1, "%s %s ", s.title, s.singerName);


                if(strcmp(s.title,"sadat")==0)
            {
                printf("%s \n",s.title);

            }
            }


            }


    fclose(fp1);
}

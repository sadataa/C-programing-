#include<stdio.h>


void displayTitle();

    int main(){
struct S_info
{
    char title[50];
    char singerName[20];
    struct date
{
    int mm;
    int dd;
    int yyyy;
}rdate;
    int rating;
};

void displayTitle();
void appendSongs();
void deleteSong();

int main()
{
    struct S_info s;
    int numSongs;
    int i;
    FILE *fp;
    fp = fopen("songs.txt", "w");
    printf("Enter number of songs: ");
    scanf("%d", &numSongs);
    for(i = 1; i <= numSongs; i++)
        {
            printf("\nEnter %d song details:\n", i);
            printf("Enter title of song: ");
            scanf("%s", s.title);

            printf("Enter singer name: ");
            scanf("%s", s.singerName);

            printf("Enter month of release: ");
            scanf("%d", &s.rdate.mm);

            printf("Enter day of release: ");
            scanf("%d", &s.rdate.dd);

            printf("Enter year of release: ");
            scanf("%d", &s.rdate.yyyy);

            printf("Enter rating: ");
            scanf("%d", &s.rating);

            fprintf(fp,"%s %s %d %d %d %d\n",s.title,s.singerName,s.rdate.mm,s.rdate.dd,s.rdate.yyyy,s.rating);
        }
        fclose(fp);
        printf("\n\nTitles of the songs in file: \n\n");
        displayTitle();

        printf("\n\nAppend three songs:\n\n");
        appendSongs();

        printf("\n\nDelete a song:\n\n");
        deleteSong();

        return 0;
}

void displayTitle()
{
    FILE *fp;
    struct S_info s;
    fp = fopen("songs.txt", "r");
    if(fp == NULL)
    {
        printf("File Can't Open...");
    }

    else
        {
            while(!feof(fp))
            {
                fscanf(fp, "%s %s %d %d %d %d\n", s.title, s.singerName, &s.rdate.mm, &s.rdate.dd, &s.rdate.yyyy, &s.rating);
                printf("%s\n", s.title);
            }
        }

    fclose(fp);
}

void appendSongs()
{
    struct S_info s;
    int i;
    FILE *fp;
    fp = fopen("songs.txt", "a");
    for(i = 1; i <= 3; i++)
        {
            printf("\nEnter %d song details:\n", i);
            printf("Enter title of song: ");
            scanf("%s", s.title);

            printf("Enter singer name: ");
            scanf("%s", s.singerName);

            printf("Enter month of release: ");
            scanf("%d", &s.rdate.mm);

            printf("Enter day of release: ");
            scanf("%d", &s.rdate.dd);

            printf("Enter year of release: ");
            scanf("%d", &s.rdate.yyyy);

            printf("Enter rating: ");
            scanf("%d", &s.rating);

            fprintf(fp, "%s %s %d %d %d %d\n", s.title, s.singerName, s.rdate.mm, s.rdate.dd, s.rdate.yyyy, s.rating);
       }
       fclose(fp);
}

void deleteSong()
{
    FILE *fp;
    FILE *tempfp;
    struct S_info s;
    char title[50];

    printf("Enter a title of song you want to delete: ");
    scanf("%s", title);

    fp = fopen("songs.txt", "r");

    tempfp = fopen("temp.txt", "w");

    if(fp == NULL)
        {
            printf("File Can't Open...");
        }
    else
    {
        while(!feof(fp))
        {
            fscanf(fp, "%s %s %d %d %d %d\n", s.title, s.singerName, &s.rdate.mm, &s.rdate.dd, &s.rdate.yyyy, &s.rating);
            if(strcmp(s.title, title) != 0)
            {
                fprintf(tempfp, "%s %s %d %d %d %d\n", s.title, s.singerName, s.rdate.mm, s.rdate.dd, s.rdate.yyyy, s.rating);
            }
        }
    }

    fclose(fp);

    fclose(tempfp);

    remove("songs.txt");

   rename("temp.txt","songs.txt");
}
}

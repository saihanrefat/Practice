#include<stdio.h>
int main()
{
    FILE *file;
   // char name[25];
   // int age;
    char ch;
    file = fopen("test.txt","r");
    if(file ==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opned\n");
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
}

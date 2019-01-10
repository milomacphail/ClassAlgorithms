#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char* name = "Milo";
    printf("%s\n", name);

    for (int i = strlen(name) -1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}
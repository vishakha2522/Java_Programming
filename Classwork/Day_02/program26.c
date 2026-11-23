#include<stdio.h>
#include<Stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",sName);

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}
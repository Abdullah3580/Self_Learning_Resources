#include<stdio.h>
int main()
{
    char name[100];
   printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("YOUR NAME IS: %s\n",name);
}
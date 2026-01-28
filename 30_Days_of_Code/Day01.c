#include<stdio.h>
int main()
{
    int s[100];
    fgets(s,100,stdin);
    printf("Hello, World. \n");
    printf("%s",s);
    return 0;
}

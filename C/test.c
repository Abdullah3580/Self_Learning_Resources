#include<stdio.h>
int sum = 0;
int n;
int i=0;

int main()
{
    //printf("input n: ");
    scanf("%d",&n);
    int arr[n];
    char s[100];
    getchar();
    fgets(s,100,stdin);

    int j = 0;
    while(s[i] != '\0')
    {
        printf("i:%d ",i);
        if(s[i] >= '0' && s[i]<= '9' && j < 3)
        {
            int d= (int)s[i] - '0';
            arr[j] = d;
            printf("j:%d %d ",j,arr[j]);
            j++;
            sum = sum + d;
        }
        printf("\n");
        i++;
    }
    //for(int i =0 ;i < n; i++)
    //{
        //printf("%d ",arr[j]);
        //printf("%d ",arr[i]);
   // }
}



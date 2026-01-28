#include<stdio.h>
int sum = 0;
int n;
int i=0;

int main()
{
    printf("input n: ");
    scanf("%d",&n);
    int arr[n];
    char s[100];
    getchar();
    fgets(s,100,stdin);

    int j = 0;
    while(s[i] != '\0' && j < 3)
    {
        if(s[i] >= '0' && s[i]<= '9')
        {
            int d= (int)s[i] - '0';
            arr[j] = d;
            j++;
            sum = sum + d;
        }
        i++;
    }


    findSum(i,arr);


    //arr[3] = sum;
    //printf("sum = %d",sum);

    for(int j=0; j < sizeof(arr)/4; j++)
    {
        printf("%d ",arr[j]);
    }
}


int findSum(int i,int arr[])
{
    int k = i-2;
    while(k <= i)
    {
        sum = arr[k];
    }

while(i < n)
    {
        sum = findSum(i,arr);
        i++;
    }
}

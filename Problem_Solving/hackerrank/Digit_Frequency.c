#include<stdio.h>
int main()
{
      
      char s[1000];
      int digit[10];
      gets(s);
      
      for(int j=0; j<=9; j++)
      {
            digit[j] = 0;
      }

      int i=0;
      while(s[i] != '\0')
      {
            if(s[i] >= '0' && s[i]<= '9')
            {
                  int d= (int)s[i] - 48;
                  digit[d] ++;
            }
             i++;
      }

      for(int j=0; j<=9; j++)
      {
            printf("%d ",digit[j]);
      }
}

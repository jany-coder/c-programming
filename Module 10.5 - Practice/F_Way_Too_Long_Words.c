#include<stdio.h>
#include<string.h>

int main()
{
   int t;
   scanf("%d", &t);

   for (int i = 0; i < t; i++)
   {
        char s[101];
        scanf("%s", &s);
        int n = strlen(s);

        if (n <= 10)
        {
            printf("%s\n", s);
        } else {
            printf("%c%d%c\n", s[0],n-2, s[n-1]);
        }
        
   }
   
    
    return 0;
}
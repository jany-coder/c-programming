#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);

    int isPalindrom = 1;

    for (int i = 0; i < n/2; i++)
    {
        if (s[i] != s[n-i-1])
        {
           isPalindrom = 0;
           break; 
        }
        
    }

    if (isPalindrom)
    {
       printf("YES");
    } else {
        printf("NO");
    }
    
    
    
    return 0;
}
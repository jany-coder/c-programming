#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ',')
        {
            printf(" ");
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            printf("%c", s[i] - 'a' + 'A');
        } else if(s[i] >= 'A' && s[i] <= 'Z') {
            printf("%c", s[i] - 'A' + 'a');
        }
    }
    
    printf("\n");
    return 0;
}
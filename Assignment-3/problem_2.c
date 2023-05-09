#include <stdio.h>

int main()
{
    int n,k,s;
    scanf("%d", &n);
    k=1;
    s= n-1;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        s--;
        for (int j = 1; j <= k; j++)
        {
           printf("%d", k);
        }
        k++;
        
         printf("\n");
    }
    
    return 0;
}
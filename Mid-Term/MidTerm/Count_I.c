#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int a[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    int evenCnt = 0;
    int oddCnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            evenCnt++;
        }
        if (a[i]%2 == 1)
        {
            oddCnt++;
        }
    }

    printf("%d %d", evenCnt, oddCnt);
    
    return 0;
}
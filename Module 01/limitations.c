#include <stdio.h>
    int main()
    {
        long long int sum = 0;
        int n;
        scanf("%d", &n);
        for (int i = 0; i <= n; i++)
        {
            sum+=i;
        }

        printf("%lld", sum);
        
        return 0;
    }
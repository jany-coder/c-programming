#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[1001];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    
    int x, counter = 0;

    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
      if (a[i] == x)
      {
        counter++;
      }
      
    }
    
    printf("%d", counter);
    return 0;
}
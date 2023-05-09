#include <stdio.h>
int count_before_zero(int ar[], int n){
    int count = 0;
    while (count < n && ar[count] != 0) {
        count++;
    }
    return count; 
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    printf("%d\n", count_before_zero(ar, n));
    return 0;
}
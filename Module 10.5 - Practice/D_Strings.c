#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s\n", a);
    scanf("%s", b);

    int lenA = strlen(a), lenB = strlen(b);

    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);
    return 0;
}
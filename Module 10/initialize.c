#include <stdio.h>

int main()
{
    // char a[5] = {'R', 'a', 'h', 'a', 't'};
    char a[] = "Rahat\0";
    printf("%s", a);
    
    return 0;
}
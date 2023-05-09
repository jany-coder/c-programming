// #include <stdio.h>

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int x = 3, y = 5;
//     int result = add(x, y);
//     printf("%d", result);
//     return 0;
// }

// #include <stdio.h>

// float get_pi(void) {
//     return 3.14159;
// }

// int main() {
//     float pi = get_pi();
//     printf("The value of pi: %f\n", pi);
//     return 0;
// }

#include <stdio.h>

void show_menu(void) {
    printf("Menu:\n");
    printf("1. Burger - 200 tk\n");
    printf("2. Pizza - 900  tk\n");
    printf("3. Juice - 100 tk\n");
}

int main() {
    show_menu();
    return 0;
}


#include <stdio.h>
#include "my_mat.h"

int main() {
    char operation;
    scanf("%c", &operation);
    while (operation != 'D') {
        if (operation == 'A') {
            A();
            scanf("%c", &operation);
        }
        else if (operation == 'B') {
            int i = scanf("%d", &i);
            int j = scanf("%d", &j);
            B(i, j);
            scanf("%c", &operation);
        }
        else if (operation == 'C') {
            int i = scanf("%d", &i);
            int j = scanf("%d", &j);
            C(i, j);
            scanf("%c", &operation);
        }
    }
    return 0;
}


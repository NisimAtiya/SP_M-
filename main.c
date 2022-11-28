#include <stdio.h>
#include "my_mat.h"

int main() {
    char operation;
    int i=0,j=0;
    scanf("%c", &operation);
    while (operation != 'D') {
        if (operation == 'A') {
            A();

        }
        else if (operation == 'B') {
            scanf("%d %d",&i,&j);
            B(i, j);
        }
        else if (operation == 'C') {
            scanf("%d %d",&i,&j);
            C(i, j);
        }
        scanf("%c",&operation);

    }
    return 0;
}


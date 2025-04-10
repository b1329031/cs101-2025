#include <stdio.h>

void multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%d\t", i, j, i*j);
    } else {
        multi(i, j - 1);
        printf("%d*%d=%d\t", i, j, i*j);
    }
}

void table(int i) {
    if (i == 1) {
        multi(i, 9);
        printf("\n");
    } else {
        table(i - 1);
        multi(i, 9);
        printf("\n");
    }
}

int main() {
    table(9);
    return 0;
}

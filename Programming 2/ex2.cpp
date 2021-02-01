#include <stdio.h>

int main() {
        int values[10], cnt;

        for (cnt = 0; cnt < 10; cnt++) {
                values[cnt] = cnt + 1;
        }

        for (cnt = 9; cnt >= 0; cnt--) {
                printf("%d, ", values[cnt]);
        }
        return 0;
}

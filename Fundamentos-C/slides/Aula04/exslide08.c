#include <stdio.h>

int main() {
    int nums[100];

    for (int i = 0 ; i < 100 ; i++) {
        nums[i] = i * 2;
    }

    for (int i = 0 ; i < 100 ; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

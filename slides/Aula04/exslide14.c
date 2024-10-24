#include <stdio.h>

int main() {
    int nums[3][2] = {{1,2},{3,4},{5,6}};

    for (int i = 0 ; i < 3 ; i++)
        printf("%d %d\n", nums[i][0], nums[i][1]);
    
    return 0;
}


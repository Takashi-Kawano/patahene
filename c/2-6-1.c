#include <stdio.h>
#include <stdlib.h>

int main() {
    int Array[5];
    int temp1, temp2;

    Array[0] = 2;
    Array[1] = 4;
    Array[2] = 3;
    Array[3] = 6;
    Array[4] = 1;

    temp1 = Array[0];
    temp2 = Array[1];

    Array[0] = Array[4];
    Array[1] = temp1;

    Array[4] = Array[3];
    Array[3] = temp2;

    printf("Array[0]は、%d\n", Array[0]);
    printf("Array[1]は、%d\n", Array[1]);
    printf("Array[2]は、%d\n", Array[2]);
    printf("Array[3]は、%d\n", Array[3]);
    printf("Array[4]は、%d\n", Array[4]);
}

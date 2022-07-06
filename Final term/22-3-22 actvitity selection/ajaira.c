#include <stdio.h>

int main() {
     int numberOfInput;
    scanf(numberOfInput);
    int array[numberOfInput];

    printf("input numbers ");
    for (int i; i < numberOfInput; i++)
    {
        scanf(array[i]);
    }
    for (int i; i < numberOfInput; i++)
    {
        printf("%d", array[i]);
    }
}
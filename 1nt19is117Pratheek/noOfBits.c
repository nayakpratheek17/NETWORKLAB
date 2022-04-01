#include<stdio.h>

int main() {
    char name[100];
    printf("Enter the string\n");
    scanf("%s", name);
    int len = 0;
    int i = 0;
    while(name[i] != '\0') {
        i++;
        len++;
    }
    printf("The number of bits in name is %d\n", len * 8);

    int number;
    printf("Enter the number\n");
    scanf("%d", &number);
    printf("the size of the number is %ld\n", sizeof(number) * sizeof(int) * 8);
    return 0;
}
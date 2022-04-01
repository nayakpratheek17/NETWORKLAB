#include<stdio.h>
#include<time.h>

int main() {
    clock_t start, end;
    int a[10];
    int sum = 0;
    printf("Enter 10 numbers\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", & a[i]);
    
    start = clock();
    for(int i = 0;i < 10; i++) 
        sum += a[i];
    printf("%d", sum);
    end = clock();
    printf("The program took %f seconds to execute\n", (double)(end - start) / CLOCKS_PER_SEC);
}
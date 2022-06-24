#include <stdio.h>
#include <time.h>
int main()
{
    clock_t begin = clock();

    printf("Hello world\n");
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f", time_spent);
}
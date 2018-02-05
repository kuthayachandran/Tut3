#include <stdlib.h>
#include <stdio.h>

int main(void) {

    char name[100];
    int age;
    float height;

    printf("Please enter your name\n");
    scanf("%s", &name);
    printf("Please enter your age\n");
    scanf("%d", &age);
    printf("Please enter your height\n");
    scanf("%f", &height);
    printf("%s\n", name);
    printf("%d\n", age);
    printf("%f\n", height);
    return 0;
}
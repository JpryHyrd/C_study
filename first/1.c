#include <stdio.h>

// 1 task
void task1(void) {
    printf("5 digits:\n");
    int x1, x2, x3, x4, x5;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    double mean = (x1 + x2 + x3 + x4 + x5) / 5.0;
    printf("Result: %.3lf\n", mean);
}

// 2 task
void task2(void) {
    int n;
    printf("digit:\n");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Chetnoe)\n");
    else
        printf("Nechetnoe((\n");

}

// 3 task
void task3(void) {
    int age;
    printf("Your age in years:\n");
    scanf("%d", &age);
    printf("You are %d years or %d days\n", age, age*365);
}

// 4 task
void task4(void){
    int toes = 10;
    printf("toes = %d\ntoes*2 = %d\ntoes^2 = %d\n", toes, 2*toes, toes*toes);
}

// 5 task
void task5(void) {
    int growth;
    printf("Height Sm\n");
    scanf("%d", &growth);
    printf("Your Height in dm: %.2lf\n", growth / 2.54);
}

int main(void) {
    task2();
    return 0;
}

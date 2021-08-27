// 2. Add two complex numbers by passing structures to a function

#include <stdio.h>
typedef struct complex {
    float real;
    float img;
} complex;

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return (temp);
}

int main() {
    complex n1, n2, ans;
    scanf("%f %f", &n1.real, &n1.img);
    scanf("%f %f", &n2.real, &n2.img);

    ans = add(n1, n2);

    printf("Sum = %.1f + %.1fi", ans.real, ans.img);
    return 0;
}


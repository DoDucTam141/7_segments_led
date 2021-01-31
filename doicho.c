#include<stdio.h>

int main()
{
    // day la chuong trinh doi cho hai so su dung con tro
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf(" cac so truoc khi doi la a = %f, b = %f\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" cac so sau khi doi la a = %f, b = %f\n", a, b);

    return 0;
}
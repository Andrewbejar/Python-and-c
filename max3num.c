#include <stdio.h>

float Max2Numbers(float x, float y)
{
    return (x > y) ? x : y;
}

float Max3Numbers(float a, float b, float c)
{
    return Max2Numbers(Max2Numbers(a, b), c);
}

int main()
{
    float num1, num2, num3;

    scanf("%f %f %f", &num1, &num2, &num3);

    printf("%f\n", Max3Numbers(num1, num2, num3));

}

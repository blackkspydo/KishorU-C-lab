/*WAP to add two complex number using structure and user defined
function.*/

#include <stdio.h>

struct complex
{
    int real;
    int img;
};

struct complex add(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main()
{
    struct complex c1, c2, c3;
    printf("Enter real part of first complex number: ");
    scanf("%d", &c1.real);
    printf("Enter imaginary part of first complex number: ");
    scanf("%d", &c1.img);
    printf("Enter real part of second complex number: ");
    scanf("%d", &c2.real);
    printf("Enter imaginary part of second complex number: ");
    scanf("%d", &c2.img);
    c3 = add(c1, c2);
    printf("Sum of complex numbers is: %d + %di\n", c3.real, c3.img);
    return 0;
}
/*WAP to add two complex number using structure.*/

#include <stdio.h>

struct complex
{
    int real;
    int img;
};

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
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    printf("Sum of complex numbers is: %d + %di\n", c3.real, c3.img);
    return 0;
}

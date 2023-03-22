#include <stdio.h>

void circle();
void square();
void triangle();

int main()
{
    char ch;
    printf("Enter the word c,s,t for area of circle,square,triangle respectively:");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'c':
        circle();
        break;

    case 's':
        square();
        break;

    case 't':
        triangle();
        break;
    default:
        printf("Invalid input!");
    }
    return 0;
}

void circle()
{

    float r;
    printf("enter the radius:");
    scanf("%f", &r);
    printf("The area of circle is:%f", ((22 * r * r) / 7));
}

void square()
{
    float l;
    printf("enter the side:");
    scanf("%f", &l);
    printf("The area of square is:%f", (l * l));
}

void triangle()
{
    float h, b;
    printf("Enter the height and base:");
    scanf("%f%f", &h, &b);
    printf("The area of the triangle is:%f", ((h * b) / 2));
}
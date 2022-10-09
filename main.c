#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Diameter = 2r = 2r* radie
//Omkrets = 2πr = 2 * π * radie
//Area = πr² =  π * radie * radie
int main()
{
    float radius;
    float area;
    float circumference;
    float diameter;

    printf("\n Please Enter the radius of a circle in meters : ");
    scanf("%f",&radius);

    diameter = 2 * radius * 100;
    circumference = 2 * M_PI * radius * 100;
    area = M_PI * radius * radius;

    printf("\n Diameter of a circle in cm= %.2f\n", diameter);
    printf("\n Circumference of a circle in cm = %.2f\n", circumference);
    printf("\n Area Of a circle in m^2= %.2f\n", area);

    return 0;
}
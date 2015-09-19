#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float a,b,c;
    bool imaginaryFlag;
    
    printf("------ Program to find the square root of quadratic equation (ax^2 + bx + c) ------\n");
    
    //Enter coefficients
    printf("Enter coefficient 'a' for x^2: ");
    scanf("%f",&a);
    
    if(!a)
    {
        printf("Error: Equation is not quadratic since coefficient of x^2 is 0. Exiting. \n");
        exit(0);
    }
    else
    {
        printf("Enter coefficient 'b' for x: ");
        scanf("%f",&b);
    
        printf("Enter constant 'c': ");
        scanf("%f",&c);
    
        //Check for imaginary roots
        imaginaryFlag = (b*b < 4*a*c);
    
        if(!imaginaryFlag)  //roots are real
            printf("Roots are (%lf, % lf) \n", (0.5/a)*((-b)+sqrt(b*b - 4*a*c)),(0.5/a)*((-b)-sqrt(b*b - 4*a*c)));
        else                //roots are imaginary
            printf("Roots are (%lf +/- i*%lf) \n", -(0.5/a)*(b), (0.5/a)*(sqrt(4*a*c - b*b)));
    }
        return 0;
}


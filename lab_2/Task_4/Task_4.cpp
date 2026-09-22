// Task_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>
#include <math.h>


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    double S, h, beta;
    double a, b, c;
    double alpha, gamma, P;
    double brad, arad;
    double pi = 3.14159;


    printf("\nВведіть S: "); scanf("%lf", &S);
    printf("\nВведіть h: "); scanf("%lf", &h);
    printf("\nВведіть beta: "); scanf("%lf", &beta);

    brad = beta * pi / 180.0;


    
    a = h / sin(brad);
    c = (2 * S) / h;
    b = sqrt(a * a + c * c - 2 * a * c * cos(brad));
   





    arad = acos((b * b + c * c - a * a) / (2 * b * c));







    alpha = arad * 180.0 / pi;
    gamma = 180.0 - alpha - beta;






    P = a + b + c;




    
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);
    printf("alpha = %.2f\n", alpha);
    printf("beta = %.2f\n", beta);
    printf("gamma = %.2f\n", gamma);
    printf("P = %.2f\n", P);


    return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// lab_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include <windows.h>



int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    float x, y, z, a, b, c, S;

    printf("\nВведіть x: "); scanf("%f", &x);
    printf("\nВведіть y: "); scanf("%f", &y);
    printf("\nВведіть z: "); scanf("%f", &z);

    a = pow(2, -x);
    b = sqrt(x + pow(fabs(y), 0.25));
    c = pow(exp(x - 1.0 / sin(z)), 1.0 / 3.0);

    S = a * b * c;

    printf("Результат S=%.4f\n", S);

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

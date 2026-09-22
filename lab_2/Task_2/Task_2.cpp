// Task_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <windows.h>
#include <stdio.h>


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);



    float A = 5.0, B = 10.0, C = 12.0, D = 20.0;
    printf("Початкові значення:A=%f, B=%f, C=%f, D=%f\n", A, B, C, D);

   
    A = A + D;
    D = A - D;
    A = A - D;

    D = D + C;
    C = D - C;
    D = D - C;

    A = A + B;
    B = A - B;
    A = A - B;

    printf("Кінцеві значення:A=%f, B=%f, C=%f, D=%f\n", A, B, C, D);

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

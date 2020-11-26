//
// Created by flori on 26.11.2020.
//
#include "Uebung6.h"
#include <stdio.h>
#include <math.h>


void equation();
void dec2bin();
void binarysum();
long  binary2dec(int lenght);
void logarithmus();


int ue6_starter() {
    // to allow debugging with CLION
    setbuf(stdout, 0);

    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program: \n--Equation Solving.(1)\n--Decimal to Binary.(2)\n--Binary Addition.(3)\n--Logarithms.(4)\n--- Exit (5)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            equation();
            ue6_starter();
            break;
        case 2:
            dec2bin();
            ue6_starter();
            break;
        case 3:
            binarysum();
            ue6_starter();
            break;
        case 4:
            logarithmus();
            ue6_starter();
            break;
        case 6:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue6_starter();

    }

    return 0;
}

void equation(){
    double a,b,c, result;
    printf("Welcome - Please enter a,b,c");
    scanf_s("%lf", &a);
    printf("B Please");
    scanf_s("%lf", &b);
    printf("C Please");
    scanf_s("%lf", &c);
    if(a==0){
        if(b == 0){
            if (c == 0){
                printf("Result is not identified -> 1.");
            }
            else{
                printf("Equation cannot be resolved.");
            }
            result = -c / b;
            printf("Result is: %lf", result);
        }
    }
    else{
        double disk = (pow(b, 2))-(4*a*c);
        if(disk > 0)
        {
            double x1 = (-b+sqrt(disk))/(2*a);
            double x2 = (-b-sqrt(disk))/(2*a);
            printf("Results are x1=%lf and x2=%lf", x1, x2);
        }
        else if(disk == 0){
            double x1 = -b / 2*a;
            printf("Result is: %lf", x1);
        }
    }
}

void dec2bin(){
    int a= +2147483646, b = 64;
    printf("Welcome - Please enter the integer to convert!");
    scanf_s("%d", &a);
    printf("Please enter the amount of bits to receive");
    scanf_s("%d", &b);

    for (int i = 0; i < b; ++i) {
        printf("Binary Number (2^%d): %d\n", i, a%2);
        a = a / 2;
    }
}

void binarysum(){
    int length = 0;
    printf("Please enter two binary numbers and give the lenght of bits in advance:");
    scanf_s("%i", &length);
    printf("Please enter the first binary number and start with the first (MSB) bit.");
    long x = binary2dec(length);
    printf("Please enter the second binary number and start with the first (MSB) bit.");
    long y = binary2dec(length);
    if ((x + y) > pow(2, length)){
        long erg = x + y - pow(2, length);
        printf("%d", erg);
    }
    else{
        printf("The result is: %d", x+y);
    }


}

long binary2dec(int lenght){
    int input= 0;
    long res = 0;
    for (int i = 1; i <= lenght; ++i) {
        printf("\nPlease enter the next digit: ");
        scanf_s("%i", &input);
        if(input == 1) {
            res = res + pow(2, lenght - i);
        }
        else if(input > 1){
            printf("Please enter a valid digit");
            break;
        }
    }
    return res;
}

void logarithmus(){
    double a, b;
    printf("Please enter the Logarithm and the Base");
    scanf_s("%lf", &a);
    printf("Please enter the Base");
    scanf_s("%lf", &b);
    printf("%lf.2",log10(a)/log10(b));
}




//
// Created by flori on 26.11.2020.
//

#include "uebung5.h"
#include <stdio.h>
#include <math.h>

void teiler();
void shapes();
void kgv();
void binary2dec();
void int2asci();


void ue5_starter() {
    // to allow debugging with CLION
    setbuf(stdout, 0);
    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program: \n--Shape Builder.(1)\n--Teiler Info.(2)\n--Lowest Common Multiple.(3)\n--Binary 2 Decimal.(4)\n--Int to Ascii.(5)\n--- Exit (6)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            shapes();
            ue5_starter();
            break;
        case 2:
            teiler();
            ue5_starter();
            break;
        case 3:
            kgv();
            ue5_starter();
            break;
        case 4:
            binary2dec();
            ue5_starter();
            break;
        case 5:
            int2asci();
            ue5_starter();
            break;
        case 6:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue5_starter();
    }
}

void shapes(){
    int n;
    long square;
    printf("\nYou seem to want to draw cool shapes! \nAll we need is an indicator of size. \nPlease enter one: \n");
    scanf("%i", &n);

    printf("Rectangle: \n");
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    printf("Rectangle with holes: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == (n-1)){
                printf("* ");
            }
            else if (j == 0 || j == (n-1))
                printf("* ");
            else{
                printf("  " );
            }
        }
        printf("\n");
    }

    printf("Triangle: \n");
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("* ");
        }
        printf("\n");

    }
    printf("Triangles filled: \n");
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("* ");
        }
        for (int j = i; j < n; ++j) {
            printf("+ ");
        }
        printf("\n");
    }
}


void teiler(){
    int lenght=0,x=1, primzahl= 0;
    printf("\nYou have selected to find all divisors of a positive number. \nFirstly we need that very number: ");
    scanf_s("%i", &lenght);
    while (x <= lenght){
        if ((lenght % x) == 0){
            printf("\n%i ist ein Teiler", x);
            primzahl++;

        }
        x++;

    }
    if (primzahl == 2) printf("\n%i ist eine Primzahl", lenght);
    else printf("\n%i ist keine Primzahl", lenght);
}

// kleinstes gemeinsames vielfaches kgv
void kgv(){
    //iterative herangehensweise
    int a, b, count = 1;
    long result;
    printf("\n\nWelcome to easy common multiple finding!\nAll we need is a and b.");
    printf("\nPlease enter a:\n");
    scanf_s("%i",&a);
    printf("Please enter b: \n");
    scanf_s("%i", &b);

    while (count <= b) {
        if ((count * b) % a == 0){
            result = count * b;
            break;
        }
        else
            count++;
    }
    printf("The smallest common multiple is: %i", result);
}

void binary2dec(){
    int lenght = 0, input= 0 ;
    long res = 0;
    printf("Please enter the amount of digits to enter: \n");
    scanf_s("%i", &lenght );

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
    printf("Result: %ld", res);
}


void int2asci(){
    int number;
    printf("Welcome to your favorite int to Ascii Converter! \nPlease note, that special language characters, like \"Ä\",\"Ü\" and \"Ö\" will be counted as other characters. \nPlease enter the asci number: ");
    scanf_s("%i", &number);
    printf("\nCharacter is: %c and it is a ", number);
    if (64 < number  && number  < 91) {
        printf("Capital Letter\n");
    }
    else if(96 < number  && number  < 123){
        printf("small letter\n");
    }
    else if(47 < number  && number  < 58){
        printf("Number\n");
    }
    else{
        printf("other character of no particular class.\n");
    }

}


//
// Created by flori on 30.11.2020.
//
#include "Uebung7.h"
#include <stdio.h>

void kegel();
void schaltjahr();
void temperature();


int ue6_starter() {
    // to allow debugging with CLION
    setbuf(stdout, 0);

    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program: \n--Equation Solving.(1)\n--Decimal to Binary.(2)\n--Binary Addition.(3)\n--Logarithms.(4)\n--- Exit (5)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            kegel();
            ue6_starter();
            break;
        case 2:
            schaltjahr();
            ue6_starter();
            break;
        case 3:
            temperature();
            ue6_starter();
            break;
        case 4:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue6_starter();

    }

    return 0;
}



void kegel(){
    int lenght = 0, innerspaces = 1, outerspace;
    printf("Please enter the height of the pyramid");
    scanf_s("%d", &lenght);
    outerspace = lenght;
    for (int i = 0; i < lenght+1; ++i) {
        if(i == lenght+1){
            printf("_/");
            for (int j = 0; j < innerspaces; ++j) printf(" ");
            printf("\\_");
        }
        else if(i == 0) {
            for (int j = 0; j < outerspace; ++j) printf(" ");
            printf("_");
        }
        else {
            for (int j = 0; j < outerspace; ++j) printf(" ");
            printf(("/"));
            for (int j = 0; j < innerspaces; ++j) printf(" ");
            printf('\\');

        }
        innerspaces =+2 ;
        outerspace--;
    }
}

void schaltjahr(){
    int year= 2020;
    printf("Please enter the year to be examined. -");
    scanf_s("%i", &year);
    if ((year%4) == 0)
        if ((year %100)!=0 && (year %100)!=0 ){
            printf("Yes it is a schaltjahr! \n");
        }
}

void temperature(){
    double temperature;
    printf("Please enter the temperature to convert from °Celsius to Fahrenheit and Kelvin");
    scanf_s("%lf", &temperature);
    if (temperature < -245){
        printf("Please enter a temperature that is actually existant.");
    }
    else{
        printf("Fahrenheit: %lf.2", (9/5)*temperature +32);
        printf("Kelvin: %lf.2", temperature + 273.15);
    }
}
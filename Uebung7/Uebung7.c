#include "Uebung7.h"
#include <stdio.h>

void kegel();
void schaltjahr();
void temperature();

int ue7_starter() { // should act as main for excercise fufillment
    // to allow debugging with CLION
    setbuf(stdout, 0);

    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program: \n--Kegel.(1)\n--Schaltjahr.(2)\n--Temperatur.(3)\n--Calculator (4) \n--- Exit (4)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            kegel();
            ue7_starter();
            break;
        case 2:
            schaltjahr();
            ue7_starter();
            break;
        case 3:
            temperature();
            ue7_starter();
            break;
        case 4:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue7_starter();

    }

    return 0;
}

void kegel(){
    int lenght = 0, innerspaces = 1, outerspace;
    printf("Please enter the height of the pyramid");
    scanf_s("%d", &lenght);
    outerspace = lenght+1;
    for (int i = 0; i <= lenght; ++i) {
        if(i == lenght){
            printf("_/");
            for (int j = 0; j < innerspaces; ++j) printf(" ");
            printf("\\_\n");
            innerspaces = innerspaces +2 ;
        }
        else if(i == 0) {
            for (int j = 0; j < outerspace; ++j) printf(" ");
            printf("_\n");
        }
        else {
            for (int j = 0; j < outerspace; ++j) printf(" ");
            printf(("/"));
            for (int j = 0; j < innerspaces; ++j) printf(" ");
            printf("\\\n");
            innerspaces = innerspaces +2 ;

        }
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
        double fahrenheit = 1.8 * temperature + 32;
        printf("Fahrenheit: %.2lf - ", fahrenheit);
        printf("Kelvin: %.2lf ", temperature + 273.15);
    }
}
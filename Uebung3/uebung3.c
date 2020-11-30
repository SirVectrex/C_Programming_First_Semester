//
// Created by flori on 26.11.2020.
//

#include "uebung3.h"
#include "../Uebung2/uebung2.h"

//
// Created by flori on 03.11.2020.
//
#include <stdio.h>
#include <math.h>

void calculator();
void equation();
void minmax();
void triangles();

void main() {
    int choice = 0;
    printf("\nWelcome!\n\nSelect your desired program: \n--Triangle Info.(1)\n--Minimum-Maximum Searches.(2)\n--Equation solving.(3)\n--Calculator.(4)\n---Exit.(5)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            triangles();
            main();
            break;
        case 2:
            minmax();
            main();
            break;
        case 3:
            equation();
            main();
            break;
        case 4:
            calculator();
            main();
            break;
        case 5:
            printf("Bye.");
            break;

        default:
            printf("please enter a valid number.\n\n");
            main();
    }
}

void triangles(){
    float x, y, z, max;
    long square;
    printf("\nYou have to learn more about triangles \nEach triangle has 3 sides. Please enter the lenght of each one \nLets start with number one: (cm)\n");
    scanf("%f", &x);
    printf("Please enter number two: \n");
    scanf_s("%f",&y);
    printf("Please enter number three: \n");
    scanf_s("%f",&z);
    if(x==y&&y==z){
        printf("equilateral");
    }
    else if(x==y || x==z || y==z){
        printf("isosceles");
    }
    else {
        //find longest side
        if (x > y && x > z) {
            max = x;
            x = y;
            y = z;
        }
        else if (y > x && y > z) {
            max = y;
            x = x;
            y = y;
        }
        else { max = z; }
        //Pythagoras-Theory

        if (((x * x) + (y * y)) == (max*max)) {
            printf("Triangle is right-angled");
        } else {
            printf("Triangle is just a random triangle");
        }
    }
}

void minmax(){
    int lenght=0, min, max, input;
    printf("\nYou have selected to find a min and max value in a row \nFirstly we need to know, how many numbers you`d love to input");
    scanf_s("%i", &lenght);
    printf("Please start entering numbers and hit enter after each one. \nFirst:");
    scanf_s("%i", &input);
    min = input;
    max = input;
    for(int count = 0; count < lenght-1; count++){
        printf("Next:");
        scanf_s("%i", &input);
        min = ((min > input) ? input : min);
        max = ((max < input) ? input : max);
    }
    printf("Smallest number: %i, Biggest number: %i \n", min, max);
}


void equation(){
    // equation = ax + b = 0
    // ax = -b
    // -b/a = x
    // test: -2/2 = -1 ==> 2*(-1) + 2 = 0

    float a, b, x;
    printf("\n\nWelcome to your very smart equation solver!\n\nThe equation to be solved is f(x)= ax + b = 0  \nAll we need is a and b.");
    printf("\nPlease enter a:\n");
    scanf_s("%f",&a);
    printf("Please enter b: \n");
    scanf_s("%f",&b);
    if(a == 0){ printf("x is independent of the result %f", b);}
    else{
        x = -b/a;
        printf("Result for x is %.2f", x);
    }
}

void calculator(){
    int x=0, y=0, choice = 0;
    printf("\n\nWelcome to your very smart calculator of choice!\n\nYou have selected to calculate sum.(1), sub.(2), mult.(3) or div.(4) \nPlease select your mathmatical operation of choice\n");
    scanf_s("%i",&choice);
    printf("We also need 2 integers from you to work with. \nPlease enter number one:\n");
    scanf_s("%i",&x);
    printf("Please enter number two: \n");
    scanf_s("%i",&y);
    switch (choice) {
        case 1:
            printf("You chose to summarize.\n");
            printf("- %i+%i= %i \n",x,y,(x+y));
            break;
        case 2:
            printf("You chose to subtract.\n");
            printf("- %i-%i= %i \n",x,y,x-y);
            break;
        case 3:
            printf("You chose to multiplicate.");
            printf("- %i*%i= %i \n",x,y,x*y);
            break;
        case 4:
            if (y==0){
                printf("Dividing by 0 is against the LAW!");
            }
            else{
                printf("You chose to divide.");
                printf("- %i:%i=%.4f \n\n",x,y,(float)x/y);
            }
            break;
        default:
            printf("Please enter a valid number.");
            calculator();
    }




}



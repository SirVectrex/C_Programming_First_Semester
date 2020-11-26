//
// Created by flori on 26.11.2020.
//

#include "uebung4.h"

//
// Created by flori on 10.11.2020.
//
#include <stdio.h>
#include <math.h>

void fibonacci();
void arithmetic_average();
void order_classification();
void floyd(); //works fine

int main() {
    setbuf(stdout, 0);
    int choice = 0;
    printf("\nWelcome!\n\nSelect your desired program: \n--Order Classification.(1)\n--Arithmetic Average.(2)\n--Fibonacci.(3)\n--Floyd-Triangle.(4)\n---Exit.(5)\n");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            order_classification();
            main();
            break;
        case 2:
            arithmetic_average();
            main();
            break;
        case 3:
            fibonacci();
            main();
            break;
        case 4:
            floyd();
            main();
            break;
        case 5:
            printf("Bye.");
            break;

        default:
            printf("please enter a valid number.\n\n");
            main();
    }
    return 0;
}

void order_classification(){
    int lenght=0, input=0, positive=0, negative=0, nullis = 0, gerade=0, ungerade=0, reihenfolge=0, lastinput=0;
    printf("\nYou have selected to find more information about your inputs! \nFirstly we need to know, how many numbers you`d love to input");
    scanf_s("%i", &lenght);
    printf("Please start entering numbers and hit enter after each one.\n");

    for(int count = 0; count < lenght; count++){
        printf("---%i to go\n", lenght-count);
        printf("Next input: ");
        scanf_s("%i", &input);
        if(input == 0 ){
            nullis++;
        }
        else if(input > 0){
            positive++;
        }
        else if(input < 0){
            negative++;
        }
        if(input % 2 == 0){
            gerade ++;
        }
        else{
            ungerade++;
        }
        // order management
        if(lastinput!=0) {
            if (reihenfolge != 3) {
                if (lastinput <= input && (reihenfolge == 1 || reihenfolge == 0)) {
                    reihenfolge = 1;
                } else if (lastinput >= input && (reihenfolge == 2 || reihenfolge == 0)) {
                    reihenfolge = 2;
                }
                else{
                    reihenfolge = 3;
                }

            }
        }
        //set var to current repitition value for order switching
        lastinput = input;

    }
    printf("Your inputs delivered the following results: \n");
    printf("even: %i \nun-even: %i \n", gerade, ungerade);
    printf("Zeros: %i\nPositive numbers: %i \nnegative numbers %i\n",nullis, positive, negative);
    printf("All numbers were in order: %i \nWhich translates to: Increasing(1), Decreasing(2), No order (3), Zeros Only (0)\n", reihenfolge);
}


void arithmetic_average(){
    int input=1, sum=0, numbers=0;
    float result;
    printf("\nYou have selected to find an artihmetic average of given numbers \n");
    printf("Please start entering numbers and hit enter after each one. We will stop using your numbers as soon as you enter 0. \n");

    while (input != 0){
        printf("\nNext or enter 0 to cancel. - ");
        scanf_s("%i", &input);
        if(input == 0) {break;}
        sum = sum + input;
        numbers++;
    }
    if(numbers==0){
        printf("Please enter more than one number! We`ll loop you back to the main menu.\n");
    }
    else{
        printf("Thank you for entering your numbers!");
        result = sum / numbers;
        printf("\nAverage: %f.2", result);
    }

}

void fibonacci(){
    int lenght, counter = 1, t1 = 0, t2 = 1, nextTerm ;
    printf("\nYou have selected to output the algorithm of fibonacci for a certain lenght. \nFirstly we need to know the lenght.\n");
    scanf_s("%i", &lenght);
    for (counter = 1; counter <= lenght+1; ++counter) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

void floyd(){
    int sum = 1, lenght;
    printf("\nYou have selected to find a min and max value in a row \nFirstly we need to know, how many numbers you`d love to input");
    scanf_s("%i", &lenght);
    for(int counter = 1; counter < lenght+1; counter++){
        for(int counter2 = 0; counter2 < counter; counter2++){
            printf("%i - ", sum);
            sum++;
        }
        printf("\n");
    }

}



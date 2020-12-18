//
// Created by flori on 08.12.2020.
//

#include "uebung8.h"
#include "stdio.h"

void arith_avg(int numbers[4]);
int biggest_number(int numbers[5]);
void pow_user_int();
long pow(int a, int b);
int error = 0;
char errormsg[100];
int errorquest(){
    if(error == 1) return 1;
};
float rechnet(char operation, float op1, float op2);
void rechner_starten();

int ue8_starter() {
    // to allow debugging with CLION
    setbuf(stdout, 0);

    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program: \n--Average of numbers.(1)\n--Biggest of five.(2)\n--Pows.(3)\n-- Calculator (5)\n--- Exit (6)");
    scanf_s("%i",&choice);

    switch (choice) {
        case 1:
            int case1_numbers[4] = {1,2,3,4};
            arith_avg(case1_numbers);
            ue8_starter();
            break;
        case 2:
            int case2_numbers[5] = {1,2,3,4,5};
            biggest_number(case2_numbers);
            ue8_starter();
            break;
        case 3:
            pow_user_int();
            ue8_starter();
            break;
        case 4:
            rechner_starten();
            ue8_starter();
            break;
        case 5:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue8_starter();

    }

    return 0;
}


void arith_avg(int numbers[4]){
    double avg = 0;
    for (int i = 0; i < 4; ++i) {
        avg = avg + numbers[i];
    }
    avg = avg / 4;
    printf("The average is: %.2lf", avg);

}

int biggest_number(int numbers[5]){
    int max = 0;
    for (int i = 0; i < 5; ++i) {
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
    return  max;
}

void pow_user_int(){
    int a, b;
    // TO DO: ADD USER INTERACTION
    pow(a, b);
}

long pow(int a, int b){
    // TO DO: ADD ERROR HANDLING OF FALSE INPUTS
    long res = 1;
    for (int i = 0; i < b; ++i) {
        res = res * a;
    }
    return res;
}

void rechner_starten(){
    printf("Welcome! What arithmetic operation do you want to do?('+', '-', '*', '/', '^') ");
    char operation;
    scanf_s("%c", &operation);
    printf("Please enter the two operands. Start with a.");
    float a,b;
    scanf_s("%lf", &a);
    printf("\nNext one:");
    scanf_s("%lf", &b);
}

float rechnet(char operation, float op1, float op2){
    float res = 0;
    switch(operation){
        case '+':
            res = op1 + op2;
             break;
        case '-':
            res = op1 - op2;
            break;
        case '*':
            res = op1 * op2;
            break;
        case '/':
            if (op2 == 0){
            error = 1;
            errormsg[0] = "Dividing by 0 - Not allowed";
            }
            else{
                res = op1 / op2;
            }
            break;
        case '^':
            res = pow((int)op1, (int)op2);
            break;
    }
    return res;
}
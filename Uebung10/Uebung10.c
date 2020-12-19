//
// Created by flori on 18.12.2020.
//
#include "stdio.h"
#include "string.h"
void bewege(char a, char b, char c, int n);
void var_swap(int *var1, int *var2);
void framed_output(char string[]);
int getarraylenght(char string[]);
void change_sentence(char origin[], char destination[]);


void ue10_starter(){
    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program:"
           "\n--Building towers of Hanoi.(1)"
           "\n--Show a framed Output.(2)"
           "\n--Swap two variables.(3)"
           "\n--Rebuild a sentence.(4) "
           "\n--- Exit (5)\n");
    scanf_s("%i",&choice);
    switch (choice) {
        case 1:
            short disks = 0;
            printf("Please enter the amount of disks to be used for the tower of hanoi.");
            scanf_s("%hu", &disks);
            bewege('A', 'B', 'C', disks);
            ue10_starter();
            break;
        case 2:
            char message[] = "OTH-Regensburg";  //Static Sample Text
            framed_output(message);
            ue10_starter();
            break;
        case 3:
            int var1 = 10, var2 = 20;
            var_swap(&var1, &var2);
            ue10_starter();
            break;
        case 4:
            char oldmessage[] = "Hey. Wie geht es dir.";
            char newmessage[100];
            change_sentence(oldmessage, newmessage);
            ue10_starter();
            break;
        case 5:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue10_starter();

    }
}

void bewege(char a, char b, char c, int n)
{
    if (n == 1) {
        printf("%c --> %c\n", a, c);
    } else {
        bewege(a, c, b, n-1);
        bewege(a, b, c, 1);
        bewege(b, a, c, n-1);
    }
}

void var_swap(int *var1, int *var2){
    int old_value = *var1;
    *var1 = *var2;
    *var2 = old_value;
}

void framed_output(char string[]){
    // line one
    printf("/");
    for (int i = 0; i < getarraylenght(string)+2; ++i) {
        printf("-");
    }
    printf("\\ \n");
    //line two
    printf("| %s | \n", string);
    //line three
    printf("\\");
    for (int i = 0; i < getarraylenght(string)+2; ++i) {
        printf("-");
    }
    printf("/");
}

int getarraylenght(char string[]){
    int lenght = 0;
    while (string[lenght] != '\0')
        lenght++;
    return lenght;
}

void change_sentence(char origin[], char destination[]){
    printf("Your sentence is: %s \n", origin);
    strcpy(destination,origin);
    int counter = 0;
    while(destination[counter] != '\0'){
        if (destination[counter] == '.'){
            destination[counter] = '\n';
        }
    counter++;
    }
    printf("Your new sentence has been saved. It is: %s \n", destination);
}

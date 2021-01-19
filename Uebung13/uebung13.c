#include "uebung13.h"
#include "stdio.h"
#include "malloc.h"
#include "string.h"

int findTarget(char *target, char nameptr[][80], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (strcmp(target,nameptr[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}

// for(;;) = Endlosschleife
void tauschen(const char * str, const char * old, const char * new){
    // scanning for the amount of old in str
    char *currentelement;
    int amount = 0;
    int firstrun = 0;
    currentelement = str;
    do {
        currentelement = strstr((currentelement + firstrun * strlen(old)), old);
        printf("rest of string = %s\n", currentelement);
        amount++;
        firstrun = 1;
    } while (currentelement != NULL);
    amount = amount -1;
    printf("Amount = %d", amount);

    //allocate a string with a needed lenght // calloc for terminating 0
    char * newstring = (char*)calloc(strlen(str + (amount * (strlen(old)-strlen(new)))+1));

    // copy old elements into the new one
    strcpy()


}

void strtest(){
    const char str[50] = "is the this of this";
    const char this[50] = "this";
    const char new[5] = "newthis";
    tauschen(str, this, new);
}














void ue13_starter(){
    int choice = 0;
    printf("\nWelcome!\n\nSelect your desired program:"
           "\n--Binary Search.(1)"
           "\n--Count even numbers in 2 arrays.(2)"
           "\n--Check if equal numbers in array.(3)"
           "\n--Create stars for numers in array.(4) "
           "\n--- Exit (5)\n");
    scanf("%i",&choice);
    switch (choice) {
        case 1: {
            break;
        }
        case 2: {

            break;
        }
        case 3: {

            break;
        }
        case 4: {

            break;
        }
        case 5:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");


    }
}
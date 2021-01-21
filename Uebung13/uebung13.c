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
void tauschen(const char * str, const char * old, const char * new) {
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
    amount = amount - 1;
    printf("Amount = %d", amount);

    //allocate a string with a needed lenght // calloc for terminating 0
    char *newstring = (char *) calloc(strlen(str + (amount * (strlen(old) - strlen(new))) + 1), sizeof(char));

    // copy old elements into the new one
    char *ptr;
    ptr = str;
    const char *tmpptr = str;
    char *newptr = newstring;
    for (;;) {
        ptr = strstr(ptr, old);
        if (ptr != NULL) {
            strncpy(newptr, tmpptr, ptr - tmpptr);
            newptr += (ptr - tmpptr);
            strncpy(newptr, new, strlen(new));
            newptr += strlen(new);
            ptr += (strlen(old));
            tmpptr = ptr;
        }
        printf("%s", newstring);
    }
}

void CeasersEncryptionMachine(char * toedit, int key){
    printf("Raw String: %s\n", toedit);
    for (int i = 0; i < strlen(toedit); ++i) {
        if (toedit[i] + key > 122){
            toedit[i] = toedit[i] + key - 25;
        }
        else{
            toedit[i] = toedit[i] + key;
        }
    }
    printf(("New string: - %s"),toedit);

}

void CeasersDecryptionMachine(char * toedit, int key){
    printf("Raw String: %s\n", toedit);
    for (int i = 0; i < strlen(toedit); ++i) {
        if (toedit[i] + key < 97){
            toedit[i] = toedit[i] - key + 25;
        }
        else{
            toedit[i] = toedit[i] - key;
        }
    }
    printf(("New string: - %s"),toedit);

}

void strtest(){
    const char str[50] = "is the this of this";
    const char this[6] = "this";
    const char new[5] = "newthis";
    CeasersEncryptionMachine(this, 6);
    printf("\nAfter Method 1:%s\n",this);
    CeasersDecryptionMachine(this, 6);
    printf("\nAfter method: %s", this);
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
//
// Created by flori on 22.12.2020.
//

#include "uebung11.h"
#include "suche.h"
#include "stdio.h"
void printarray_int(int array[], int lenght);
void evenElements(int array1[], int array2[], int size1, int size2);
void numbers_to_stars();
void count_equals();

void ue11_starter(){
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
            int x;
            printf("Please enter the integer to search for.");
            scanf("%i", &x);
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
            int n = sizeof(arr) / sizeof(arr[0]);
            int result = binarySearch(arr, 0, n - 1, x);
            (result == -1) ? printf("Das Element ist nicht im Array enthalten")
                           : printf("Das Element ist bei Index: %d", result);
            ue11_starter();
            break;
        }
        case 2: {
            int arr1[] = {2, 3, 4, 10, 40};
            int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            printf("This is a test");
            int lenght1 = sizeof(arr1)/sizeof(arr1[0]);
            int lenght2 = sizeof(arr2)/sizeof(arr2[0]);
            evenElements(arr1, arr2, lenght1, lenght2);
            ue11_starter();
            break;
        }
        case 3: {
            count_equals();
            ue11_starter();
            break;
        }
        case 4: {
            numbers_to_stars();
            ue11_starter();
            break;
        }
        case 5:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue11_starter();

    }
}

void evenElements(int array1[], int array2[], int size1, int size2){

    int newarray[40] = { 0 };
    int index = 0;
    for (int i = 0; i < size1; ++i) {
        if((array1[i]) % 2 == 0){
            newarray[index] = array1[i];
            index++;
        }
    }
    for (int i = 0; i < size2; ++i) {
        if((array1[i]) % 2 == 0){
            newarray[index] = array1[i];
            index++;
        }
    }
    // print new array
    for (int i = 0; i < size2+size1; ++i) {
        if (newarray[i] == 0 && newarray[i+1] == 0 && newarray[i+1] == 0){
            i = 40;
            break;
        }
        printf("Odd Element Number %i: %i \n", i, newarray[i]);
    }
}

void count_equals(){
    int amount = 1;
    printf("Please enter the amount of integers you want to enter: ");
    scanf("%i", &amount);
    if (amount > 0) {
        int vector_to_save[amount];
        for (int i = 0; i < amount; ++i) {
            printf("\nPlease enter digit number: %i -> ", i);
            scanf("%i", &vector_to_save[i]);
        }
        short equals = 0;
        //check for doubles
        for (int i = 0; i < amount; ++i) {
            int current = vector_to_save[i];
            for (int j = 0; j < amount; ++j) {
                if (current == vector_to_save[j]) {
                    j = amount;
                    i = amount;
                    equals = 1;
                }
            }
        }
        // output 1 if is equal
        if (equals == 1) {
            printf("At least one number exists twice.\nYour array is: ");
        }
        // print the whole array
        printarray_int(vector_to_save, amount);
    }

}

void printarray_int(int array[], int lenght){
    for (int i = 0; i < lenght; ++i) {
        printf("%i ", array[i]);
    }
}


void numbers_to_stars() {
    printf("Please enter the amount of integers to input: ");
    int amount;
    scanf("%i", &amount);
    int myarrav[amount];
    for (int i = 0; i < amount; ++i) {
        printf("\nItem %i :", i);
        scanf("%i", &myarrav[i]);
    }
    for (int i = 0; i < amount; ++i) {
        printf("\nItem Number %i - ", i);
        for (int j = 0; j < myarrav[i]; ++j) {
            printf(" *");
        }
    }
}
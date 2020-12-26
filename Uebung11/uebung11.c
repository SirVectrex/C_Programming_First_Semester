//
// Created by flori on 22.12.2020.
//

#include "uebung11.h"
#include "suche.h"
#include "stdio.h"
void printarray_int(int * array[]);
void evenElements(int* array1[], int* array2[]);
void numbers_to_stars();
void count_equals();

void ue11_starter(){
    int choice = 0;
    printf("\n\nWelcome!\n\nSelect your desired program:"
           "\n--Binary Search.(1)"
           "\n--Count even numbers in 2 arrays.(2)"
           "\n--Check if equal numbers in array.(3)"
           "\n--Create stars for numers in array.(4) "
           "\n--- Exit (5)\n");
    scanf_s("%i",&choice);
    switch (choice) {
        case 1:
            int x = 0;
            printf("Please enter the integer to search for.");
            scanf_s("%i", &x);
            int arr[] = {1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
            int n = sizeof(arr) / sizeof(arr[0]);
                        int result = binarySearch(arr, 0, n - 1, x);
            (result == -1) ? printf("Das Element ist nicht im Array enthalten")
                           : printf("Das Element ist bei Index: %d", result);
            ue11_starter();
            break;
        case 2:
            int arr1[] = { 2, 3, 4, 10, 40 };
            int arr2[] = {1,2,3,4,5,6,7,8,9,10};
            evenElements(arr1,arr2);
            ue11_starter();
            break;
        case 3:
            count_equals();
            ue11_starter();
            break;
        case 4:
            numbers_to_stars();
            ue11_starter();
            break;
        case 5:
            printf("Bye");
            break;
        default:
            printf("please enter a valid number.\n\n");
            ue11_starter();

    }
}

void evenElements(int* array1[], int* array2[]){
    int newarray[40];
    int index = 0;
    for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); ++i) {
        if((*array1[i]) % 2 == 0){
            newarray[index] = array1[i];
            index++;
        }
    }
    for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); ++i) {
        if((*array1[i]) % 2 == 0){
            newarray[index] = array1[i];
            index++;
        }
    }
    // print new array
    for (int i = 0; i < newarray; ++i) {
        if (newarray[i] == 0 && newarray[i+1] == 0 && newarray[i+1] == 0){
            i = 40;
            break;
        }
        printf("Odd Element Number %i: %i", index, newarray[i]);
    }
}

void count_equals(){
    int amount = 1;
    printf("Please enter the amount of integers you want to enter");
    scanf_s("%i", &amount);
    if (amount > 0) {
        int vector_to_save[amount];
        for (int i = 0; i < amount; ++i) {
            printf("Please enter digit number: %i", i);
            scanf_s("%i", &vector_to_save[i]);
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
            printf("At least one number exists twice.");
        }
        // print the whole array
        printarray_int(vector_to_save);
    }

}

void printarray_int(int * array[]){
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        printf("%i", array[i]);
    }
}


void numbers_to_stars() {
    printf("Please enter the amount of integers to input: ");
    int amount = 0;
    int myarrav[amount];
    scanf_s("%i", amount);
    for (int i = 0; i < amount; ++i) {
        printf("\nItem %i :", i);
        scanf_s("%i", myarrav[i]);
    }
    for (int i = 0; i < amount; ++i) {
        printf("\nItem Number %i - ", i);
        for (int j = 0; j < myarrav[i]; ++j) {
            printf(" *");
        }
    }
}
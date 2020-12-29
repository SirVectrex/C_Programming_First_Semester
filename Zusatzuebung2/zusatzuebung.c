//
// Created by flo on 29.12.20.
//

// sextal-system -> maximum value with 4 digits = 1296 = 6⁴
#include "zusatzuebung.h"
#include "stdio.h"
int senary_to_decimal(int array[], int lenght);
int * decimal_to_senary(int number);
void calculate_for_aliens();
void subtract_for_aliens();

void comm_with_aliens(){
    int z0 , z1, z2, z3;
    z0 = 0 ;
    z1 = 2 ;
    z2 = 3 ;
    z3 = 1 ;
    // Get senary number
    printf("Please enter the Senary numbers.");
    //scanf("Number 1: %i", &z0);
    //scanf("Number 2: %i", &z1);
    //scanf("Number 3: %i", &z2);
    //scanf("Number 4: %i", &z3);

    // Convert to decimal
    int array_of_senaries[4] = {z0, z1, z2, z3};
    int decimal = senary_to_decimal(array_of_senaries, 4);
    printf("Decimal: %i", decimal);

    // Perform sick operation
    printf("\nYour current sick operation to do for cool people is +1 -> ");
    int res = decimal + 1;

    // Convert to Senary
    if( res > 1296){
        printf("Operation not possible, as number is inexistant in Senary system.\nWill return to main.");
        comm_with_aliens();
    }
    else {
        int *newSenary = decimal_to_senary(res);

        z0 = *newSenary;
        z1 = *(newSenary +1);
        z2 = *(newSenary +2);
        z3 = *(newSenary +3);
        printf("\nNew Senary Number: %i - %i - %i - %i", z0, z1, z2, z3);
    }

}

int senary_to_decimal(int array[], int lenght){
    int decimal = 0;
    if(lenght == 4)
    {
        decimal = 216 * array[0] + 36 * array[1] + 6 * array[2] + 1 * array[3];
    }
    return decimal;
}

int * decimal_to_senary(int number){
    static int array[4] = { 0 };
    printf("%i", number);
    array[3] = number % 6;
    number = number / 6;
    array[2] = number % 6;
    number = number / 6;
    array[1] = number % 6;
    number = number / 6;
    array[0] = number % 6;
    return array;
}

 void calculate_for_aliens(){
    // Was passiert bei Überlauf? -> Zahl wird Null
    // init both numbers
    int arr1[4] = {0,0,5,1};
    int arr2[4] = {0,0,3,5};
    int transfer = 0;
    int finalarr[4] = { 0};
    // first digits
    finalarr[3] = (arr1[3] + arr2[3]) % 6;
    transfer = (arr1[3] + arr2[3]) / 6;
    // second digits
     finalarr[2] = (arr1[2] + arr2[2] + transfer) % 6;
     transfer = (arr1[2] + arr2[2]+ transfer) / 6;
    // third digits
     finalarr[1] = (arr1[1] + arr2[1] + transfer) % 6;
     transfer = (arr1[1] + arr2[1]+ transfer) / 6;
    // last digits
     finalarr[0] = (arr1[0] + arr2[0] + transfer) % 6;
     transfer = (arr1[0] + arr2[0] + transfer) / 6;
    // print the shit
     printf("\nNew Senary Number: %i - %i - %i - %i", finalarr[0], finalarr[1], finalarr[2], finalarr[3]);
 }

void subtract_for_aliens(){
    // Was passiert bei Überlauf? -> Zahl wird Null
    // init both numbers
    int arr1[4] = {0,0,5,1};
    int arr2[4] = {0,0,3,5};
    int transfer = 0;
    int finalarr[4] = { 0};
    // first digits
    transfer = (arr1[3] + arr2[3]) / 6;
    finalarr[3] = (arr1[3] + arr2[3]) % 6;
    // second digits
    finalarr[2] = (arr1[2] + arr2[2] + transfer) % 6;
    transfer = (arr1[2] + arr2[2]+ transfer) / 6;
    // third digits
    finalarr[1] = (arr1[1] + arr2[1] + transfer) % 6;
    transfer = (arr1[1] + arr2[1]+ transfer) / 6;
    // last digits
    finalarr[0] = (arr1[0] + arr2[0] + transfer) % 6;
    transfer = (arr1[0] + arr2[0] + transfer) / 6;
    // print the shit
    printf("\nNew Senary Number: %i - %i - %i - %i", finalarr[0], finalarr[1], finalarr[2], finalarr[3]);
}





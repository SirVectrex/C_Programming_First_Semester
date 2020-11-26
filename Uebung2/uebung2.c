//
// Created by flori on 26.11.2020.
//

#include "uebung2.h"

#include <stdio.h>

void task1(){
    int x, y;
    printf("\nYou have selected to calculate an average of two \n Please enter the first number \n");
    scanf("%i", &x);
    printf("Please enter number two: \n");
    scanf_s("%i",&y);
    float average = (x+y)/2;
    printf("The average is %.2f \n \n",average);
}

void task2(){
    int x=0, y=0;
    printf("\nYou have selected to calculate sum., div., sub. and mult. \n Please enter the first number");
    scanf_s("%i",&x);
    printf("Please enter number two: \n");
    scanf_s("%i",&y);
    printf("- %i+%i=%i \n",x,y,(x+y));
    printf("- %i-%i=%i \n",x,y,x-y);
    printf("- %i*%i=%i \n",x,y,x*y);
    printf("- %i:%i=%.4f \n\n",x,y,(float)x/y);

}


void task3(){
    int price = 0, discount= 10;
    printf("\nYou have selected to calculate a price!"
           "\nPlease enter the needed Data!\n "
           "Price before Discount: ");
    scanf_s("%i", &price);
    printf("Your Discount: ");
    scanf("%i",&discount);
    printf("\n----------\n");
    float newprice = price  - (price * discount/100);
    printf("Original Price: %i Euro \nYour Discount is: %i% \nYour final price is: %.2f EURO", price, discount, newprice);

}


int ue2starter() {
    printf("Hello User!\nLets go through the Tasks!\n\n");
    task1();
    task2();
    task3();
    return 0;
}


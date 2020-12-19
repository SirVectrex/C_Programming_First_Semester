//
// Created by flori on 18.12.2020.
//
#include "stdio.h"

void bewege(char a, char b, char c, int n);
void var_swap(int *var1, int *var2);
void framed_output(char string[]);
int getarraylenght(char string[]);


void ue10_starter(){
    int five = 5, ten = 10;
    var_swap(&five, &ten);
    printf("Five: %i, Ten: %i", five, ten);
}

void bewege (char a, char b, char c, int n)
{
    if (n == 1) {
        printf("Lege die oberste Scheibe von Turm %c "
               "auf Turm %c.\n", a, c);
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
    for (int i = 0; i < getarraylenght(string); ++i) {
        printf("-");
    }
    printf("\\");
    //line two
    printf("| %s |", string);
    //line three
    printf("\\");
    for (int i = 0; i < getarraylenght(string); ++i) {
        printf("-");
    }
    printf("/");
}

int getarraylenght(char string[]){
    int lenght = 0;
    while (string[lenght] != "\0")
        lenght++;
    return lenght;
}

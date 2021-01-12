//
// Created by flo on 12.01.21.
//
#ifdef _WIN32
#include <conio.h>
#else
#include <stdio.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

#include "string.h"
#include "buch.h"
#include "stdio.h"
typedef struct {
    char Autor[100];
    char Titel[80];
    char Herausgeber[80];
    int Veroeffentlichungsjahr;
}Buch;

typedef struct {
    int anzahl;
    Buch buchliste[10];
}List;

List Buecherliste;
void Bucheintrag();
void zeige_Liste();
void Buch_alt();
int suche_autor(char autor[]);

int menu() {
    // Buecherliste will serve as main list including the amount of elements
    int choice = 0;
    printf("\nWelcome!\n\nSelect your desired program:"
           "\n--Show all saved Books.(1)"
           "\n--Add a new Book.(2)"
           "\n--Show the oldest Book available.(3)"
           "\n--Search for an author.(4) "
           "\n--- Exit (0)\n");
    scanf("%i", &choice);
    switch (choice) {
        case 1: {
            zeige_Liste();
            menu();
            break;
        }
        case 2: {
            menu();
            Bucheintrag();
            break;
        }
        case 3: {
            menu();
            break;
        }
        case 4:
            menu();
            break;
        case 0:
            printf("Bye");
            break;
        default:
            printf("Please enter a legit number");
            menu();
            break;
    }
}
void Bucheintrag(){
    printf("Please enter the data needed to create a new book-entry in your list. Lets begin with the title: ");
    fgets(Buecherliste.buchliste[Buecherliste.anzahl].Titel, 80, stdin);
    printf("\nContinue with the Author: ");
    fgets(Buecherliste.buchliste[Buecherliste.anzahl].Autor, 100, stdin);
    printf("\nContinue with the Publisher: ");
    fgets(Buecherliste.buchliste[Buecherliste.anzahl].Herausgeber,80,stdin);
    printf("\nPlease finish off with the year of publishment");
    scanf("%i", &Buecherliste.buchliste[Buecherliste.anzahl].Veroeffentlichungsjahr);
    printf("Do you wish to enter another one? ");
    char scanfres = 'N';
    if(scanf("%c", &scanfres )== 'Y'){
        Bucheintrag();
    }
    else{clrscr();}
}

void zeige_Liste(){
    for (int i = 0; i < Buecherliste.anzahl; ++i) {
        printf("\n-Entry No.: %i"
               "\n--Title: %s"
               "\n--Author: %s"
               "\n--Publisher: %s"
               "\n--Year of Publishment: %s", i, Buecherliste.buchliste[i].Titel, Buecherliste.buchliste[i].Autor, Buecherliste.buchliste[i].Herausgeber, Buecherliste.buchliste[i].Veroeffentlichungsjahr);
    }
}


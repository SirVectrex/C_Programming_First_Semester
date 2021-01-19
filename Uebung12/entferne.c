//
// Created by flo on 13.01.21.
//

#include "entferne.h"
#include "stdio.h"
#include "string.h"


// should erase double letters

int getarraylenght2(char string[]){
    int lenght = 0;
    while (string[lenght] != '\0')
        lenght++;
    return lenght;
}


const char *entferne(const char *str){
    int laenge = getarraylenght2(str);
    static char newstring[10] = {NULL};
    int counter = 0;
    int newstringcounter = 0;
    // newstring[0] = str[0];
    while (counter < laenge + 1 ){
        if(str[counter] == str[counter + 1]){
            counter++;
            continue;
        }
        else{
            newstring[newstringcounter] = str[counter];
            newstringcounter++;
            counter++;
        }
    }
    return newstring;
}

//
// Created by flo on 13.01.21.
//

#include "trimstring.h"
#include "stdio.h"


void trim(char *mystring[]){
    int i = 0;
    while (mystring[i+1] != "\0"){
        if (mystring[i] == " "){
            int y = i;
            while (mystring[y+1] != "\0"){
                mystring[y] = mystring[y+1];
                y++;
            }
            i++;
        }
        else if(mystring[i] != " "){
            break;
        }
    }

}
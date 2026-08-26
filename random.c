#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    //Generate random num from 0 to 25 and add to ASCII character 'A'
    char randomchar = 'A' + (rand() % 26);
    return randomchar;
}
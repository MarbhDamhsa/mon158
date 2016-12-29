/*
*
*    Header file for use with mon158.c and mon158Func.c
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Enumerated list of months starting from 1
enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

typedef enum month mon;

mon nextMon(mon a);
mon prevMon(mon a);
void printMon(mon a);

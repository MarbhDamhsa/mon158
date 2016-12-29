/*
*
*
*     Functions for use with mon158.c
*
*/

#include "mon158Func.h"

mon nextMon(mon a)
{
    mon nextMon;

    //Ternary operation that assigns the following
    //month in the enumerated list to the return variable

    nextMon = (a == jan ? feb :
              (a == feb ? mar :
              (a == mar ? apr :
              (a == apr ? may :
              (a == may ? jun :
              (a == jun ? jul :
              (a == jul ? aug :
              (a == aug ? sep :
              (a == sep ? oct :
              (a == oct ? nov :
              (a == nov ? dec :
              (a == dec ? jan :
               99 )))))))))))); // 99 used as error code
      
    return nextMon;
}//nextMon

mon prevMon(mon a)
{
   mon prevMon;

   //Ternary operation that assigns the previous month
   //in the enumerated list to the return variable
   prevMon = (a == jan ? dec :
             (a == feb ? jan :
             (a == mar ? feb :
             (a == apr ? mar :
             (a == may ? apr :
             (a == jun ? may :
             (a == jul ? jun :
             (a == aug ? jul :
             (a == sep ? aug :
             (a == oct ? sep :
             (a == nov ? oct :
             (a == dec ? nov :
              99 )))))))))))); // 99 used as error code

    return prevMon;
}//prevMon

void printMon(mon a)
{
    switch(a)
    {
        case jan:
           printf("January\n");
           break;

        case feb:
           printf("February\n");
           break;

        case mar:
           printf("March\n");
           break;
     
        case apr:
           printf("April\n");
           break;
 
        case may:
           printf("May\n");
           break;

        case jun:
           printf("June\n");
           break;

        case jul:
           printf("July\n");
           break;

        case aug:
           printf("August\n");
           break;

        case sep:
           printf("September\n");
           break;

        case oct:
           printf("October\n");
           break;

        case nov:
           printf("November\n");
           break;

        case dec:
           printf("December\n");
           break;

        default:
           printf("Not a valid month\n");
           break;
    }//switch
}//printMon

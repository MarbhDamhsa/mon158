/*
*
*
*    Takes user input and matches it to an enumerated
*    list of months. If input is valid, program displays
*    the month previous, next, and current.
*/

#include "mon158Func.h"

int main(void)
{
    //Variables for user input
    char input[4];
    enum month monIn;

    printf("Welcome to mon158.\n");
    printf("Please enter the first three letters of a month.\n");
    scanf("%s", &input);

    //Ternary operation that takes string input and compares it to
    //the first three letters of the month, assigning monInn the
    //appropriate enumerated month or a value of 99 for invalid input
    monIn = (strcmp(input,"jan") == 0 ? jan :
            (strcmp(input,"feb") == 0 ? feb :
            (strcmp(input,"mar") == 0 ? mar :
            (strcmp(input,"apr") == 0 ? apr :
            (strcmp(input,"may") == 0 ? may :
            (strcmp(input,"jun") == 0 ? jun :
            (strcmp(input,"jul") == 0 ? jul :
            (strcmp(input,"aug") == 0 ? aug :
            (strcmp(input,"sep") == 0 ? sep :
            (strcmp(input,"oct") == 0 ? oct :
            (strcmp(input,"nov") == 0 ? nov :
            (strcmp(input,"dec") == 0 ? dec :
                          99)))))))))))); //invalid entry
    //Check that monIn is a valid month
    if (monIn > 12)
    {
        printf("***ERROR \"%s\" is not a valid entry. Exiting***\n", input);
        exit(1);
    }

    printf("\nCurrent month: ");
    printMon(monIn);
    printf("\n")

    printf("Previous month: ");
    printMon(prevMon(monIn));
    printf("\n");

    printf("Next month: ");
    printMon(nextMon(monIn));
    printf("\n");

    printf("Thank you for using mon158. Bye!\n\n");

    return 0;
}//main

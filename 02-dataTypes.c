#include <stdio.h>

// a variable in C must be a specified data type
// you must use a format specifier inside the printf() function to display it

/*
    different data types in C :
    int : 2-4 bytes /  Stores whole numbers, without decimals / ex : 1
    float : 4 bytes /  Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits / ex : 1.99
    double : 8 bytes / Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits / ex : 1.99
    char : 1 byte / Stores a single character/letter/number, or ASCII values / ex : 'A'

    formatting :
    %d or %i => for int
    %f or %F => for float
    %lf => for double
    %c => char
    %s => Strings / Texts
*/

/*
    If you don't want others (or yourself) to change existing variable values, you can use the const keyword
    const keyword produces error when you try to reassign it to a new value
*/

int main()
{
    // declaring variables
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // constants
    const int minutesPerHour = 60;
    const float PI = 3.14;

    // displaying
    printf("%d\n", myNum);          // Integer formatting
    printf("%f\n", myFloatNum);     // Float format
    printf("%c\n", myLetter);       // Character formatting
    printf("%i\n", minutesPerHour); // Integer formatting - displaying constant
    printf("%.2f\n", PI);           // Float formatting - displaying

    // return statement
    return 0;
}

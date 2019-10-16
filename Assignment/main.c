/* Author : Nicholas Riggins
 * Date: September 2019
 * Lab 1
 * Mathamatical Opterations
 *
 */
#ifndef MATH_C_
#define MATH_C_


// math function to correspond with header file (math.h)
int math(int num1, int num2, char Operator)
{

    printf("Enter a number:" );                              // Prints on screen "Enter a number"
    scanf("%i %d", &num1);                                   // wait for user to input an integer and saves it to num1
    printf("\nEnter a second number:");                      // Prints on screen "Enter a second number
    scanf("%i %d", &num2);                                   // wait for user to input an integer and saves it to num2

    printf("\nSelect an operation for the two numbers: ");   //Prints on screen " Select and operation for the two numbers"
    scanf("%c %d", &Operator);                               //waits for user input and saves it to Operator


    switch(Operator)
    {

        case '+':               // Case for performing addition
            return num1 + num2;

        case '-':               // Case for performing subtraction
            return num1 - num2;

        case '*':               // Case for performing multiplication
            return num1 * num2;

        case '/':              // Case for performing division
            return num1 / num2;

        case '%':              // Case for displaying remainder
            return num1 % num2;

        case '<':             // Case for performing shift left
            return num1 << num2;

        case '>':             // Case for performing shift right
            return num1 >> num2;

        case '&':            // Case for performing bitwise AND
            return num1 & num2;

        case '|':           // Case for performing bitwise OR
            return num1 | num2;

        case '^':           // Case for performing bitwise XOR
            return num1 ^ num2;

        case '~':          // Case for performing bitwise NOT
            return ~num1;

        default:           // if an invalid statement is put in the output will be "operation is invalid"
            printf("\n Operation is invalid");
    }

    return 0;
}

#endif

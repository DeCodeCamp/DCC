/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // declare variables
    int x, y;
    int sum;
    // prompt a the user to enter the two numbers
    printf("Enter the two numbers:\n");
    scanf("%d%d", &x, &y);
    // add the two numbers
    sum = x + y;
    // print the sum of the two numbers
    printf(" sum of %d + %d = %d", x, y, sum);

    return 0;
}

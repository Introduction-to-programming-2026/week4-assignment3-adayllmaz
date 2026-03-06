/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/
#include <stdio.h>

void print_row(int n);
void print_pyramid(int n);

int main(void)
{
    int n;

    printf("Height: ");
    scanf("%d", &n);

    print_pyramid(n);
}

void print_pyramid(int n)
{
    if (n == 0)
    {
        return;
    }

    print_pyramid(n - 1);
    print_row(n);
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}

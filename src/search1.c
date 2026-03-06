/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[4][20] = {"Ada", "Ali", "Ayse", "Can"};
    char search[20];

    printf("Name: ");
    scanf("%s", search);

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], search) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");

    return 0;
}
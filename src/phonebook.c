/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
} Person;

int main(void)
{
    Person people[3] =
    {
        {"Ada", "111111"},
        {"Ali", "222222"},
        {"Ayse", "333333"}
    };

    char search[50];

    printf("Name: ");
    scanf("%s", search);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Phone: %s\n", people[i].phone);
            return 0;
        }
    }

    printf("Not found\n");

    return 0;
}

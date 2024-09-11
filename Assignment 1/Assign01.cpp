#include <stdio.h>

struct Time
{
    int day;
    int month;
    int year;
};

void acceptDateFromConsole(struct Time *ptr)
{
    printf("Enter Date 'DD-MM-YYYY': ");
    scanf("%d %d %d", &ptr->day, &ptr->month, &ptr->year);
}

void printDateOnConsole(struct Time *ptr)
{
    printf("Date = %02d-%02d-%d\n", ptr->day, ptr->month, ptr->year);
}

int main()
{
    struct Time t1;
    int choice;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Enter Date\n");
        printf("2. Display Date\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&t1);
            break;

        case 2:
            printDateOnConsole(&t1);
            break;

        case 3:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

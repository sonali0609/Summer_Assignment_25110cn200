#include <stdio.h>

int main()
{
    int choice, tickets = 50, book, cancel;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Show Available Tickets\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Available Tickets = %d\n", tickets);
            break;

        case 2:
            printf("How many tickets do you want to book? ");
            scanf("%d", &book);

            if (book <= tickets)
            {
                tickets -= book;
                printf("%d Ticket(s) Booked Successfully!\n", book);
            }
            else
            {
                printf("Not Enough Tickets Available!\n");
            }
            break;

        case 3:
            printf("How many tickets do you want to cancel? ");
            scanf("%d", &cancel);

            tickets += cancel;
            printf("%d Ticket(s) Cancelled Successfully!\n", cancel);
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
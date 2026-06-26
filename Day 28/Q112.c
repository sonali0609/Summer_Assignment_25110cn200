#include <stdio.h>

int main()
{
    char name[50];
    long long phone;
    int choice;

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf("%s", name);

            printf("Enter Phone Number: ");
            scanf("%lld", &phone);

            printf("Contact Saved Successfully!\n");
            break;

        case 2:
            printf("\nContact Details:\n");
            printf("Name : %s\n", name);
            printf("Phone: %lld\n", phone);
            break;

        case 3:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}
#include <stdio.h>
#include <string.h>

// 1. Define the Contact struct with fixed-size arrays
struct Contact {
    char name[50];
    char phone[15];
};

// 2. The Pointer Challenge: Pass by reference (pointer)
void displayContact(struct Contact *ptr) {
    printf("\n--- Contact Details ---\n");
    // We use the arrow operator (->) to access struct members via pointers
    printf("Name: %s\n", ptr->name);
    printf("Phone: %s\n", ptr->phone);
}

int main() {
    struct Contact myContact;

    printf("Enter Name: ");
    fgets(myContact.name, sizeof(myContact.name), stdin);
    // Remove newline character added by fgets
    myContact.name[strcspn(myContact.name, "\n")] = '\0';

    printf("Enter Phone: ");
    scanf("%s", myContact.phone);

    // Pass the address of the struct using '&'
    displayContact(&myContact);

    return 0;
}

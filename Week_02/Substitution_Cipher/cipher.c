#include <stdio.h>

void encrypt(char *msg, int key) {
    while (*msg != '\0') {
        *msg = *msg + key; // Shift the ASCII value
        msg++;             // Move to the next memory address
    }
}

int main() {
    char message[100];
    int key;

    printf("Enter message to encrypt: ");
    scanf("%s", message);
    printf("Enter integer key: ");
    scanf("%d", &key);

    encrypt(message, key);

    printf("Encrypted message: %s\n", message);
    return 0;
}

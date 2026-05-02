
#include <stdio.h>

// Define the packet structure
struct Packet {
    int serialNo;
    int priority;
};

int main() {
    struct Packet packets[10];
    struct Packet temp;
    int i, j;

    // 1. Input: Getting data for 10 packets [cite: 49, 51]
    printf("Mini Firewall: Enter 10 packets (SerialNo Priority):\n");
    for (i = 0; i < 10; i++) {
        printf("Packet %d: ", i + 1);
        scanf("%d %d", &packets[i].serialNo, &packets[i].priority);
    }

    // 2. Sorting Logic: Priority first, then Serial Number
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            // Rule 1: Sort by Highest Priority (lower number = higher priority) [cite: 49, 50]
            if (packets[j].priority > packets[j + 1].priority) {
                temp = packets[j];
                packets[j] = packets[j + 1];
                packets[j + 1] = temp;
            }
            // Rule 2: If priorities are equal, sort by lowest Serial Number
            else if (packets[j].priority == packets[j + 1].priority) {
                if (packets[j].serialNo > packets[j + 1].serialNo) {
                    temp = packets[j];
                    packets[j] = packets[j + 1];
                    packets[j + 1] = temp;
                }
            }
        }
    }

    // 3. Output: Final ordered list [cite: 52]
    printf("\n--- Firewall Filtered Output ---\n");
    for (i = 0; i < 10; i++) {
        printf("Serial Number: %d (Priority: %d)\n", packets[i].serialNo, packets[i].priority);
    }

    return 0;
}

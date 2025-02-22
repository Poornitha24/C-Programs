#include <stdio.h>
#include <string.h>

#define MAX_CONFIRMED 2   // Maximum confirmed bookings
#define MAX_WAITING 10    // Maximum waiting list size
#define NAME_SIZE 50      // Maximum length for a passenger name

int main() {
    char confirmed[MAX_CONFIRMED][NAME_SIZE];
    int confirmedCount = 0;
    
    char waiting[MAX_WAITING][NAME_SIZE];
    int waitingCount = 0;
    
    // Functionality simulated inline for simplicity.
    // Booking: Alice
    if (confirmedCount < MAX_CONFIRMED) {
        strcpy(confirmed[confirmedCount++], "Alice");
        printf("Booking Confirmed: Alice\n");
    } else {
        strcpy(waiting[waitingCount++], "Alice");
        printf("Waiting List: Alice\n");
    }
    
    // Booking: Bob
    if (confirmedCount < MAX_CONFIRMED) {
        strcpy(confirmed[confirmedCount++], "Bob");
        printf("Booking Confirmed: Bob\n");
    } else {
        strcpy(waiting[waitingCount++], "Bob");
        printf("Waiting List: Bob\n");
    }
    
    // Booking: Charlie
    if (confirmedCount < MAX_CONFIRMED) {
        strcpy(confirmed[confirmedCount++], "Charlie");
        printf("Booking Confirmed: Charlie\n");
    } else {
        strcpy(waiting[waitingCount++], "Charlie");
        printf("Waiting List: Charlie\n");
    }
    
    // Display confirmed bookings
    printf("\nConfirmed Bookings:\n");
    for (int i = 0; i < confirmedCount; i++) {
        printf("%d: %s\n", i + 1, confirmed[i]);
    }
    
    // Display waiting list
    printf("\nWaiting List:\n");
    for (int i = 0; i < waitingCount; i++) {
        printf("%d: %s\n", i + 1, waiting[i]);
    }
    
    return 0;
}

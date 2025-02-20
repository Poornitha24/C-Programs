#include <stdio.h>
#include <string.h>

#define MAX 50

struct Passenger {
    char name[MAX];
    int age;
    char destination[MAX];
};

int main() {
    int n, i, j;
    
    printf("Enter number of passengers: ");
    scanf("%d", &n);
    
    struct Passenger passengers[n];
    
    // Input passenger details
    for (i = 0; i < n; i++) {
        printf("\nPassenger %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", passengers[i].name);  // Assumes no spaces
        printf("Enter age: ");
        scanf("%d", &passengers[i].age);
        printf("Enter destination: ");
        scanf("%s", passengers[i].destination);  // Assumes no spaces
    }
    
    // Bubble sort passengers by destination
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(passengers[j].destination, passengers[j + 1].destination) > 0) {
                struct Passenger temp = passengers[j];
                passengers[j] = passengers[j + 1];
                passengers[j + 1] = temp;
            }
        }
    }
    
    // Print sorted list
    printf("\nSorted List (by destination):\n");
    for (i = 0; i < n; i++) {
        printf("%s • %s\n", passengers[i].name, passengers[i].destination);
    }
    
    // Search for passengers by destination
    char searchDest[MAX];
    printf("\nEnter destination to search: ");
    scanf("%s", searchDest);
    
    printf("Passengers traveling to %s: ", searchDest);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(passengers[i].destination, searchDest) == 0) {
            printf("%s ", passengers[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
    
    return 0;
}

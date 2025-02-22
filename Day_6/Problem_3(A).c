#include <stdio.h>

#define MAX_SEATS 100

// Function to sort the seat numbers (ascending order)
void sortSeats(int seats[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seats[i] > seats[j]) {
                temp = seats[i];
                seats[i] = seats[j];
                seats[j] = temp;
            }
        }
    }
}

// Function to perform binary search to find a specific seat number
int binarySearch(int seats[], int n, int seatNum) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (seats[mid] == seatNum) {
            return 1;  // Seat found
        } else if (seats[mid] < seatNum) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return 0;  // Seat not found
}

// Function to find the next available seat number
int nextAvailableSeat(int seats[], int n, int seatNum) {
    for (int i = 0; i < n; i++) {
        if (seats[i] > seatNum) {
            return seats[i];  // Next available seat
        }
    }
    return -1;  // No available seat found
}

int main() {
    int seats[] = {45, 12, 78, 23, 56};  // Available seats
    int n = 5;  // Number of available seats

    // Sort the seat numbers
    sortSeats(seats, n);
    printf("Sorted Available Seats: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", seats[i]);
    }
    printf("\n");

    // Search for a specific seat (e.g., seat 23)
    int seatNum = 23;
    if (binarySearch(seats, n, seatNum)) {
        printf("Search Seat %d: Found (Available)\n", seatNum);
    } else {
        printf("Search Seat %d: Not Found\n", seatNum);
    }

    // Find the next available seat after seat 23
    int nextSeat = nextAvailableSeat(seats, n, seatNum);
    if (nextSeat != -1) {
        printf("Next Available Seat: %d\n", nextSeat);
    } else {
        printf("No more seats available.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int n, totalTax = 0;
    char vehicleType[10];

    // Taking input for the number of vehicles
    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    printf("Enter vehicle types: ");

    // Loop through each vehicle
    for (int i = 0; i < n; i++) {
        scanf("%s", vehicleType);

        // Convert input to lowercase for case insensitivity (optional)
        for (int j = 0; vehicleType[j]; j++) {
            if (vehicleType[j] >= 'A' && vehicleType[j] <= 'Z') {
                vehicleType[j] = vehicleType[j] + 32; // Convert uppercase to lowercase
            }
        }

        // Using switch case to determine toll tax
        switch (vehicleType[0]) {
            case 'c':  // Car
                if (strcmp(vehicleType, "car") == 0) totalTax += 50;
                break;
            case 't':  // Truck
                if (strcmp(vehicleType, "truck") == 0) totalTax += 100;
                break;
            case 'b':  
                if (strcmp(vehicleType, "bike") == 0) totalTax += 20;  // Bike
                else if (strcmp(vehicleType, "bus") == 0) totalTax += 80; // Bus
                break;
            default:
                printf("Invalid vehicle type: %s\n", vehicleType);
        }
    }

    // Display total toll tax
    printf("Total Toll Tax: ₹%d\n", totalTax);

    return 0;
}

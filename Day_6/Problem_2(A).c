#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct Item {
    char name[50];
    int quantity;
};

void sortByQuantity(struct Item inventory[], int n) {
    struct Item temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (inventory[i].quantity > inventory[j].quantity) {
                temp = inventory[i];
                inventory[i] = inventory[j];
                inventory[j] = temp;
            }
        }
    }
}

int binarySearch(struct Item inventory[], int n, const char *itemName) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(inventory[mid].name, itemName);
        
        if (cmp == 0) {
            return mid;  
        } else if (cmp < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  
}

void displayLowStockItems(struct Item inventory[], int n) {
    printf("\nLow Stock Items:\n");
    for (int i = 0; i < n; i++) {
        if (inventory[i].quantity < 5) {
            printf("%s (%d)\n", inventory[i].name, inventory[i].quantity);
        }
    }
}

int main() {
    struct Item inventory[MAX_ITEMS] = {
        {"Sugar", 50},
        {"Salt", 3},
        {"Oil", 10}
    };
    int n = 3; 

    sortByQuantity(inventory, n);
    printf("Sorted by Quantity:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (%d)\n", inventory[i].name, inventory[i].quantity);
    }

    const char *searchName = "Oil";
    int index = binarySearch(inventory, n, searchName);
    if (index != -1) {
        printf("\nSearch '%s': Found (Quantity: %d)\n", searchName, inventory[index].quantity);
    } else {
        printf("\nSearch '%s': Not Found\n", searchName);
    }

    displayLowStockItems(inventory, n);

    return 0;
}

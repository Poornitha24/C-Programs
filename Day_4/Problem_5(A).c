#include <stdio.h>
#include <string.h>

typedef struct {
    int orderID;
    char customerName[50];
    char product[50];
    int amount;
} Order;

int main() {
    int n;
    printf("Enter number of orders: ");
    scanf("%d", &n);
    
    Order orders[n];
    
    // Input order details
    for (int i = 0; i < n; i++) {
        printf("Enter Order %d details (OrderID CustomerName Product Amount): ", i + 1);
        scanf("%d %s %s %d", &orders[i].orderID, orders[i].customerName, orders[i].product, &orders[i].amount);
    }
    
    // Write orders to a file
    FILE *fp = fopen("orders.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "Order %d: %d, %s, %s, ₹%d\n", i + 1, orders[i].orderID, orders[i].customerName, orders[i].product, orders[i].amount);
    }
    fclose(fp);
    printf("Record saved in \"orders.txt\"\n");
    
    // Retrieve order details by Order ID
    int searchID;
    printf("Enter Order ID to search: ");
    scanf("%d", &searchID);
    
    for (int i = 0; i < n; i++) {
        if (orders[i].orderID == searchID) {
            printf("Order Found: %s - %s - ₹%d\n", orders[i].customerName, orders[i].product, orders[i].amount);
            return 0;
        }
    }
    
    printf("Order not found.\n");
    return 0;
}

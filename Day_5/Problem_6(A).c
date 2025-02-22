#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[50];
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL, *tail = NULL;

void addPatient(int id, char name[]) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    newNode->prev = tail;
    
    if (tail)
        tail->next = newNode;
    tail = newNode;
    
    if (!head)
        head = newNode;
    
    printf("New Patient Admitted: %s (ID %d)\n", name, id);
}

void dischargePatient(int id) {
    struct Node *temp = head;
    while (temp) {
        if (temp->id == id) {
            if (temp->prev)
                temp->prev->next = temp->next;
            else
                head = temp->next;
            
            if (temp->next)
                temp->next->prev = temp->prev;
            else
                tail = temp->prev;
            
            printf("Discharging: %s (ID %d)\n", temp->name, id);
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("Patient with ID %d not found.\n", id);
}

void displayPatients() {
    struct Node *temp = head;
    printf("Patients (Forward): ");
    while (temp) {
        printf("%s", temp->name);
        if (temp->next)
            printf(" ↔ ");
        temp = temp->next;
    }
    printf("\n");

    temp = tail;
    printf("Patients (Backward): ");
    while (temp) {
        printf("%s", temp->name);
        if (temp->prev)
            printf(" ↔ ");
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    addPatient(201, "John");
    addPatient(202, "Mary");
    addPatient(203, "David");

    displayPatients();

    dischargePatient(202);
    
    displayPatients();

    return 0;
}

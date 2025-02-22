#include <stdio.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100
#define NAME_SIZE 100

typedef struct {
    int call_id;
    char caller_name[NAME_SIZE];
} Call;

Call queue[MAX_QUEUE_SIZE];
int front = 0;
int rear = -1;

// Function to add a call to the queue
void enqueue(int call_id, const char *caller_name) {
    if (rear == MAX_QUEUE_SIZE - 1) {
        printf("Queue is full!\n");
        return;
    }
    rear++;
    queue[rear].call_id = call_id;
    strncpy(queue[rear].caller_name, caller_name, NAME_SIZE - 1);
    queue[rear].caller_name[NAME_SIZE - 1] = '\0';
    printf("New Call Added: Call %d from %s\n", call_id, caller_name);
}

// Function to process (remove) the call at the front
void dequeue() {
    if (front > rear) {
        printf("No calls to process.\n");
        return;
    }
    printf("Processing Call: %d from %s\n", queue[front].call_id, queue[front].caller_name);
    front++;
}

// Function to display the remaining calls in the queue
void displayQueue() {
    if (front > rear) {
        printf("No remaining calls.\n");
        return;
    }
    printf("Remaining Calls: ");
    for (int i = front; i <= rear; i++) {
        printf("%d from %s", queue[i].call_id, queue[i].caller_name);
        if (i < rear) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    // Example operations
    enqueue(101, "Alice");
    enqueue(102, "Bob");
    dequeue();
    displayQueue();
    
    return 0;
}

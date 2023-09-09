//Count the number of elements present in a queue

#include <stdio.h>

#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1;
int back = -1;

// Function to insert an element into the queue
void enqueue(int item) {
    if (back == MAX_SIZE - 1) {
        printf("Error: Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    back++;
    queue[back] = item;
}

// Function to display the elements in the queue
void display() {
    if (front == -1 || front > back) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= back; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Function to remove an element from a queue
void dequeue() {
    if (front == -1 || front > back) {
        printf("Error: Queue is empty\n");
        return;
    }
    front++;
}

// Function to check whether the queue is empty
int is_empty() {
    if (front == -1 || front > back) {
        return 1;
    }
    return 0;
}

// Function to count the number of elements in a queue
int count() {
    int count = 0;
    if (front!=-1 && back!=-1)
    {
    for (int i = front; i <= back; i++) {
        count++;
    }
   }
    return count;
}

int main() {
	printf("Initialize a queue!");
    // Insert some elements into the queue.
    printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No");
    printf("Number of elements in queue: %d\n", count());
	printf("\nInsert some elements into the queue:\n");
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    // Display the number of elements in the queue
    printf("Number of elements in queue: %d\n", count());
    printf("\nDelete two elements from the said queue:\n");
    dequeue();
    dequeue();
    display();
    printf("Number of elements in queue: %d\n", count());
	printf("\nInsert another element into the queue:\n");
    enqueue(4);
    display();
    printf("Number of elements in the queue: %d\n", count());
    return 0;
}
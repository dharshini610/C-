#include <iostream>
using namespace std;
class Queue {
private:
    int* elements;
    int front;
    int rear;
    int capacity;
public:
    Queue(int capacity) {
        this->capacity = capacity;
        this->front = 0;
        this->rear = 0;
        this->elements = new int[capacity];
    }
    ~Queue() {
        delete[] elements;
    }
    bool isEmpty() {
        return front == rear;
    }
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Can't enqueue " << value << endl;
            return;
        }
        elements[rear] = value;
        rear = (rear + 1) % capacity;
    }
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Can't dequeue." << endl;
            return -1;
        }
        int value = elements[front];
        front = (front + 1) % capacity;
        return value;
    }
    void display() {
        int i = front;
        while (i != rear) {
            cout << elements[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};
int main() {
    Queue queue(5);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    cout << "Queue: ";
    queue.display();
    int dequeued = queue.dequeue();
    cout << "Dequeued: " << dequeued << endl;
    cout << "Queue after dequeue: ";
    queue.display();
    queue.enqueue(6);
    cout << "Queue after enqueue: ";
    queue.display();
    return 0;
}
#include <iostream>
class Stack {
private:
    int *arr; // array to store elements
    int top; // index of top element
    int capacity; // maximum capacity of the stack
public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1; // initialize top to -1 (empty stack)
    }
    ~Stack() {
        delete[] arr;
    }

    void push(int element) {
        if (top == capacity - 1) {
            std::cout << "Stack overflow! Cannot push " << element << std::endl;
            return;
        }
        arr[++top] = element;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Stack underflow! Cannot pop" << std::endl;
            return -1; // return a sentinel value to indicate error
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void printStack() {
        std::cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack(5); // create a stack with capacity 5

    stack.printStack(); // print empty stack

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.printStack(); // print stack after pushing 3 elements

    int popped = stack.pop();
    std::cout << "Popped: " << popped << std::endl;
    stack.printStack(); // print stack after popping 1 element

    stack.push(4);
    stack.push(5);
    stack.printStack(); // print stack after pushing 2 more elements

    while (!stack.isEmpty()) {
        popped = stack.pop();
        std::cout << "Popped: " << popped << std::endl;
    }

    return 0;
}
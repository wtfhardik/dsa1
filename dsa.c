#include<stdio.h>

int stack[5];
int element;
int choice;
int top = -1;

void push()
{
    if (top >= 5)
        printf("Stack is Overflowed.\n");
    else
    {
        printf("enter the element to be inserted = ");
        scanf("%d", &element);
        stack[top] = element;
        printf("%d pushed to stack\n", element);
        top++;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack is Underflowed.\n");
    else
    {
        printf("The latest element is now deleted = %d\n", stack[top]);
        return stack[top--];
    }
}

void display()
{
    if (top <= -1)
        printf("stack is empty");
    else
    {
        printf("elements in a stack are : \n");
        for (int i=0; i < top; i++)
            printf("%d\n", stack[i]);
    }
}
int main() {
    do {
        printf("\n", stack[1]);
        printf("\n1. PUSH the element in\n2. POP the element in\n3. DISPLAY the element\n4. EXIT");
        printf("\nEnter your choice from the above four options: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid output");
                break;
        }
    } while (top!= 5);
    return 0;
}
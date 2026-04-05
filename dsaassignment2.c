#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    top--;
}

int main() {
    char exp[100];
    int i, balanced = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')') {
            if(top == -1) {
                balanced = 0;
                break;
            }
            pop();
        }
    }

    if(top != -1)
        balanced = 0;

    if(balanced)
        printf("Balanced Expression");
    else
        printf("Not Balanced");

    return 0;
}
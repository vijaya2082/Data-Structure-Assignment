#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters
    for(i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop to reverse
    for(i = 0; str[i] != '\0'; i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s", str);

    return 0;
}

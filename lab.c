#include <stdio.h>
#include <stdlib.h>

static int top = -1;
char array[50];

void push(int item) {
    top++;
    *(array+top) = item;
}

int pop() { 
    return array[top--];
}

void main() {
    char ch[50];
    printf("Enter a string: ");
    gets(ch);

    int i = 0;
    while(ch[i] != '\0') {
        push(ch[i]);
        i++;
    }

    for(int i=0; ch[i] != '\0'; i++) {
        ch[i] = pop();
    }
    printf("Reversed String: ");
    puts(ch);
}



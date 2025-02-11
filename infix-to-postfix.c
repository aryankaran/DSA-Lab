#include <stdio.h>

#define MAXSIZE 40

void in_to_post(char* expr[]) {
    int top = -1;
    printf("Expression: %s\n", expr);
    
}

int main() {
    char expr[MAXSIZE];
    printf("Enter expression: ");
    scanf("%s", expr);
    in_to_post(expr);
    // printf("Expression: %s\n", expr);
}




/*
confirmed in exam:->
- postfix exprssion evaluation
- infix / postifx/ prefix
*/
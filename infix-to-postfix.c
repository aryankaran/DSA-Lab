#include <stdio.h>

#define MAXSIZE 40


int priority(char x) {
    switch(x) {
        case '^':
            return 4;
        
        case '*':
        case '/':
            return 3;
        
        case '+':
        case '-':
            return 2;
        
        case '(':
            return 0;

        default:
            return -1;
    }
}


int is_operand(char opr){
    if ( (opr >= 'a' && opr <= 'z') || (opr >= 'A' && opr <= 'Z') || (opr >= '0' && opr <= '9') ) {
        return 1;
    } else return 0;
}


void push(char stack[], int* top, int maxsize, char ch){
    if (!(*top >= maxsize - 1)) {
        stack[++(*top)] = ch;
    } else {
        printf("Stack overflow !!!\n");
        return;
    }
}


char pop(char stack[], int* top){
    if (*top < 0){
        printf("Stack underflow !!!\n");
        return '\0';
    }

    // (*top)--;
    return stack[(*top)--]; // return popped pointer
}


void in_to_post(char expr[], char post[]) {
    printf("Expression: %s\n", expr);

    char stack[MAXSIZE]; // intermediate array as stack
    int top = -1, post_index = 0;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (is_operand(expr[i])) {
            // printf("%c", expr[i]);
            post[post_index++] = expr[i];

        } else if (expr[i] == '(') {
            // opening paranthesis case
            push(stack, &top, MAXSIZE, expr[i]);

        } else if (expr[i] == ')') {
            // closing paranthesis, then pop till opening comes in
            while (stack[top] != '(') {
                char y = pop(stack, &top);
                // printf("%c", y);
                post[post_index++] = y;
            }
            
            // pop out the '(' from stack before proceeding
            pop(stack, &top);
            
        } else { // other operator handling
            while (priority(stack[top]) >= priority(expr[i])) {
                char y = pop(stack, &top);
                // printf("%c", y); // pop & print until stack[top] has lower prior then expr[i]
                post[post_index++] = y;
            }
            push(stack, &top, MAXSIZE, expr[i]);
        }
    }

    // remaining operators if any
    while (top > -1) {
        char y = pop(stack, &top);
        // printf("%c", y);
        post[post_index++] = y;
    }

    // printf("\n");

/*
    printf("Expression line by line: \n");
    int i = 0;
    while (expr[i] != '\0') {
        printf("%c\n", expr[i++]);
    }
*/ 
}

int main() {
    char expr[MAXSIZE], post[MAXSIZE];
    printf("Enter expression: ");
    scanf("%[^\n]", expr);
    in_to_post(expr, post);

    printf("Postfix expression: %s\n", post);
    char expr_reverse[MAXSIZE];
    

/*
    int top = -1;
    for (int i = 0; expr[i] != '\0'; i++, top++);
    printf("Top: %d\n", top);

    // int top = -1;
    for (int i = 0; expr[i] != '\0'; i++) { 
        printf("Before: %d:-> %c, ", i, expr[i]);
        printf("Popped element: %c\n", pop(expr, &top));
    }
*/
}




/*
confirmed in exam:->
- postfix exprssion evaluation
- infix / postifx/ prefix
*/
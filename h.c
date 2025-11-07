#include <stdio.h>
#include <stdlib.h>

int main() {

char op;

int a,b,;

printf("enter two numbers: ");
scanf("%d %d", &a, &b);

fflush(stdin);

printf("choose an operator (+, -, *, /): ");
scanf("%c", &op);

switch(op) {
    case 'a+b':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case 'a-b':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case 'a*b':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case 'a/b':
            printf("%d / %d = %d\n", a, b, a / b);
        break;

        case'a%b':
            printf("%d %% %d = %d\n", a, b, a % b);
        break;
        default:
            printf("Invalid operator\n");

      }
}

return 0;
#include <stdio.h>

int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);            

    switch (n<10000) {
        case 1:
            printf("you entered a weak number\n");
            break;
        case 0:
            printf("the number entered isa strong number\n");
           
    }
    return 0;
}
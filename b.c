#include <stdio.h>

int main (){
    int price;

    printf("Enter book price: ");
    scanf("%d", &price);

    if (price >= 200) {
        printf("buy the book\n");
    } else if (price <= 400){
        printf("buy later\n");
    } else {
        printf("do not buy the book\n");
    }

    return 0;
}
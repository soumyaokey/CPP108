#include <stdio.h>

int main(){

    printf ("-----1\n");

    if (2>3)
         if (7<8) {
            printf("-----2\n");
            printf("-----3\n");
            printf("-----4\n");
         }
         else
         printf("-----5\n");
    return 0;
}
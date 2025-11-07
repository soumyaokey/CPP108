#include <stdio.h>
#include <stdlib.h>

int main (){

    char n,t;
    int m;

    printf("enter aA or B): ");
    scanf ("%c", &n);

    switch (n){
        case 'A':
                printf ("enter 1,2,or 3: ");
                scanf ("%d", &m);
                switch (m){
                    case 1:
                        printf ("You choice 1\n");
                        break;
                    case 2:
                        printf ("You choice 2\n");
                        break;
                    case 3:
                        printf ("You choice 3\n");
                        break;
                    default:
                        printf ("Invalid input\n");
                }
                break;
        case 'B':
                printf ("enter a,b,or c: ");
                fflush (stdin);
                scanf ("%c", &t);
                switch (t){
                    case 'a':
                        printf ("You choice Ba\n");
                        break;
                    case 'b':
                        printf ("You choice Bb\n");
                        break;
                    case 'c':
                        printf ("You choice Bc\n");
                        break;
                    default:
                        printf ("Invalid choice B%c\n", t);
                }
                break;
        default:
                printf ("namaste");
    }
}
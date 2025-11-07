# include <stdio.h>

int main (){

    int n;

    printf(" Boil water \n");

    printf ("press 1 for sugar \n 2 for jaggery \n 3 for honey \n 4 for sugar free \n");
    scanf ("%d", &n);

    if (n==1){
        printf ("Add sugar \n");
    }
    else if (n==2){
        printf ("Add jaggery \n");
    }
    else if (n==3){
        printf ("Add honey \n");
    }
    else if (n==4){
        printf ("No sweetener added \n");
    }
    else {
        printf ("Invalid option \n");
    }
    printf ("add tea leaves \n");
    printf ("add milk \n");
    return 0;
}
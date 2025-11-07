#include <stdio.h>
int main ()
    char gender;
    int age;

    printf ("Enter your gender (M/F): ");
    scanf (" %c", &gender);

    printf("Enter your age: ");
    scanf("%d", &age);

    fflush (stdin);

    printf ("do you want a cheque book (y/n): ");
    scanf (" %c", &cb);

    if (age <= 22) {
        if (gender == 'm') {
            printf("mb: 500 and ri: 2%%");
        } else {
            printf("mb: 0 and ri: 4%%");
        }
    } else if (age >60) {
        if (gender == 'm') {
            printf("mb: 2000 and ri: 11%%");
        } else {
            printf("mb: 0 and ri: 12%%");
        
    } else  {
        if (gender == 'm') {
            printf("mb: 5000 and ri: 6%%");
        } else {
            printf("mb: 2000 and ri: 8%%");
        }
    }

    if (gender == 'f') {
        if (age <=22){
            printf ("mb: %d and ri:4%%", cb=='y' ? 0:500 :0);
        }
        else if (age >60) {
            printf ("mb: %d and ri:12%%", cb=='y' ? 0:2000 :0);
        }
        else {
            printf ("mb: %d and ri:8%%", cb=='y' ? 2000:5000 :2000);
        }
    } else {
        if (age <=22){
            printf ("mb: %d and ri:2%%", cb=='y' ? 500:0 :0);
        }
        else if (age >60) {
            printf ("mb: %d and ri:11%%", cb=='y' ? 2000:0 :0);
        }
        else {
            printf ("mb: %d and ri:6%%", cb=='y' ? 5000:5000 :5000);
        }
    }
    return 0;
}
#include <stdio.h>
int main(void) {
    int massOfBody;
    int distanceFromBody;
    printf("Here's a simple gravity calculator. ");
    printf("So, what's the mass of the gravitating body? ");
    scanf("%d", &massOfBody);
    printf("So, what's the distance from the gravitating body? ");
    scanf("%d", &distanceFromBody);
    double gravitationalAcceleration = (0.00000000000667 * massOfBody)/(distanceFromBody * distanceFromBody);
    printf("The gravitational acceleration is %lf", gravitationalAcceleration);
}
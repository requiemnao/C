#include <stdio.h>
int main(void) {
    int i;
    int hour = 0;
    int distanceTraveled = 0;
    for(i = 0; i < 9 ; i++) {
        printf("At %d miles I have %d hours passed.\n", distanceTraveled, hour);
        distanceTraveled = distanceTraveled + 1;
        hour = hour + 3;
    }
    return 0;
}
// Use variables in loops / variáveis em loops 
// %d logo dps as integers declaradas dando valores aos %d 
//loop em progressão aritméticas 

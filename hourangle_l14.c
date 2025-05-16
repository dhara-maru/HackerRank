#include <stdio.h>

void main() {
 int h, m;
 float angle;

    printf("Enter hour and minute: ");
    scanf("%d %d", &h, &m);

    
   float hour_angle = (h * 30) + (m * 0.5); // 30° per hour, 0.5° per minute
   float minute_angle = m * 6; // 6° per minute
 
 angle = hour_angle - minute_angle;
 
 if(angle > 180){
     angle = 360 - angle;
 }
   printf("Angle between hour and minute hand: %.2f degrees\n", angle);
}
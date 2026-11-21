// Online C compiler (editor)
// Write and run C online using this editor.

#include<stdio.h>
int main()
{
    int sensor1,sensor2,sum;
    printf("Enter reading from Sensor 1: ");
    scanf("%d",&sensor1);
    printf("Enter reading from Sensor 2: ");
    scanf("%d",&sensor2);
    sum=sensor1+sensor2;
    printf("sum of sensor Readings: %d", sum);
}
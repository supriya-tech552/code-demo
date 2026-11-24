// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int sensor;

    printf("Enter sensor value (1 = person detected, 0 = no person):
           ");
           scanf("%d", &sensor);
    
    if(sensor == 1)
        printf("Door OPEN");
    else
        printf("Door CLOSED");
    return 0;
}
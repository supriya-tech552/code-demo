// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h> 
int main(){
float temperature;
printf("Enter your Temperature:");
scanf("%f", &temperature);
if(temperature < 80)
{
    printf("Patient Condition: Normal");
}
else if(temperature < 100)
{
    printf("Patient Condition: Warning");
}
else
{
    printf("Patient Condition: Critical");

}
return 0;
}
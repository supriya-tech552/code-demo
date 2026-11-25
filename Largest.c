// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter a number:");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a>c)
        printf("Largest = %d", a);
    else if(b > a && b>c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);
    return 0;
}
// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main(){
    int n, i;
    int a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        {
            printf("%d", a);
            c = a + b;
            a = b;
            b = c;
        }
    return 0;
}
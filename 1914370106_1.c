#include <stdio.h>
int main()
{
    int n =7, first = 0, second = 1, c, next;
    for (c =0; c < n; c++){
        if (c <= 1){
            next = c;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf ("%d\n", next);
    }
    return 0;
}

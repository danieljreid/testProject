#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    printf("Enter an integer: "); // doesnt end with a \n for a new line
    scanf("%d",&k);
    k = 2*k;
    printf("That integer doubled is: %d\n", k);
    return 0;
}

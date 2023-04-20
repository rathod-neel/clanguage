#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the values of x and y: ");
    scanf("%d%d", &x, &y);
    
    int answer = (x - y) * (x - y) * (x - y);
    printf("(%d - %d)^3 = %d\n", x, y, answer);
    
    return 0;
}

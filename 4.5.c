#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter the values of x, y, and z: ");
    scanf("%d%d%d", &x, &y, &z);
    
    int answer = (x + y + z) * (x + y + z);
    printf("(%d + %d + %d)^2 = %d\n", x, y, z, answer);
    
    return 0;
}

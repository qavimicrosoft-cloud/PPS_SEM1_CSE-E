#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    float c, d;
    
    // 1. Read two integers from the first line
    scanf("%d %d", &a, &b);
    
    // 2. Read two floating-point numbers from the second line
    scanf("%f %f", &c, &d);
    
    // 3. Print the sum and difference of the integers on the first line
    printf("%d %d\n", a + b, a - b);
    
    // 4. Print the sum and difference of the floats rounded to 1 decimal place on the second line
    printf("%.1f %.1f\n", c + d, c - d);
    
    return 0;
}

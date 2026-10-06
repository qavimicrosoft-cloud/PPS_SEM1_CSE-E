#include <stdio.h>

void update(int *a, int *b) {
    int temp = *a; 
    
    *a = temp + *b; 
    
    *b = temp - *b; 
    if (*b < 0) {
        *b = -(*b); 
    }
}

int main() {
    int a, b;
    
    // Read two integers
    scanf("%d %d", &a, &b);
    
    // Call the update function
    update(&a, &b);
    
    // Print the modified values
    printf("%d\n%d\n", a, b);
    
    return 0;
}

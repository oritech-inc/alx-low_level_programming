#include <stdio.h>

int main(void) {
    int a[] = {5, 15, 98, 12};
    int *p = a;
    
    printf("a[2] = %d\n", *(p+2));
    
    return 0;
}

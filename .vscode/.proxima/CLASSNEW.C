#include <stdio.h>
int main() {
    int y = 10;
    printf("5d\n",y);
    int* a=&y;
    printf("%p\n",a);
    *a=20;
    printf("%d\n",a);

    return 0;
    
}
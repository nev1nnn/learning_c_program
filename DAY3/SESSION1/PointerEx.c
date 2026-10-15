#include <stdio.h>
int main(){
    int n=10;
    int *ptr=&n;
    printf("Value of n: %d\n", n);
    printf("Address of n: %p\n", &n);
    printf("Value at address stored in ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);
    return 0;
}
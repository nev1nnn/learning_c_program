#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int *p=&arr[1];
    int *q=&arr[4];
    int result=q-p;
    printf("The difference between the two pointers is: %d\n", result);
    return 0;
}
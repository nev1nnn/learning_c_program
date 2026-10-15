#include <stdio.h>
int A(int n){
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return(A(A(n+10)));
    }
}
int main(){
    int n;
    A(150);
    return 0;
}
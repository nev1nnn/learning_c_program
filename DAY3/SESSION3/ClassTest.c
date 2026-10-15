#include <stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=2;j<=0;j--)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}


//1 2 3 
//4 5 6 
//7 8 9 

//7 4 1 
//8 5 2
//9 6 3 
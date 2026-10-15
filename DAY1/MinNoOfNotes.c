#include <stdio.h>
int main(){
    int N;
    printf("Enter the amount: ");
    scanf("%d", &N);
    
    int count=0;\
    int size=sizeof(notes)/sizeof(notes[0]);
    for(int i=0;i<size;i++){
        if(N==0){
            break;
        }
        count+=N/notes[i];
        N=N%notes[i];
    }
    printf("Minimum number of notes required: %d\n",count);
}


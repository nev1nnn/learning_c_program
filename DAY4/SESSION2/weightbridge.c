#include <stdio.h>
struct ticket{
    int ticketno;
    char registration[50];
    float gross;
    float tare;
}

float helper1(struct ticket *t){
    return t->gross - t->tare;
}


int main(){
    int n;
    printf("Enter the number of tickets: ");
    scanf("%d",&n);
    struct ticket *array = malloc(n * sizeof(struct ticket));
    for(int i=0;i<n;i++){
        printf("Enter ticket number: ");
        scanf("%d",&array[i].ticketno);
        printf("Enter registration: ");
        scanf("%s",array[i].registration);
        printf("Enter gross weight: ");
        scanf("%f",&array[i].gross);
        printf("Enter tare weight: ");
        scanf("%f",&array[i].tare);
    }
    double total = 0;
    int max_index = 0;
    for(int i=0;i<n;i++){
        double net_weight = helper1(&array[i]);
        total = total+net_weight;
        if(net_weight > helper1(&array[max_index])){
            max_index = i;
        }
    }
    printf("Total net weight: %.2f\n", total);
    printf("Ticket with maximum net weight:\n");
    printf("Ticket Number: %d\n", array[max_index].ticketno);
    printf("Registration: %s\n", array[max_index].registration);
    printf("Net Weight: %.2f\n", helper1(&array[max_index]));
    free(array);
    return 0;
}
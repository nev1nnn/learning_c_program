#include <stdio.h>
struct Address{
    int pincode;
    char village[100];
};
struct member{
    int id;
    char name[20];
    double sharecapital;
    struct Address address;
};
int main(){
    struct member array[100];
    int n;
    int maximum_share_index = 0;
    double total=0;
    printf("Enter the number of members: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the id of member %d: ",i+1);
        scanf("%d",&array[i].id);
        printf("Enter the name of member %d: ",i+1);
        scanf("%s",array[i].name);
        printf("Enter the share capital of member %d: ",i+1);
        scanf("%lf",&array[i].sharecapital);
        printf("Enter the pincode of member %d: ",i+1);
        scanf("%d",&array[i].address.pincode);
        printf("Enter the village of member %d: ",i+1);
        scanf("%s",array[i].address.village);
        total=total+array[i].sharecapital;
        if(array[i].sharecapital>array[maximum_share_index].sharecapital){
            maximum_share_index=i;
        }
    }
    for(int i=0;i<n;i++){
        printf("\nMember %d details:\n",i+1);
        printf("ID: %d\n",array[i].id);
        printf("Name: %s\n",array[i].name);
        printf("Share Capital: %.2lf\n",array[i].sharecapital);
        printf("Pincode: %d\n",array[i].address.pincode);
        printf("Village: %s\n",array[i].address.village);
    }
    printf("Total share capital: %.2lf\n",total);
    printf("%d %s %lf",array[maximum_share_index].id,array[maximum_share_index].name,array[maximum_share_index].sharecapital);
}
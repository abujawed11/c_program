#include <stdio.h>
int main() {

    int a[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter array vlue %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("The values of arrays are: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t",a[i]);
    }
    
    


}
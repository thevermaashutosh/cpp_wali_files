#include <stdio.h>
int main(){
    int n; 
    printf("Enter the no of elements:\n");
    int a[n]; 
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){ 
        scanf("%d", a+i);
    }
    printf("\n");
    printf("The %d elements are:\n");
    for(int i=0; i<n; i++){ 
        printf("%d ", a[i]);
    }
}
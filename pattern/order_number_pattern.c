/*Order of Numbers pattern in C 
Written by K.Pradheepkumar dated 24-10-2024 */
#include<stdio.h>

int main(){
    int i, j, a, number=1;
    
    printf("Enter the size of the pattern: ");
    scanf("%d", &a);
    
    for(i=1; i<=a; i++) {
        for(j=1; j<=i; j++){
            printf("%d ", number);
            number++;
        }printf("\n");
    }
}
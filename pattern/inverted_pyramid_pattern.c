/*Inverted pyramid pattern in C 
Written by K.Pradheepkumar dated 24-10-2024 */

#include<stdio.h>

int main(){
    int i, j, a, k;
    
    printf("Enter the size of the pattern: ");
    scanf("%d", &a);
    
    for(i=a; i>=1; i--) {
        for(k=1; k<=a-i; k++){
            printf(" ");
        }
            for(j=1; j<=2*i-1; j++){
                 printf("$");
            }printf("\n");
        
    }
}
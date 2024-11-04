/* Inverted Half pyramid pattern program in C
   written by K.Pradheepkumar dated 24-10-2024 */

#include<stdio.h>

int main(){
    int i, j;
    int a;
    printf("Enter the size of pattern: ");
    scanf("%d", &a);
    
    for(i=0; i<=a; i++){
        for(j=a; j>=i; j--){
            printf("$");
        }printf("\n");
    }
}
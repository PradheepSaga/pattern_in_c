/* Half pyramid integer pattern in C
   written by K.Pradheepkumar dated 24-10-2024 */

#include<stdio.h>

int main(){
    int i, j, a;
    
    printf("Enter the size of pattern: ");
    scanf("%d", &a);
    
    for(i=0; i<=a; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }printf("\n");
    }
}
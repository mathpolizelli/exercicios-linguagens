#include <stdio.h>

int main() {
    int num, maior, menor;
    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    printf("Maior = %d\n", maior);     
    printf("Menor = %d\n", menor);
    printf("Digite outro numero: ");
    scanf("%d", &num);
    if(num > maior) {
        maior = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);
    } if (num < menor) {
        menor = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);  
    }
    printf("Digite outro numero: ");
    scanf("%d", &num);
    if(num > maior) {
        maior = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);       
    } if (num < menor) {
        menor = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);   
    }
    printf("Digite outro numero: ");
    scanf("%d", &num);
    if(num > maior) {
        maior = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);      
    } if (num < menor) {
        menor = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);  
    }
    printf("Digite outro numero: ");
    scanf("%d", &num);
    if(num > maior) {
        maior = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);      
    } if (num < menor) {
        menor = num;
        printf("Maior = %d\n", maior);     
        printf("Menor = %d\n", menor);
    }
    
    return 0;
}
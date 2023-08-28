//Hernandez Ceseña Ivan Fernando 373077
// 08/26/2023
//numero par e impar
//NYP_ACT1_2_932

#include <stdio.h>

int main(){

    int num;

    printf("Ingresa un numero: ");scanf("%d",&num);

    if (num%2==0)
    {
        printf("El numero %d es PAR", num);
    }
    else{
        printf("El numero %d es IMPAR", num);
    }
    
    return 0;
}
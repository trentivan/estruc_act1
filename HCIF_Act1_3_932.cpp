//Hernandez Ceseña Ivan Fernando 373077
// 08/26/2023
//Leer 4 calificaciones y determinar si el alumno esta aprobado o reprobado
//NYP_ACT1_3_932

#include <stdio.h>

int main(){

    
    int calif1,calif2,calif3,calif4,promedio;

    printf("Ingresa tus 4 calificaciones: ");scanf("%d %d %d %d",&calif1,&calif2,&calif3,&calif4);

    promedio= (calif1+calif2+calif3+calif4)/4;


    if(promedio>=60 && promedio<100){

        printf("El alumno Aprobo!");
    }
    else{

        printf("El alumno esta reprobado");
    }
    printf("\nPromedio: %d",promedio);

    return 0;
}
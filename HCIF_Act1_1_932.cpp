//Hernandez Ceseña Ivan Fernando 373077
//08/27/2023
//4 calificaciones e imprima si esta aprobado o reprobado
//NYP_ACT1_1_932

#include <stdio.h>

int main(){

    int calif1,calif2,calif3,calif4,promedio;

    printf("Ingresa tus 4 calificaciones: ");scanf("%d %d %d %d",&calif1,&calif2,&calif3,&calif4);

    promedio= (calif1+calif2+calif3+calif4)/4;


    if(promedio>=60){

        printf("El alumno Aprobo!");
    }
    else{

        printf("El alumno esta reprobado");
    }

    return 0; 
}
//Hernandez Ceseña Ivan Fernando 373077
// 08/26/2023
//Ingresar 3 numeros e imprimir el numero mayor
//NYP_ACT1_9_932

#include <stdio.h>

int main(){

    int n1,n2,n3,op;
    
	do{
	    printf("Escribe 3 numeros:\n");
	    scanf("%d %d %d",&n1,&n2,&n3);
	
		if(n1>n2&&n2>n3){
			printf("Mayor: %d",n1);
		}
		else if(n2>n3&&n3>n1){
			printf("Mayor: %d",n2);
		}
		else if(n3>n1&&n1>n2){
			printf("Mayor: %d",n3);
		}
		else if(n1>n3&&n3>n2){
			printf("Mayor: %d",n1);				
		}
		else if(n3>n2&&n2>n1){
			printf("Mayor: %d",n3);
		}
		else if(n2>n1&&n1>n3){
			printf("Mayor: %d",n2);
		}
		printf("\n1) seguir 2)parar: \t");scanf("%d",&op);
		
	}while(op==1);
    return 0;
}

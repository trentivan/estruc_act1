//Hernandez Ceseña Ivan Fernando 373077
// 22/08/23
//llamadas local, nacional, internacional: Desplegar, ​ Subtotal​ ,​ Iva​ (16%) y ​ Tota​l
// NYP_ACT1_11_932

# include <stdio.h>

int main()
{
    int min, min2, llam, subtotal;
    float iva, total;

    printf("de cuantos minutos es tu llamada? \n");
    scanf("%d",& min);
    printf("que tipo de llamada es?\n");
    printf("1) local.\n2) nacional.\n3) internacional.\n");
    scanf("%d",& llam);

    if(llam==1)
    {
        subtotal= min * 3;
        iva= subtotal * 0.16;
        total= subtotal + iva;
        printf("el subtotal es: %d\n", subtotal);
        printf("el iva al 16%% es: %f\n", iva);
        printf("el total es: %f\n", total);
    }
    else
    {
        if(llam==2)
        {
            min2= min - 3;
            subtotal= (3 * 7) + (min2 * 2);
            iva= subtotal * 0.16;
            total= subtotal + iva;
            printf("el subtotal es: %d\n", subtotal);
            printf("el iva al 16%% es: %f\n", iva);
            printf("el total es: %f\n", total);
        }
        else
        {
            if(llam==3)
            {
                min2= min - 2;
                subtotal= (2 * 9) + (min2 * 4);
                iva= subtotal * 0.16;
                total= subtotal + iva;
                printf("el subtotal es: %d\n", subtotal);
                printf("el iva al 16%% es: %f\n", iva);
                printf("el total es: %f\n", total);
            }
        }
    }

    return 0;
}
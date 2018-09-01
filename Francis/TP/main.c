#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag = 1, opcion;

    do
    {
        printf("1. Ingrese el 1er operando\n2. Ingrese 2do operando\n");
        printf("\nIngrese una opcion del menu:");
        scanf("%d", &opcion);

            switch (opcion)
            {
                case 1:
                        printf("Ingrese un numero");//ingresarNumero();
                    break;
                case 2:
                        printf("Ingrese un numero");//ingresarNumero();
                    break;
                case 5:
                    break;
                flag = 0;
                __fpurge(stdin);
                default:
                    printf("Ingrese una opcion valida!\n");
            }

            getchar();
            //system("clear");

        flag = 0;

    }while(flag != 0);

    return 0;
}

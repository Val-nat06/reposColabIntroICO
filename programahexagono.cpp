// Valeria Hernández Mendoza
#include <stdio.h>

int main()
{
    float lado, perimetro;
    printf("Ingrese la medida de lado del hexágono: ");
    scanf_s("%f", &lado);

    perimetro = 6 * lado;
    printf("El perímetro del hexágono es: %.2f", perimetro);

    return 0;
}

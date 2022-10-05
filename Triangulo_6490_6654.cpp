#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

bool noNegativo(int n){
    if(n > 0){
        return true;
    } 
    
    return false;
}

int validarDato(const char* fm, void* var)
{
    int ch;
    /* Sí scanf devuelve 0, es porque no se cumplió con el formato especificado. */
    if(!scanf(fm, var))
    {
        /* Limpiamos el búfer del teclado, así logramos que la próxima llamada de scanf pause el programa. */
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
        
    }
    
    /* Verifica sí el búfer quedó sucio. */
    if(getchar() != '\n')
    {
        /* Limpiamos el búfer del teclado. */
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
    }
    
    
    return 0;
}

float leerNumero(){
    float n;
    do{
        fflush(stdin);
    }while(validarDato("%f", &n));
    
    return n;
}

int main(void){
    float a, b, c;
    
    do{
        printf("\nIngrese el PRIMER lado: (no negativos): ");
        a = leerNumero();
    }while((a < 0) || (a >= 1000));

    do{
        printf("\nIngrese el SEGUNDO lado: (no negativos): ");
        b = leerNumero();
    }while((b < 0) || (b >= 1000));
    
    do{
        printf("\nIngrese el TERCER lado: (no negativos): ");
        c = leerNumero();
    }while((c < 0) || (c >= 1000));
    
    if(a==b&&a==c)
    {
        printf("\n El triangulo es: *EQUILATERO*");
    }
    else if(a==b||a==c||b==c)
    {
        printf("\n El triangulo: *ISOCELES*");
    }
    else if(a!=b&&a!=b&&b!=c)
    {
        printf("\n El triangulo es: *ESCALENO*");
    }
    setbuf ( stdin, NULL );
    getchar();

}
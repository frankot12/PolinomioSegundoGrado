/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
#include <iostream>

using namespace std;

int main(int argc, char** args){
    bool esEntero(string);
	string linea;
	int numero;
	bool repite = true;
 float a, b, c, disc, x1, x2, xi, xr;
 char letra;
 
 printf("\n\t\tRAICES DE UN POLINOMIO DE SEGUNDO GRADO");
 printf("\n\t\t_________________________________________\n\n\n");
 	
 	
 	
 //funcion que valida que solo sea numeros
 	do {
		
		cout << "\nIngrese un valor entero: ";
		
		getline(cin, linea);
		
		if (esEntero(linea)) {
			repite = false;
		} else {
			cout << "No has ingresado un valor entero. Intentalo nuevamente" << endl;
		}
	} while (repite);
 

 do {
 printf("\t\tIngrese un valor dentro del rango 1 -1000 -->");
cin>> a;
 
     
 } while(a>1000);

 while(a==0){
 printf("\t\tEl valor de a no puede ser 0 ingrese el valor de nuevo -->");
 scanf("%f", &a);
 }
 printf("\t\t\tIngrese el valor de b --> ");
 scanf("%f", &b);
printf("\t\t\tIngrese el valor de c --> ");
 scanf("%f", &c);
 disc=pow(b, 2.0)-4*a*c;
 if(disc>0.0){
 printf("\t\t\tLas dos raices son reales");
 x1=((-b+sqrt(disc))/(2.0*a));
 x2=((-b-sqrt(disc))/(2.0*a));
 printf("\n\t\t\tx1=%.2f x2=%.2f", x1, x2);
 }
 else{
 if(disc==0.0){
 x1=(-b)/(2.0*a);
 printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1);
 }
 else{
 xr=(-b/(2.0*a));
 xi=(sqrt(-disc)/(2.0*a));
 printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
 }
 }
 printf("\n\n\t\t\t");
}



bool esEntero(string linea) {
	bool esEntero = true;
	int longitud = linea.size();
	
	if (longitud == 0) {
		esEntero = false;
	} else if (longitud == 1 && !isdigit(linea[0])) {
		esEntero = false;
	} else {
		int indice = 0;
		if (linea[0] == '+' || linea[0] == '-') {
			indice = 1;
		} else {
			indice = 0;
		}
		
		while (indice < longitud) {
			if (!isdigit(linea[indice])) {
				esEntero = false;
				break;
			}
			indice++;
		}
	}
	
	
	return esEntero;	
}
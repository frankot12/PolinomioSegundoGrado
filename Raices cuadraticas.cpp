/******************************************************************************

                      

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

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

int main(int argc, char** args){
    float a, b, c, disc, x1, x2, xi, xr;
    string val11,val22,val33;
    bool val1 = true;
    bool val2 = true;
    bool val3 = true;
    printf("\n\t\tSolucion de una ecuacion de segundo grado");
    printf("\n\t\t_______________\n\n\n");

    do {
	    cout << "\nIngrese el valor de a: ";
	    getline(cin, val11);
		
		//mayor a 1000
		if (atoi(val11.c_str()) > 1000) {
			cout << "No has ingresado un valor menor que 1000, ingresa de nuevo" << endl;
		}
		
		if (atoi(val11.c_str()) == 0) {
			cout << "Esta variable no puede ser igual a 0, ingresa de nuevo" << endl;
		}
		
	    if (esEntero(val11)) {
			val1 = false;
			a = atoi(val11.c_str());
	    } else {
			cout << "No has ingresado un valor numerico, ingresa de nuevo" << endl;
	    }
	} while ((atoi(val11.c_str())==0)||(atoi(val11.c_str())>=1000));
	

    do {
	    cout << "\nIngrese un valor de b: ";
	    getline(cin, val22);
		
		if (atoi(val22.c_str()) > 1000) {
			cout << "No has ingresado un valor menor que 1000, ingresa de nuevo" << endl;
		}
		
	    if (esEntero(val22)) {
			val2 = false;
			b = atoi(val22.c_str());
    	} else {
			cout << "No has ingresado un valor correcto, ingresa de nuevo" << endl;
	    }
	} while ((val2) || (atoi(val22.c_str())>=1000));
	
	
	
	do {
	    cout << "\nIngrese un valor de c: ";
	    getline(cin, val33);
		
		if (atoi(val33.c_str()) > 1000) {
			cout << "No has ingresado un valor menor que 1000, ingresa de nuevo" << endl;
		}
		
	    if (esEntero(val33)) {
			val3 = false;
	    } else {
			cout << "NNo has ingresado un valor correcto, ingresa de nuevo" << endl;
	    }
	} while ((val3) || (atoi(val33.c_str())>=1000));
	
	c= atoi(val33.c_str());
	
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

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

void arreglo(int dato[]);
void pasoPorvalor(int edad);
void pasoPorReferenciaPorReferencia(int &edad);
void pasoPorreferenciaPorPuntero(int *edad);

int datos[] = {18,5,3,34,22,10,2};
int datos2[] = {18,5,3,34,22,10,2};
int tamano = sizeof(datos)/ sizeof(*datos);

void burbujaPunteros(int datos[],int tamano);
void mostrarDatos(int datos[],int tamano);
void burbuja2(int vector[], int tamano);

int main() {

burbujaPunteros(datos,tamano);
cout << endl;
mostrarDatos(datos,tamano);
cout << endl;
burbuja2(datos2,tamano);
cout << endl;
mostrarDatos(datos,tamano);

}

void burbujaPunteros(int datos[],int tamano) {

    bool huboCambios;
    int comparaciones = 0;
    int intercambios = 0;

    do
    {
        int *pdatos = &datos[0];
        int *pdatos2 = &datos[1];
        huboCambios = false;
        for (int i = 0; i + 1 < tamano; i++)
        {
            comparaciones++;
            if (*pdatos > *pdatos2)
            {
                int aux = *pdatos2;
                *pdatos2 = *pdatos;
                *pdatos = aux;
                huboCambios = true;
                intercambios++;
                pdatos++;
                pdatos2++;
            }
            else
            {
                pdatos++;
                pdatos2++;
            }
        }
    }
    while (huboCambios);

    cout << endl << "Comparaciones : " << comparaciones;
    cout << endl << "intercambios : " << intercambios;

}

void burbuja2(int vector[], int tamano)
{
    bool huboCambios;
    int comparaciones = 0;
    int intercambios = 0;
    do
    {
        huboCambios = false;
        for(int i = 0; i+1 < tamano; i++)
        {
            comparaciones++;
            if(vector[i] > vector[i+1])
            {
                int aux = vector[i+1];
                vector[i+1] = vector[i];
                vector[i] = aux;
                huboCambios = true;
                intercambios++;
            }
        }
    }
    while(huboCambios);
    cout << endl << "Comparaciones : " << comparaciones;
    cout << endl << "intercambios : " << intercambios;
}

void mostrarDatos(int datos[],int tamano)
{
    for (int i = 0; i < tamano;i++)
    {
        cout <<  datos[i] << " - ";
    }
}


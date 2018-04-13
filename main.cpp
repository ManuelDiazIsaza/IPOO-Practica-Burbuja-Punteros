

#include <stdio.h>
#include <iostream>

using namespace std;

void arreglo(int dato[]);
void pasoPorvalor(int edad);
void pasoPorReferenciaPorReferencia(int &edad);
void pasoPorreferenciaPorPuntero(int *edad);

int datos[] = {18,5,3,34,22,10,2};
int datos2[] = {18,5,3,34,22,10,2};
int datos3[] = {18,5,3,34,22,10,2};
int tamano = sizeof(datos)/ sizeof(*datos);

void burbujaPunteros(int datos[],int tamano);
void burbujaPunteros2(int datos[],int tamano);
void mostrarDatos(int datos[],int tamano);
void burbuja2(int vector[], int tamano);

int main() {

cout << endl << "Utilizando burbujaPunteros" << endl;
burbujaPunteros(datos,tamano);
cout << endl;
mostrarDatos(datos,tamano);
cout << endl;
cout << endl << "Utilizando burbujaPunteros2" << endl;
burbujaPunteros2(datos2,tamano);
cout << endl;
mostrarDatos(datos2,tamano);
cout << endl;
cout << endl << "Utilizando el algoritmo de burbuja con indice" << endl;
burbuja2(datos3,tamano);
cout << endl;
mostrarDatos(datos3,tamano);

}

// En este utilizo dos punteros
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

// En este utilizo indice pero para indicar el valor desde donde esta apuntando el puntero, osea no utilizo el i para
// referenciar alguna posicion, En este solo uso un puntero
void burbujaPunteros2(int datos[],int tamano) {

    bool huboCambios;
    int comparaciones = 0;
    int intercambios = 0;

    do
    {
        int *pdatos = &datos[0];
        huboCambios = false;
        for (int i = 0; i + 1 < tamano; i++)
        {
            comparaciones++;
            if (pdatos[0] > pdatos[1])
            {
                int aux = pdatos[1];
                pdatos[1] = pdatos[0];
                pdatos[0] = aux;
                huboCambios = true;
                intercambios++;
                pdatos++;
            }
            else
            {
                pdatos++;
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


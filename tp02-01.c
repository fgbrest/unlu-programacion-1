#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int const MAX=30;

void cargar(int v[MAX], int util, int cantidadValores, int valorMinimo){
// Carga números al azar
// rand() simpre los mismos
	int i;
	for(i=0;i<util;i++)
		v[i]=rand() % cantidadValores + valorMinimo;  //Genera valores de 0 a 10
}

// 1
int productoEscalar(int a[], int b[], int n){
    int producto = 0;
    for (int i = 0; i < n; i++){
        producto += a[i] * b[i];
    };
    return producto;
};

// 2
int sumaParImpar(int a[], int b[], int n){
    int suma = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; i += 2) {
        suma += a[j] + b[i];
        };
    };
    return suma;
};

// 3
int desplazar(int a[], int n){
    int i, j, aux;
    aux = a[i] 
    for (i = 1; i < n; i++) {
        aux = a[i];
        for (j = i - 1; j >= 0, j--) {
            a[j+1] = a[j];
            if (j == 0)
        }
    }
};

int main(){
    int vector1[10];
    int vector2[10];
    int vector3[120];
    int vector4[120];

    cargar(vector1, 10, 12, 1);
    cargar(vector2, 10, 12, 1);
    cargar(vector3, 120, 1000, 1);
    cargar(vector4, 120, 1000, 1);

    int ejercicio1 = productoEscalar(vector1, vector2, 10);
    int ejercicio2 = sumaParImpar(vector3, vector4, 120);

    printf("Ejercicio 1 - Producto escalar: %d\n", ejercicio1);
    printf("Ejercicio 2 - Sumatoria: %d\n", ejercicio2);
    return 0;
};
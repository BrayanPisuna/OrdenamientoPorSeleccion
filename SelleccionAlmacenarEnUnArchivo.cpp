#include <iostream>
#include <string.h>
#include <fstream> //PARA ALMACENAR EN UN ARCHIVO TXT

using namespace std;


void ingresarElementos(int array[], int n);
void imprimirElementos(int array[], int n);
void algoritmoSeleccion(int array[], int n);
void almacenar(int array[], int n);


int main()
{
 int t;

	cout<<"INGRESE EL TAMÑO DE LOS BARRILES "<<endl;
    cin>>t;
	cout<<"INGRESE EL NUMERO DE BARRILES "<<endl;
    	int arregloBarriles[t];
    	ingresarElementos(arregloBarriles,t);
    	imprimirElementos(arregloBarriles,t);
    	algoritmoSeleccion(arregloBarriles,t);
    	cout<<endl;
    	imprimirElementos(arregloBarriles,t);
    	cout<<endl;
    	cout<<"REVIZA TU ARCHIVO"<<endl;
    	almacenar(arregloBarriles,t);

    return 0;
}


void ingresarElementos(int array[], int n){

    for(int i = 0; i< n ; i++){

        cin>>array[i];

        }

}

void imprimirElementos(int array[], int n){

    for(int i = 0; i< n ;i++){

        cout<<"["<<array[i]<<"]"<<" ";

        }

}

void algoritmoSeleccion(int array[], int n){

int c = 0, m = 0;

 for(int i = 0; i< n ; i++)
    {
   for(int j=i+1; j<n; j++ )
        {
            c = c+1;
            if (array[i] > array[j])
            {
                m++;
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    cout<<endl;
    cout<<"NUMERO DE COMPARCIONES: "<< c << endl;
    cout<<"NUMERO DE MOVIENTOS: "<< m << endl;
}

void almacenar(int array[], int n){

    ofstream archivo;
    archivo.open("datos.txt", ios::app);
    archivo<<"hola";
    cout<<endl;
    archivo<<"INTRO A ARCHIVOS";
    cout<<endl;
	archivo.close();

}

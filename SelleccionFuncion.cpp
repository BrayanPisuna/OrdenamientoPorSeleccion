#include <iostream>

using namespace std;


void ingresarElementos(int array[], int n);
void imprimirElementos(int array[], int n);
void algoritmoSeleccion(int array[], int n);



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
 for(int i = 0; i< n ; i++)  //1
    {


        for(int j=i+1; j<n; j++ ) //2
        {

            if (array[i] > array[j])
            {
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}


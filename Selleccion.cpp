#include <iostream>

using namespace std;

int main()
{

    //ARREGLO
    int arreglo[]= {2,6,3,8,9,1};

    //ALGORITMO POR SELECCION
    //1 AQUI TENDRIAMOS  FOR PARA LA PRIMERA POSICIONES
    //2 EL PRIMER FOR SERIA PARA LAS SEGUNDA POSICION
    //3 EN EL IF TENDRIAMOS YA EL PRIMER NUMERO EN LA PRIMERA POSICION Y EL SEGUNDO EN LA SEGUNDA POSICION PARA SU COMPARACION

    cout<<"ARREGLO POR SELLECCION"<<endl;
    cout<<endl;
   for(int i = 0; i< 6 ;i++)  //1
    {

       cout<<"["<<arreglo[i]<<"]"<<" ";
   }
        cout<<endl;
   
    for(int i = 0; i< 6 ; i++)  //1
    {


        for(int j=i+1; j<6; j++ ) //2
        {

            if (arreglo[i] > arreglo[j])
            {
                int aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
    cout<< endl;
    for(int i = 0; i< 6 ; i++){

        cout<<"["<<arreglo[i]<<"]"<<" ";
        
        }






    return 0;
}


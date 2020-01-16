#include<iostream>
using namespace std;

void crear_arreglo(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<"Ingrese un elemento: ";
        cin>>v[i];
    }
}

void mostrar_arreglo(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}

void ordenar(int v[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0){
            ++i;
        }
        else if(v[j]>0){
            --j;
        }
        else{
            int aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            ++i;
            --j;
        }
    }
}

int main()
{
    int v[30], n;
    cout<<"ingrese el numero de elementos del vector: ";
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    ordenar(v,n);
    mostrar_arreglo(v,n);

}

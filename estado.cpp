#include<iostream>
#include<string.h>
using namespace std;

int main()

{
    int np=0;
    int estado=0;
    char frase[30];
    cout<<"Ingrese una frase: ";
    cin.getline(frase,40,'\n');
    for(int k=0;frase[k]!='.';++k){
        if(estado==0){
            if(frase[k]!=' '){
                ++np;
                estado=1;
            }
        }
        else{
            if(frase[k]==' '){
                estado=0;
            }
        }
    }

    cout<<"numero de palabras: "<<np;
    return 0;
}

#include <iostream>
#include <cctype>
using namespace std;

int cant;
int x [15];
string pro [15];
void registro(){
    cout<<"Ingrese el numero de productos a registrar: ";
    cin>>cant;
    if(cant>0 && cant<16){
        for(int i=0;i<cant;i++){
            cout<<"Ingrese el nombre del producto "<<i+1<<endl;
            cin>> pro[i];
            cout<<"Ingrese la cantidad del producto "<<i+1<<endl;
            cin>>x[i];
            while(cin.fail() || x[i]<0){
                cout<<"Ingrese una cantidad valida"<<endl;
                cin.clear();
                cin.ignore(100,'\n');
                cin>>x[i];
            }

        }
    }else{
        cout<<"Ingrese una cantidad valida"<<endl;
    }
}

void mostrar(){
    if(cant>0){
        for(int i=0;i<cant;i++){
            cout<<pro[i]<< " - "<<x[i]<<endl;
        }
    }else{
        cout<<"No se han registrado productos";
    }
}

int suma;
void totalVentas(){
    if(cant>0){
        for(int i=0;i<cant;i++){
            suma+= x[i];
        }
        cout<<"El numero total de ventas es: "<<suma<<endl;
    }else{
        cout<<"No se han registrado productos";
    }
}

void mayorMenor(){
    if(cant==0){
        cout<<"No se han registrado productos"<<endl;
    }
    int mayor= x[0];
    int menor= x[0];
    int m, M;
    for(int i=0; i<cant;i++){
        if(mayor<=x[i]){
            mayor= x[i];
            M= i;
            
        }
        if(menor>=x[i]){
            menor= x[i];
            m=i;
            
        }
    }
    cout<<"Cantidad vendida mas alta: "<<pro[M]<<" - "<<mayor<<endl;
    cout<<"Cantidad vendida mas alta: "<<pro[m]<<" - "<<menor<<endl;
}

int main(){
    registro();/*
    mostrar();
    totalVentas();*/
    mayorMenor();
}

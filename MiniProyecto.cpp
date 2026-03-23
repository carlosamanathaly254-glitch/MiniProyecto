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
int main(){
    registro();
    mostrar();
}

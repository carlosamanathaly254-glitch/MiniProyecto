#include <iostream>
using namespace std;

int cant;
int x [15];
string pro [15];
void registro(){
    cout<<"Ingrese el numero de productos a registrar: ";
    cin>>cant;
    if(cant>0 && cant<16){
        for(int i=0;i<cant;i++){
            cout<<"Ingrese el producto "<<i+1<<endl;
            cin>> pro[i];
            if(cin.fail()){
                cout<<"Ingrese un producto";
            }
            cout<<"Ingrese el precio del producto"<<i+1;
            cin>>x[i];
            if(cin.fail() || x<0){
                cout<<"Ingrese la cantidad vendida";
            }

        }
    }else{
        cout<<"Ingrese una cantidad valida";
    }
}

int main(){
    registro();
}

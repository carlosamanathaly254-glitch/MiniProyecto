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
            while(cin.fail()){
                cout<<"Ingrese un producto";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>pro[i];
            }
            cout<<"Ingrese el precio del producto"<<i+1;
            cin>>x[i];
            while(cin.fail() || x[i]<0){
                cout<<"Ingrese una cantidad valida";
                cin.clear();
                cin.ignore(100,'\n');
                cin>>pro[i];
            }

        }
    }else{
        cout<<"Ingrese una cantidad valida";
    }
}

int main(){
    registro();
}

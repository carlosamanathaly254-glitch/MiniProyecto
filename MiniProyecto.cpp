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
    cout<<"Cantidad vendida mas baja: "<<pro[m]<<" - "<<menor<<endl;
}
  int opcion;
void buscar(){
    if(cant==0){
        cout<<"No se han registrado productos"<<endl;
    }
    cout<<"1. Buscar productos por nombre"<<endl;
    cout<<"2. Buscar productos por cantidad vendida"<<endl;
    cin>> opcion;
}



string nombre;
int r=0;
int p=0;
int cantidad;
void submenu(){
    if(opcion==1){
        cout<<"Ingrese el nombre del producto: ";
        cin>>nombre;

        for(int i=0;i<cant;i++){
        if(nombre== pro[i]){
            r=i;
        }
        }
        cout<<nombre<<" - "<<x[r]<<endl;
    }else if(opcion==2){
        cout<<"Ingrese la cantidad del producto: ";
        cin>>cantidad;
        while(cin.fail() || cantidad<0){
                cout<<"Ingrese una cantidad valida"<<endl;
                cin.clear();
                cin.ignore(100,'\n');
                cin>>cantidad;
            }

        for(int i=0;i<cant;i++){
            
            if(cantidad==x[i]){
                p=i;
            }
        }
        cout<<cantidad<<" - "<<pro[p]<<endl;
    }
}

void salir(){
    cout<<"Saliendo del menu..."<<endl;
    return;
}

void menu(){
     int option;
     
    do{
    cout<<"==============MENU==============="<<endl;
    cout<<"1. Registrar productos y cantidades vendidas"<<endl;
    cout<<"2. Mostrar listado de productos"<<endl;
    cout<<"3. Mostrar el total de ventas realizadas"<<endl;
    cout<<"4. Mostrar mayor y menor cantidades vendidas"<<endl;
    cout<<"5. Buscar productos"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>option;
    while(cin.fail() || option<0){
                cout<<"Ingrese una opcion valida"<<endl;
                cin.clear();
                cin.ignore(100,'\n');
                cin>>option;
            }
    if(option==1){
    registro();
    }else if(option==2){
    mostrar();
    }else if(option==3){
    totalVentas();
    }else if(option==4){
    mayorMenor();
    }else if(option==5){
    buscar();
    submenu();
    }else if(option==6){
    salir();
    }
    }while(option>0 && option<7);
}

int main(){
    menu();
}

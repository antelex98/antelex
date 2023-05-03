#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float saldoActual = 1000, montoIngresado, montoRetirar;
    int opcion;

    cout << "----------------------------"<<endl;
    cout <<"Bienvenido a tu Banca Virtual"<<endl;
    cout <<"-----------------------------"<<endl;
    cout << "Seleccionar opcion"<< endl;
    cout <<"  1. Consultar saldo"<<endl;
    cout <<"  2. Ingresar dinero"<<endl;
    cout <<"  3. Retirar dinero"<<endl;
    cout <<"  4. Salir"<<endl;
    cin >> opcion;
    system("cls");

    switch(opcion)
    {
        case 1:
            cout <<"--CONSULTAR SALDO--"<<endl;
            cout <<"Saldo actual:  "<<saldoActual;
            cout << endl;
            break;

        case 2:
            cout<<"--INGRESO DE DINERO--"<< endl;
            cout <<"Ingrese el monto: ";
            cin >> montoIngresado;
            saldoActual= saldoActual + montoIngresado;
            cout << "Saldo actual:  "<<saldoActual;
            cout << endl;
            break;

        case 3:
            cout <<"--RETIRAR DINERO--"<< endl;
            cout << "Ingrese el monto a ingresar:  ";
            cin>>montoRetirar;
            if(montoRetirar > saldoActual)
            {
                cout<< "No tiene esa cantidad de dinero";
            }
            else
            {
                saldoActual = saldoActual - montoRetirar;
                cout <<"Saldo actual:  " <<saldoActual;
            }
            cout <<endl;
            break;

        case 4:
            break;

        default:
            cout << "ALERTA: Opcion incorrecta";
            cout <<endl;
            break;
    }
    
    system("pause");
    return 0;
}
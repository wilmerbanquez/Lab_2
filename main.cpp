#include <iostream>

using namespace std;
int opcion;
int main()
{
    cout <<"Seleccione una opcion"<<endl;
    cout <<"1 para problema 1"<<endl;
    cout <<"3 para problema 3"<<endl;
    cout <<"5 para problema 5"<<endl;
    cout <<"8 para problema 8"<<endl;
    cout <<"10 para problema 10"<<endl;
    cout <<"12 para problema 12"<<endl;
    cout <<"13 para problema 13"<<endl;
    cout <<"14 para problema 14"<<endl;
    cout <<"16 para problema 16"<<endl;
    cout <<"18 para problema 16"<<endl;
    cin >>opcion;
    switch(opcion){
    case 1:
    {
        int dinero;
        cout<<"Ingrese una cantidad de dinero: ";
        cin >>dinero;
        int monedas;
        int cant[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
        for(int i = 0; i<=9; i++){
            monedas = dinero/cant[i];
            dinero = dinero - (monedas*cant[i]);
            cout <<cant[i]<<": "<<monedas<<endl;
            if(i==9){
                cout<<"faltante: "<<dinero<<endl;
            }
        }
    }
    case 3:
    {
        char palabra[25];
        cout <<"Ingrese una palabra: ";
        cin >>palabra;
        char palabra1[25];
        cout <<"Ingrese otra palabra: ";
        cin >>palabra1;
        unsigned short int a;
        unsigned short int b;
        bool cond = true;
        for(int i = 0;palabra[i]!='\0';i++)
            a = i;
        for(int i = 0;palabra1[i]!='\0';i++)
            b = i;
        if(a==b){
            for(int i = 0;palabra[i]!='\0';i++){
                if(palabra[i]!=palabra1[i])
                    cond = false;
            }
        }
        cout <<cond<<endl;
    }
    case 5:
    {

    }
    }
    return 0;
}

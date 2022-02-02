#include <iostream>

using namespace std;
int opcion;
void prob3(char palabra[25], char palabra1[25]);
void prob5(int num, char cad[]);
void prob8(char cad[]);
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
        char palabra1[25];
        cout <<"Ingrese una palabra: "; cin >>palabra;
        cout <<"Ingrese otra palabra: "; cin >>palabra1;
        prob3(palabra, palabra1);
    }
    case 5:
    {
        int num;
        cout <<"Ingrese un numero: ";
        cin >>num;
        char cad[25];
        prob5(num, cad);
    }
    case 8:
    {
        char cad[50];
        cout <<"Ingrese una cadena de caracteres: ";
        cin >>cad;
        int a = 0;
        int aux = 0;
        while(cad[a]!='\0'){
            if(cad[a] >=65 and cad[a]<=90 or (cad[a]>=97 and cad[a]<=122)){
                aux++;
            }
            a++;
        }
        a = 0;
        int b = 0;
        char palabra[aux];
        while(aux>0){
            if(cad[a] >=65 and cad[a]<=90 or (cad[a]>=97 and cad[a]<=122)){
                palabra[b] = cad[a];
                aux--;
                b++;
            }
            a++;
        }
        cout<< "Texto: "<<palabra<<endl;
        a = 0;
        aux = 0;
        while(cad[a]!='\0'){
            if(cad[a] >=48 and cad[a]<=57){
                aux++;
            }
            a++;

        }
        char num[aux];
        a = 0;
        b = 0;
        while(aux>0){
            if(cad[a] >=48 and cad[a]<=57){
                num[b] = cad[a];
                aux--;
                b++;
            }
            a++;
        }
        cout << "Numeros: "<<num<<endl;
    }
    }
    return 0;
}
void prob3(char palabra[25], char palabra1[25]){
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
        cout <<cond<<endl;
    }
    if(a!=b)
        cout <<"Las palabras son de diferente longitud"<<endl;
}
void prob5(int num, char cad[]){
    int n = 0;
    int aux = num;
    while(aux>0){
        aux = aux/10;
        n++;
    }
    cad[n] = '\0';
    aux = num;
    int pos = n-1, dig;
    while(pos>=0){
        dig = aux%10;
        aux = aux/10;
        cad[pos] = dig + '\0';
        pos--;
    }
    cout<< cad;
}

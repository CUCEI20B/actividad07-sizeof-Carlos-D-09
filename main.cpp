#include <iostream>

using namespace std;

int main()
{

    string Tipo_Dato;

    cin>>Tipo_Dato;

    if (Tipo_Dato == "char")
    {
        cout<<endl<<sizeof(char)<<endl;
    }
    else if(Tipo_Dato=="int")
    {
        cout<<endl<<sizeof(int)<<endl;
    }
    else if(Tipo_Dato=="short")
    {
        cout<<endl<<sizeof(int)<<endl;
    }
    else if(Tipo_Dato=="float")
    {
        cout<<endl<<sizeof(int)<<endl;
    }
    else if(Tipo_Dato=="double")
    {
        cout<<endl<<sizeof(int)<<endl;
    }
    else if(Tipo_Dato=="long")
    {
        cout<<endl<<sizeof(int)<<endl;
    }
    else
    {
        cout<<endl<<"No es un tipo de dato";
    }
    return 0;
}
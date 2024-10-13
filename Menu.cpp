/*Diagrama de clase: https://miro.com/welcomeonboard/Z1JIaDNnRHFGa2NUSUdBajVJVnRjY1UzUTEwaHJ3NjFqbHE2Q1NjTlF4QVlTVWMwZ09GNFkwcGlQOW9MQ0NsYnwzNDU4NzY0NjAyOTc0NDUxNjY4fDI=?share_link_id=341001597443*/
#include <iostream>

using namespace std;


class Red_De_Suministro
{
private:
    /* data */
public:
    void Estación_De_Servicio()
    {

    }
};

Menu::Menu(/* args */)
{
}

Menu::~Menu()
{
}


int main()
{
    cout<<"Ingrese 1 si desea realizar una compra"<<endl;
    cout<<"Ingrese 2 si desea verificar ventas del día"<<endl;
    cout<<"Ingrese 3 si desea añadir una nueva estación o surtidor"<<endl;
    cout<<"Ingrese 4 si desea revisar el estado de algun surtidor"<<endl;
    cout<<"Ingrese 0 si desea salir del menu"<<endl;

    try{

        char Valor;
        cout << "Ingrese el valor a evaluar: ";
        cin >> Valor;

        if(Valor!=1 || Valor !=2 || Valor != 3 || Valor != 4 || Valor != 0)
            throw "El valor ingresado no es valido";
    }

    catch (const char *error)
    {
        cout << endl << "Error: " << error << endl;
    }


}


void compra()
{

}

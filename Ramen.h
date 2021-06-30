#include <iostream>
using namespace std;

/*Se define la clase*/
class Ramen{
    private:   //Atributos, van privados para encapsular
     string Marca; //En el UML lo puse como nombre
     int Picor;
     string Sabor;
     string Porcion;
     int Precio;
     int id_Producto;

     public:
    Ramen(); //constructor vacío

    void setMarca(string); //Se declaran los setters
    void setPicor(int);
    void setSabor(string);
    void setPorcion(string);
    void setPrecio(int);
    void setid_Producto(int);

    string getMarca(); //Se declaran los getters
    int getPicor();
    string getSabor();
    string getPorcion();
    int getPrecio();
    int getid_Producto();

    void mostrar();//metodo para mostrar todos los elementos de la clase
};

//Esto debería ir en otro archivo jejeje

void Ramen::setMarca(string name){ //se definen los setters
    this -> Marca=name;
};
void Ramen::setPicor(int spicy){
    this -> Picor=spicy;
};
void Ramen::setSabor(string flavour){
    this -> Sabor=flavour;
};
void Ramen::setPorcion(string portion){
    this -> Porcion=portion;
};
void Ramen::setPrecio(int price){
    this -> Precio=price;
};
void Ramen::setid_Producto(int id){
    this -> id_Producto=id;
};

string Ramen::getMarca(){ //se definen los getters
    return this ->Marca;
};
int Ramen::getPicor(){
    return this ->Picor;
};
string Ramen::getSabor(){
    return this ->Sabor;
};
string Ramen::getPorcion(){
    return this ->Porcion;
};
int Ramen::getPrecio(){
    return this ->Precio;
};
int Ramen::getid_Producto(){
    return this ->id_Producto;
};

/*Aquí termina la definicion de la clase*/

//Se define constructor
Ramen::Ramen(){
    
};

//defini el metodo mostrar
void Ramen::mostrar(){
    cout<< "Marca: "<<Marca<<endl;
    cout<< "Picor: "<<Picor<<endl;
    cout<< "Sabor: "<<Sabor<<endl;
    cout<< "Porcion: "<<Porcion<<endl;
    cout<< "Precio: "<<Precio<<endl;
    cout<< "id: "<<id_Producto<<endl;
};
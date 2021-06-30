#include <iostream>


using namespace std;

Ramen agregar(Ramen vector[], int pos){
    string varSTR; //Variable auxiliar para llenar los datos de cadena
    int varINT;//Variable auxiliar para llenar los datos enteros
    cout<< "Ingresa la marca del ramen \n";
    cin>>varSTR;
    vector[pos].setMarca(varSTR); 
    cout<<"Ingresa el nivel de picor\n";
    cin>>varINT;
    vector[pos].setPicor(varINT);
    cout<<"Ingresa el sabor\n";
    cin>>varSTR;
    vector[pos].setSabor(varSTR);
    cout<<"Ingresa la porcion\n";
    cin>>varSTR;
    vector[pos].setPorcion(varSTR);
    cout<<"Ingresa el precio\n";
    cin>>varINT;
    vector[pos].setPrecio(varINT);
    vector[pos].setid_Producto(pos);

    return vector[pos];
};







int eliminar(Ramen vector[],int pos, int capacidad){
   
   if (pos==capacidad)
   {
        vector[pos].setMarca(NULL);
        vector[pos].setPorcion(NULL);
        vector[pos].setPicor(0);  //Si es el último elemento solo limpio los datos
        vector[pos].setSabor(NULL);
        vector[pos].setPrecio(0);
        
   }else{
   
        for (size_t i = pos; i < capacidad-1; i++)
        {
            vector[pos].setMarca(vector[pos+1].getMarca());
            vector[pos].setPicor(vector[pos+1].getPicor());
            vector[pos].setSabor(vector[pos+1].getSabor());//si no es el último solo recorro los valore excepto el idesto para evitar problemas de repetir identificador
            vector[pos].setPorcion(vector[pos+1].getPorcion());//Si no lo hiciera así tendría que generar una función para los id
            vector[pos].setPrecio(vector[pos+1].getPrecio());
        }
        
   }
  return 0;  
};








Ramen editar(Ramen vector[], int pos){
cout<<"Selecciona el atributo que desear editar\n 1)Marca\n2)Picor\n3)Sabor\n4)Porcion\n5)Precio\n";
int op=0;
int varINT;//Variables auxiliares para editar
string varSTR;
cin>>op;
switch (op)
{           //Aquí reutilicé lo de la función agregar
case 1:
    cout<<"Ingrese la nueva marca\n";
    cin>>varSTR;
    vector[pos].setMarca(varSTR);
    break;
case 2:
    cout<<"Ingresa el nivel de picor\n";
    cin>>varINT;
    vector[pos].setPicor(varINT);
    break;
case 3:
    cout<<"Ingresa el sabor\n";
    cin>>varSTR;
    vector[pos].setSabor(varSTR);
    break;
case 4:
    cout<<"Ingresa la porcion\n";
    cin>>varSTR;
    vector[pos].setPorcion(varSTR);
    break;
case 5:
    cout<<"Ingresa el precio\n";
    cin>>varINT;
    vector[pos].setPrecio(varINT);
    break;            

default:
    break;
}
return vector[pos];
};

/*Consultas:
1.-Todos los datos de las Ramen cuyo precio es mayor a 30.00
2.-Mostrar el nombre y precio de las Ramen de un determinado picor*/
string consultar(Ramen vector[], int pos){
    cout<<"Selecciona una opcion\n1) Ver Todos los datos de las Ramen cuyo precio es mayor a 30\n2)Ver marca y precio de las Ramen de un determinado picor\n3)Ver todos los productos\n";
    int op=0;
    cin>>op;
    switch (op)
    {
    case 1:
        for (size_t i = 0; i < pos; i++)
        {//Recorre el vector en  busca de los que cumplen la condicion, cuando se cumple llamo a la funcion mostrar
            if (vector[i].getPrecio()>30)
            {
                vector[i].mostrar();
            }
            
        }
        
        break;
    case 2:
        cout<<"Ingrese el picor que busca\n";
        int nivel;
        cin>>nivel;
        for (size_t i = 0; i < pos; i++)
        {
            if (vector[i].getPicor()==nivel)//Se evalua el picor en cada elemento del arreglo, cuando encuentra coincidencias extraigo los valores con los get
            {
                cout<<"marca: "<<vector[i].getMarca()<<endl; 
                cout<<"precio: "<<vector[i].getPrecio()<<endl;
            }
            
        }
        break;
    case 3:
         for (size_t i = 0; i < pos; i++) //Esta tercera consulta se la agregué para revisar el estado del proyecto
        {
            vector[i].mostrar();
        }
        break;    
    default:
        break;
    }
};
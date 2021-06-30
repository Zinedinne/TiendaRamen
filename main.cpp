#include <iostream>
#include <conio.h>
#include "Ramen.h"
#include "funciones.h"
#define CapMax 5 //para definir el tamaño máximo del vector que almacena los ramen
using namespace std;


int main(){

    Ramen VectorRamen[CapMax];//Se define el vector donde se van a almacenar los ramen
    int capacidad=0;

    int TerminaEjec=0;
    while (TerminaEjec != 5){
        cout<< "Selecciona una opcion\n 1)Agregar producto\n 2)Eliminar Producto\n 3)Editar Producto\n 4)Consultar\n 5)Salir del programa\n";
        cin>>TerminaEjec;
        switch (TerminaEjec)
        {
        case 1: //Opcion para AGREGAR objeto al vector
            if(capacidad<CapMax){//Se verifica que aún se tenga espacio en el vector, de lo contrario manda una advertencia
            VectorRamen[capacidad]=agregar(VectorRamen, capacidad);
            cout<< "Se agrega producto\n"; 
            capacidad++;
            getch();}
            else{
                cout<< "No se pueden agregar mas productos\n";
                getch();
            }
            break;




        case 2: //Opcion para ELIMINAR objeto del vector
            if(capacidad!=0){ //Se verifica que haya elementos que se puedan eliminar, de lo contrario se manda una advertencia
                 cout<<"Ingresa el id del producto que se quiere eliminar\n";
                int identificador;
                cin>>identificador;
                for (size_t i = 0; i < capacidad; i++)//se recorre el arreglo para verificar que exista un producto con el id indicado
                {
                    if (VectorRamen[i].getid_Producto()==identificador)
                    {
                        eliminar(VectorRamen,identificador,capacidad);
                        cout<< "Se elimina producto\nEs posible que los id cambien\n";
                        capacidad--;
                        getch();
                    }
                    
                    
                    
                }
            
            }
            else{
                cout<< "No hay elementos para eliminar \n";
                getch();
            }
            break;






        case 3://Opcion para EDITAR objeto
            if(capacidad!=0){//Se verifica que haya elementos para editar
            cout<<"Ingresa el id del producto que se quiere editar\n";
            int identificador;
            cin>>identificador;
                for (size_t i = 0; i < capacidad; i++)//se recorre el arreglo para verificar que exista un producto con el id indicado
                {
                    if (VectorRamen[i].getid_Producto()==identificador)
                    {
                        VectorRamen[identificador] = editar(VectorRamen,identificador);
                        cout<< "Se edita producto\n";
                        getch();
                    }
                   
                    
                    
                }
                
            }
            else{
                cout<< "No hay elementos para editar\n";
                getch();
            }
            break;
        case 4://Opcion para CONSULTAR la lista
            cout<< "Se consulta la lista\n";
            cout<<"hay "<<capacidad<<" ramen\n";
            consultar(VectorRamen, capacidad);
            getch();
            break;
        case 5:
            cout<< "Hasta la proxima";
            getch();
            break;
        
        default:
            cout<< "Prueba otra opcion\n";
            getch();
            break;
        }
    } 
    return 0;
}

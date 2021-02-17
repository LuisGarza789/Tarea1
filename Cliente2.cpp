#include "Empleado.cpp"
#include <iostream>
using namespace std;
class Cliente2 : Empleado{

 // atributos

 private : string nit2;

 // constructor

 public :

 Cliente2(){

 }

 Cliente2(string coem,string suel,string pues,string n2) : Empleado(coem,suel,pues){ 

 nit2 = n2;

 }

  

 // METODOS

 //set (modificar)

 void setNit2(string n2){nit2 = n2;}

 void setCodigo_empleado(string coem){codigo_empleado =coem;}

 void setSueldo(string suel){sueldo = suel;}

 void setPuesto(string pues){ puesto = pues;}

 //get (mostrar)

 string getNit2(){	return nit2;}

 string getCodigo_empleado(){	return codigo_empleado;}

 string getSueldo(){	return sueldo;}

 string getPuesto(){	return puesto;}


  

// metodo

void mostrar(){

	cout<<"______________________"<<endl;

	cout<<nit2<<","<<codigo_empleado<<","<<sueldo<<","<<puesto<<","<<endl;

}

};

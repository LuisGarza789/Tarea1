#include <iostream>
using namespace std;
class Empleado{
	protected : string codigo_empleado,sueldo,puesto;
protected : 

		Empleado(){

		}

		Empleado(string coem,string suel,string pues){
			codigo_empleado=coem;
			sueldo=suel;
			puesto=pues;
			
}

	// metodos

	void mostrar();

	};

#include "Cliente.cpp"
#include "Cliente2.cpp"
#include <iostream>

using namespace std;

main(){

	string nit,nit2,nombres,apellidos,direccion,codigo_empleado,sueldo,puesto;

	int telefono;

	cout<<"Ingrese Nit: "<<endl;

	cin>>nit;

	
	cout<<"Ingrese Codigo de empleado: "<<endl;

	cin>>codigo_empleado;

	cout<<"Ingrese Nombres: "<<endl;

	cin>>nombres;

	cout<<"Ingrese Apellidos: "<<endl;

	cin>>apellidos;
	
	cout<<"Ingrese su Puesto: "<<endl;

	cin>>puesto;
	
	cout<<"Ingrese su Sueldo: "<<endl;

	cin>>sueldo;

	cout<<"Ingrese Direccion: "<<endl;

	cin>>direccion;

	cout<<"Ingrese Telefono: "<<endl;

	cin>>telefono;
	
	Cliente obj = Cliente();
	
	Cliente2 ob = Cliente2();
	
	obj.setNit(nit);
	
	ob.setCodigo_empleado(codigo_empleado);
	
	obj.setNombres(nombres);

	obj.setApellidos(apellidos);
	
	ob.setPuesto(puesto);
	
	ob.setSueldo(sueldo);
		
	obj.setDireccion(direccion);

	obj.setTelefono(telefono);

	//obj.mostrar();

	cout<<"Nit: "<<obj.getNit()<<endl;
	
	cout<<"Codigo de empleado: "<<ob.getCodigo_empleado()<<endl;

	cout<<"Nombres: "<<obj.getNombres()<<endl;

	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	
	cout<<"Puesto: "<<ob.getPuesto()<<endl;
	
	cout<<"Sueldo: "<<ob.getSueldo()<<endl;

	cout<<"Direccion: "<<obj.getDireccion()<<endl;

	cout<<"Telefono: "<<obj.getTelefono()<<endl;
	}

	// instanciar un objeto

	//Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	//obj.mostrar();
	//Cliente2 ob = Cliente2(codigo_empleado,sueldo,puesto,nit2);
	//ob.mostrar();



	






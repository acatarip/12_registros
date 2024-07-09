#include <iostream>
#include <string>
using namespace std;
struct EMP {
	int numero;
	string nombre;
	float ventas[12];
	float salario;	
} EMPLEADO[50];

int main (){
	int n;
	string MES[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", 
				"Julio", "Agosto", "Setiembre", "Octubre", "Noviembre", "Diciembre"};
	cout<<"Indique numero de empleados: "; cin>>n;
	for (int i=0; i<n; i++){
		cout<<"\tEmpleado "<<i+1<<endl;
		cout<<"Numero: "; cin>> EMPLEADO[i].numero;
		cin.ignore();
		cout<<"Nombre: "; getline(cin, EMPLEADO[i].nombre);
		for (int j=0; j<12; j++){
			cout<<"Ventas de "<<MES[j]<<": "; cin>>EMPLEADO[i].ventas[j];
		}
		cout<<"Salario: "; cin>>EMPLEADO[i].salario;	
	}
	
	float MaxVenA=0, VAE[n];
	//  VAE - Venta total anual de cada empleado 
	int pos=0;
	for (int i=0; i<n; i++){
		float VenA = 0;
		for (int j=0; j<12; j++){
			VenA = VenA + EMPLEADO[i].ventas[j];
		}
		VAE[i]=VenA;  //se guarda venta total anual en un arreglo
		if (VenA > MaxVenA){
			MaxVenA = VenA;
			pos=i;
		}
	}
	cout<<"\n\tEl empleado con mayor venta anual\n";
	cout<<"Numero: "<< EMPLEADO[pos].numero;
	cout<<"\nNombre: "<< EMPLEADO[pos].nombre;
	
	cout<<"\n\n\tEmpleados con sueldo aumentado\n";
	for (int i=0; i<n; i++){
		if (VAE[i] > 100){
			EMPLEADO[i].salario = EMPLEADO[i].salario * 1.1;
			cout<<"Numero: "<<i+1<<", Nombre: "<<EMPLEADO[i].nombre;
			cout<<", Nuevo salario: "<<EMPLEADO[i].salario<<endl;
		}
	}
	return 0;
}
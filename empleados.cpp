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
	int cc=0;  //contador de empleados con nuevo salario
	for (int i=0; i<n; i++){
		if (VAE[i] > 100){
			EMPLEADO[i].salario = EMPLEADO[i].salario * 1.1;
			cout<<"Numero: "<<EMPLEADO[i].numero<<", Nombre: "<<EMPLEADO[i].nombre;
			cout<<", Nuevo salario: "<<EMPLEADO[i].salario<<endl;
			cc++;
		}
	}
	if (cc==0){
		cout<<"Ningun empleado supero las 100 ventas.";
	}
	
	cout<<"\n\tEmpleados con ventas menores a 30 en diciembre\n";
	int dd=0;  //contador de empleados con ventas menores a 30 en diciembre
	for (int m=0; m<n; m++){
		if (EMPLEADO[m].ventas[11] < 30){
			cout<<"Numero: "<<EMPLEADO[m].numero;
			cout<<", Nombre: "<<EMPLEADO[m].nombre;
			cout<<", Ventas en diciembre: "<<EMPLEADO[m].ventas[11];
			dd++;
		}
	}
	if (dd==0){
		cout<<"Ningun empleado.";
	}
	return 0;
}
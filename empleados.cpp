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
		cout<<"Nombre: "; cin>> EMPLEADO[i].nombre;
		for (int j=0; j<12; j++){
			cout<<"Ventas de "<<MES[j]<<": "; cin>>EMPLEADO[i].ventas[j];
		}
		cout<<"Salario: "; cin>>EMPLEADO[i].salario;	
	}
	
	return 0;
}
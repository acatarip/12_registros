#include <iostream>
#include <string>
using namespace std;
struct EMP {
	string nombre;
	string sexo;
	float sueldo;
};

int main (){
	EMP EMPLEADO [500];
	int n;
	cout<<"Indique numero de empleados de DataTech: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\tEmpleado "<<i+1<<endl;
		cin.ignore();
		cout<<"Nombre: "; getline(cin, EMPLEADO[i].nombre);
		cin.ignore();
		cout<<"Sexo: "; getline(cin, EMPLEADO[i].sexo);
		cout<<"Sueldo: "; cin>>EMPLEADO[i].sueldo;
	}
	
	
	return 0;
}
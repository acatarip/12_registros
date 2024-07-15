#include <iostream>
#include <string>
using namespace std;
struct EMP {
	string nombre;
	string sexo;
	float sueldo;
};

int main (){
	EMP EMPLEADO1 [500];
	int n;
	cout<<"Indique numero de empleados de DataTech: "; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\n\tEmpleado "<<i+1<<endl;
		cin.ignore();
		cout<<"Nombre: "; getline(cin, EMPLEADO1[i].nombre);
		cout<<"Sexo: "; getline(cin, EMPLEADO1[i].sexo);
		cout<<"Sueldo: "; cin>>EMPLEADO1[i].sueldo;
	}
	
	float smay=EMPLEADO1[0].sueldo;
	float smen = EMPLEADO1[0].sueldo;
	int a, b;
	for (int j=0; j<n; j++){
		if (smay < EMPLEADO1[j].sueldo){
			smay = EMPLEADO1[j].sueldo;
			a = j;
		}
		if (smen > EMPLEADO1[j].sueldo){
			smen = EMPLEADO1[j].sueldo;
			b = j;
		}
	}
	cout<<"---------------------------------";
	cout<<"\n\tEmpleado con mayor salario";
	cout<<"\nNombre: "<<EMPLEADO1[a].nombre;
	cout<<"\nSexo: "<<EMPLEADO1[a].sexo;
	cout<<"\nSueldo: "<<EMPLEADO1[a].sueldo;
	cout<<"\n---------------------------------";
	cout<<"\n\tEmpleado con menor salario";
	cout<<"\nNombre: "<<EMPLEADO1[b].nombre;
	cout<<"\nSexo: "<<EMPLEADO1[b].sexo;
	cout<<"\nSueldo: "<<EMPLEADO1[b].sueldo;
	return 0;
}
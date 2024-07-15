#include <iostream>
#include <string>
using namespace std;
struct FECHANAC {
	string nombre;
	int dia;
	int mes;
	int anio;
};

int main (){
	int n;
	cout<<"Ingrese numero de personas: "; cin>>n;
	FECHANAC persona[n];
	for(int i=0; i<n; i++){
		cout<<"\n\tPersona "<<i+1<<endl;
		cin.ignore();
		cout<<"Nombre completo: "; getline(cin, persona[i].nombre);
		cout<<"Dia de nacimiento: "; cin>>persona[i].dia;
		cout<<"Mes de nacimiento (numero): "; cin>>persona[i].mes;
		cout<<"Anio de nacimiento: "; cin>>persona[i].anio;
	}
	return 0;
}
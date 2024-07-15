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
	
	int m;
	do{
		int c=0;
		cout<<"\nIngrese el numero de un mes: "; cin>>m;
		cout<<"\tPersonas que cumplen anios el mes "<<m;
		for(int j=0; j<n; j++){
			if(m==persona[j].mes){
				cout<<"\n\nNombre: "<<persona[j].nombre;
				cout<<"\nDia de naciminto: "<<persona[j].dia;
				cout<<"\nMes de nacimiento: "<<persona[j].mes;
				cout<<"\nAnio de nacimiento: "<<persona[j].anio;
				c++;
			}
		}
		if(c==0){
			cout<<"\nNinguna coincidencia.";
		}
	} while (m!=0 && m<=12);
	
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
struct DATOS{
	string nombre;
	char DNI[50]; 
	int edad;
};

int main(){
	int n;
	cout<<"Ingrese el numero de personas: "; cin>>n;
	DATOS persona[n];
	for(int i=0; i<n; i++){
		int L;
		cout<<"\n\tPersona "<<i+1;
		cin.ignore();
		cout<<"\nIngrese nombre completo: "; getline(cin, persona[i].nombre);
		do {
			cout<<"Ingrese DNI: "; cin>>persona[i].DNI;
			L = strlen(persona[i].DNI);
			if (L!=8){
				cout<<"   Dato invalido.\n";
			}
		} while (L!=8);
		cout<<"Ingrese edad: "; cin>>persona[i].edad;
	}
	
	return 0;
}
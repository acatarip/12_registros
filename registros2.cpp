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
	int c;
	float SE, prom;
	// c - contador de personas mayores de 50 años
	// SE - sumatoria de edades
	for(int j=0; j<n; j++){
		if(persona[j].edad > 50){
			c++;
		}
		SE+=persona[j].edad;
	}
	prom=SE/n;
	cout<<"\nCantidad de personas mayores de 50: "<<c;
	cout<<"\nPromedio de edades: "<<prom;
	
	cout<<"\n-------------------------------";
	cout<<"\n\tDatos registrados"<<endl;
	for(int k=0; k<n; k++){
		cout<<k+1<<".";
		cout<<"\nNombre completo: "<<persona[k].nombre;
		cout<<"\nDNI: "<<persona[k].DNI;
		cout<<"\nEdad: "<<persona[k].edad<<endl;
	}
	return 0;
}
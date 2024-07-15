#include<iostream>
#include<string>
using namespace std;
struct DEPOR{
	string nombre;
	string pais;
	string disciplina;
	int medallas;
};

int main(){
	int n;
	cout<<"Ingrese el numero de atletas: "; cin>>n;
	DEPOR atleta[n];
	for(int i=0; i<n; i++){
		cout<<"\n\tAtleta "<<i+1<<endl;
		cin.ignore();
		cout<<"Nombre: "; getline(cin, atleta[i].nombre);
		cout<<"Pais: "; getline(cin, atleta[i].pais);
		cout<<"Disciplina: "; getline(cin, atleta[i].disciplina);
		cout<<"Cantidad de medallas: "; cin>>atleta[i].medallas;
	}
	
	return 0;
}
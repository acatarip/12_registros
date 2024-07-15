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
		cout<<"Numero de medallas: "; cin>>atleta[i].medallas;
	}
	
	string p;
	int mmay=atleta[0].medallas, a=0;  
	// mmay - maximo de medallas
	cin.ignore();
	cout<<"\nIngrese un pais: "; getline(cin, p);
	cout<<"\n\tLista de atletas de "<<p<<":";
	for(int j=0; j<n; j++){
		if(p == atleta[j].pais){
			cout<<"\nNombre: "<<atleta[j].nombre;
			cout<<"\nPais: "<<atleta[j].pais;
			cout<<"\nDisciplina: "<<atleta[j].disciplina;
			cout<<"\nNumero de medallas: "<<atleta[j].medallas<<endl;	
			if(atleta[j].medallas > mmay){
				mmay= atleta[j].medallas;
				a=j;
			}
		}
	}
	if (a==0){
		cout<<"\nNinguna coincidencia.";
	}
	else{
		cout<<"\nEn "<<p<<" el atleta con mas medallas es "<<atleta[a].nombre;
		cout<<"\nNumero de medallas: "<<atleta[a].medallas;
	}
	return 0;
}
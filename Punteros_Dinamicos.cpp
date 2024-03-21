#include <iostream>
using namespace std;
// punteros con asignacion de memoria dinamica;
// new = reservar espacio en memoria;
// delete [] = liberar la memoria;

main(){
	
	int fil=0, col=0, **pm_notas;
	cout<<"Ingres la cantidad Estudiantes:";
	cin>>fil;
	cout<<"Ingres la cantidad de Notas por estudiante:";
	cin>>col;

	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"__________Estudiante______________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"________________________"<<endl;
	}
	
	cout<<"------- Mostrar Notas --------"<<endl;
	
	for (int i=0;i<fil;i++){
		
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
	cout<<"___________________________________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	/*
	int total = 0,*p_notas;
	p_notas = new int[total];
	char res;

	do{
		cout<<"Ingrese nota "<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor:";
		cin>>res;
	}while(res=='s' || res=='S');
	
cout<<"-----------Mostrar notas-----------"<<endl;
for(int i=0;i<total;i++){
	cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
	p_notas++;
}
delete[] p_notas;
	
	int edad,*p_edad;
	p_edad =&edad;
	cout<<"Ingrese edad:";
	cin>>*p_edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
	*/
	system("pause");
}

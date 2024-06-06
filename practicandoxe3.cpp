/*1.-Imagina que estás trabajando en un proyecto de desarrollo de un sistema de gestión de calificaciones para una escuela.
Necesitas diseñar un programa que permita a los profesores ingresar las calificaciones de los estudiantes para diferentes asignaturas y 
luego calcular estadísticas como el promedio de calificaciones, la calificación más alta y la calificación más baja para cada asignatura.*/
/*
#include<iostream>
#include<cstdlib>
using namespace std;

void pedirDatos();
void mostrarDatos();

int m=0,n=0;
float notas[100][100],promedio[100],s=0,mayor[100],menor[100];
string asignatura[100];

int main(){
	pedirDatos();
	mostrarDatos();
	return 0;
}
void pedirDatos(){
	do{	
		cout<<"Digite la cantidad de alumnos: ";cin>>n;
	}while(n<0);
	do{
		cout<<"\nDigite la cantidad de asignaturas: ";cin>>m;
	}while(m<0);
	for(int k=0;k<m;k++){
		s=0;
		cout<<"\nDigite la asignatura: ";cin>>asignatura[k];
		for(int i=0;i<n;i++){
			do{
				cout<<"\nDigite la nota del "<<i+1<<char(167)<<" alumno: ";cin>>notas[k][i];
			}while(notas[k][i]<0||notas[k][i]>20);
			s=notas[k][i]+s;
		}
		promedio[k]=s/n;
	}
		//calculando 

	for(int k=0;k<m;k++){
		//inicializando mayor[k] y menor[k]
		mayor[k] = notas[k][0];
    	menor[k] = notas[k][0];
    
		for(int i=0;i<n;i++){
			if(notas[k][i]>mayor[k]){
				mayor[k]=notas[k][i];
			}
			if(notas[k][i]<menor[k]){
				menor[k]=notas[k][i];
			}	
		}
	}
	
}
void mostrarDatos(){
	system("cls");
	for(int i=0;i<m;i++){
		cout<<"\n\t\t"<<asignatura[i]<<endl;
		cout<<"Promedio: "<<promedio[i]<<endl;
		cout<<"Calificacion mas alta: "<<mayor[i]<<endl;
		cout<<"Calificacion mas baja: "<<menor[i]<<endl;
	}
		
}
*/
/*2.-Imagina que estás desarrollando un sistema de reserva de asientos para una sala de cine. El cine tiene una sala con un cierto número de filas y 
columnas de asientos, y los clientes pueden reservar asientos para películas específicas.Tu tarea es diseñar un programa que permita a los clientes
seleccionar y reservar asientos para una película en particular. Para lograr esto, necesitas representar el estado de los asientos en la sala de cine 
utilizando una matriz, donde cada celda represente un asiento y su estado (ya sea reservado o disponible).El programa debe permitir a los clientes ver
el mapa de asientos y seleccionar asientos disponibles para reservar. Además, debe garantizar que dos clientes no puedan reservar el mismo asiento 
simultáneamente y mantener un registro de todas las reservas realizadas.Una vez que un cliente ha realizado una reserva, el programa debe actualizar 
la matriz de asientos para reflejar el nuevo estado de los asientos y confirmar la reserva al cliente.*/
/*
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
	int x[13][18]={ {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
					{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
	int s=0,f=0,c=0;
	do{
		f=0;
		c=0;
		
		cout<<"\n\t\t::::ASIENTOS DISPONIBLES::::";
		cout<<setfill(' ')<<setw(55)<<" "<<endl;
		cout <<"      ";
		for (int i = 0; i < 18; i++) {
        	cout<<setw(3)<<i;
    	}
    	cout<<" [C]"<<endl;
    	cout<<"      "<<setfill('_')<<setw(55)<<" "<<endl;
    	cout<<endl;
		for(int i=0;i<13;i++){
			cout<<setfill(' ')<<setw(2)<<i<<"   |";
			for(int k=0;k<18;k++){
				cout<<setw(3)<<x[i][k];
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<"[F]"<<"    "<<setfill(char(219))<<setw(55)<<" "<<" <=PANTALLA"<<endl;
		cout<<"\n [0].ASIENTOS DISPONIBLES";
		cout<<"\n [1].ASIENTOS NO DISPONIBLES"<<endl;
		
		cout<<"\n\t\t::::DIGITE QUE ASIENTO QUIERE RESERVAR::::"<<endl;
		do{
			cout<<"\nDigite el numero de fila[F] : ";cin>>f;
		}while(f<0||f>12);
		do{
			cout<<"\nDigite el numero de columna[C]: ";cin>>c;
		}while(c<0||c>17);
		if(x[f][c]==0){
			x[f][c]=1;
			s++;
			cout<<"ASIENTO ["<<f<<"]["<<c<<"] RESERVADO CORRECTAMENTE"<<endl;
		}
		else{
			cout<<"ERROR,asiento no disponible"<<endl;
		}
		
	}while(s!=234);
	cout<<"ASIENTOS LLENOS :v";
return 0;
}
*/
//3.-Digite un vector y almacena en otro los multiplos de 3 :v e imprime en orden ascendente y descendente
/*
#include<iostream>
using namespace std;
int main(){
	int x[100],n=0,o=0,y[100],aux;
	cout<<"Digite la cantidad de elementos del vector: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Digite el elemento ["<<i<<"]: ";cin>>x[i];
	}
	cout<<"\n\t\t:::VECTOR INICIAL:::"<<endl;
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	cout<<"\n"<<endl;
	//Buscando los multiplos de 3;
	for(int i=0;i<n;i++){
		if(x[i]%3==0){
			y[o]=x[i];
			o++;
		}
		
	}
	//Ordenaniento burbuja
	for(int i=0;i<o-1;i++){
		for(int j=0;j<o-1;j++){
			if(y[j]>y[j+1]){
				aux=y[j];
				y[j]=y[j+1];
				y[j+1]=aux;
			}
		}

	}
	cout<<"\n\t\t:::VECTOR CON LOS MULTIPLOS DE 3:::"<<endl;
	//Orden ascendente
	for(int i=0;i<o;i++){
		cout<<y[i]<<" ";
	}
	cout<<"\n"<<endl;
	//Orden descendente
	for(int i=o-1;i>=0;i--){
		cout<<y[i]<<" ";
	}
}
*/
/*
//Fibonacci
#include <iostream>
using namespace std;

// Función recursiva para calcular el n-ésimo término de la serie de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return 1;//cambiar a n si quieres que empieze desde 0
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Digite la cantidad de términos para la serie de Fibonacci: ";
    cin >> n;

    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
*/
//FACTORIAL




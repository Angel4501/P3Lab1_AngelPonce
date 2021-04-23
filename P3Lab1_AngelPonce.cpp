#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int opcion=0;
	while(opcion!=4){
		
		cout<<"MENU"<<endl;
		cout<<"1. Ejercicio 1 (Tablero Ajedrez)"<<endl;
		cout<<"2. Ejercicio 2 (Sumatoria)"<<endl;
		cout<<"3. Ejercicio 3 (Raiz Cuadrada)"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int n;
				cout<<"Ingrese un numero N: ";
				cin>>n; 
				while(n<=0){
					cout<<"Por favor ingrese un numero mayor a 0: ";
					cin>>n;
				}
				for(int i=0; i<n; i++){
					for(int j=0; j<n; j++){
						if(i%2==0){
							if(j%2==0){
								cout<<"0";
							}
							else{
								cout<<"1";
							}
						}
						else{
							if(j%2==0){
								cout<<"1";
							}
							else{
								cout<<"0";
							}
						}
					}
					cout<<endl;
				}
				break;
		   }
			case 2:{
				int n,acum=0,sum;
				cout<<"Ingrese un numero N, mayor que 0: ";
				cin>>n;
				while(n<=0){
					cout<<"Por favor ingrese un numero mayor a 0: ";
					cin>>n;
				}
				for(int i=1; i<=n; i++){
					sum=2*i*(i-1);
					acum+=sum;
				}
				cout<<"S("<<n<<") = "<<acum<<endl;
				
				break;
		   }
			case 3:{
				int t;
				double n;
				cout<<"Ingrese un numero 'n' mayor que 0: ";
				cin>>n;
				while(n<=0){
					cout<<"Por favor ingrese un numero mayor a 0: ";
					cin>>n;
				}
				cout<<"Ingrese un numero 't' mayor que 10: ";
				cin>>t; // a mayor sea t, mejor aproximacion
				while(t<=10){
					cout<<"Por favor, ingrese un numero mayor que 10: ";
					cin>>t;
				}
				double max=n,mitad,ayuda=0; //al principio el máximo es el mismo número n que ingresa el usuario
				for(int i=0; i<t; i++){
					mitad=(ayuda+max)/2;
					if(mitad*mitad<n){
						ayuda=mitad;
					}
					else if(mitad*mitad>n){
						max=mitad;
						//ayuda=0;
					}
				}
				cout<<"Raiz cuadrada: "<<mitad<<endl;
				break;
			}	
			case 4:
				break;
			default:
				cout<<"Opcion no valida, ingresela nuevamente"<<endl;
				break;				
		}//Fin del switch
		
	}//Fin del while que contiene al menu
	
	
	
	
	
	return 0;
	
	
}

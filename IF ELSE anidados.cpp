
#include<iostream>
using namespace std;

int main(){
	
	
	int edad;
	int dinero;
	
	cout<<"Ingrese su edad para el parque:";
	cin>>edad;
	cout<<"Ingrese cuanto dinero tiene  para el parque:";
	cin>>dinero;
	
	if(edad>18){
		
		if(dinero>0){
			
			cout<<"no puede pasar al parque ";
		}	else{
			
			cout<<"No tienes dinero para pasar";
		}
		
	
	}else{
				cout<<"no cumple con la edad";
			}
		
		// Finalizo el codigo
	
	
	
	
	return 0;
}

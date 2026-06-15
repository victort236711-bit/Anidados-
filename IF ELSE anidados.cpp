
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
			
			cout<<"puedes pasar al parque de diversion";
		}	else{
			
			cout<<"No tienes dinero para pasar";
		}
		
	
	}else{
				cout<<"no cumple con la edad";
			}
		
		// Finalizo el codigo
	
	
	
	
	return 0;
}

/*

2) Realice un programa que cree un archivo .txt (si no existe todavía), con el nombre
“registroVeterinaria”. Y permita ingresar: Nombre del dueño del animal, Nombre de la
mascota, tipo de mascota y diagnóstico. 

*/
#include <iostream>
#include <fstream>  
#include <string>   

using namespace std;

int main() {
  
    ofstream archivoSalida;
    
    
    archivoSalida.open("registroVeterinaria.txt", ios::app);
    
    
    string dueno, mascota, tipo, diagnostico;
    
    cout << "Registrar mascota" << endl;
    
    cout << "Nombre del dueno: ";
    getline(cin, dueno);
    
    cout << "Nombre de la mascota: ";
    getline(cin, mascota);
    
    cout << "Tipo de animal: ";
    getline(cin, tipo);
    
    cout << "Diagnostico: ";
    getline(cin, diagnostico);
    
   
    archivoSalida << dueno << " - " << mascota << " - " << tipo << " - " << diagnostico << endl;
    
    
    archivoSalida.close();
    
    cout << "\n¡Datos guardados con exito!\n" << endl;
    
    
    
    ifstream archivoLectura;
    
   
    archivoLectura.open("registroVeterinaria.txt", ios::in);
    
    
    string linea;
    
    cout << " LISTA DE MASCOTAS EN EL ARCHIVO " << endl;
    
    
    while (getline(archivoLectura, linea)) {
        cout << linea << endl; 
    }
    
   
    archivoLectura.close();
    
    return 0;
}
		
		
		


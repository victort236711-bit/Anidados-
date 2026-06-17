#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void gotoxy(int x, int y) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main() {
    string nombre = "victor tovar "; 
    int anchoConsola = 80;
    int altoConsola = 12; 
    
   
    int posX = (anchoConsola - nombre.length()) / 2;
    
    system("cls");
    gotoxy(posX, altoConsola);
    cout << nombre << endl;
    
    
    gotoxy(0, 20); 
    system("pause");
    return 0;
}

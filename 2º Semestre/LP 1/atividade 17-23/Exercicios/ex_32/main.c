#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ctype.h>

using namespace std;

int main(){
    char data[10];
    int day, month, year;
    int i, j= 0, itsnumber = 0;
    int date[11];
     cout << "Informe a data: ";
     cin >> data;
     if ( (data[2] == '/') && (data[5] == '/') ){
        cout << "As barras estao posicionadas corretamente." << endl;
        for (i=0; i<10; i++){
        isdigit(data[i]);
        itsnumber++;
        }
        for (i=0; i<10; i++){
            date[i] =atoi(data);
        }
        cout << "CONVERSAO "<< date[3];
        if (itsnumber >= 8){
        cout << " Data informada corretamente." << endl;
            day = date[0] ;
            month = date[3] << date[4];
            year = date[6] << date[7] << date[8] << date[9];
            cout << " DATA INFORMADA: " << day << "/" << month << "/" <<year<< endl;
        }
     }
        else {
        cout << "As barras nao estao posicionadas corretamente." <<endl;
        cout << "A Data informada nao e valida." << endl;
     }
}

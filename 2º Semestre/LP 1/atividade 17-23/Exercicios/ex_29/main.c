#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main (){
    char str1[100], str2[100], nova;
    int N;
    cout << "Informe a primeira frase: "<<endl;
    cin.getline(str1,100);
    cout << "Informe a segunda frase: "<<endl;
    cin.getline(str2,100);
    cout <<"Informe a quantidade de caracteres a serem copiados: "<<endl;
    cin >> N;
    cout << "A SUA NOVA STRING E: "<< strncpy(str1,str2,N) << endl;
}

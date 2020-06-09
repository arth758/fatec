#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main (){
    int tamf = 101, tamw =11;
    char frase[tamf];
    char word[tamw];
    int i, j, k, contar = 0, teste[strlen(word)];
    int aux;
    bool ok;

    cout << "Insira uma frase: " << endl;
    cin.getline(frase,101);

    cout << "Insira qual palavra deve ser contada: " << endl;
    cin >> word;


    if( strlen(word) > strlen(frase) ){
        return false;
    }

    for(int i=0; i <= strlen(frase) - strlen(word); i++){
        if(frase[i]==word[0]){

            for(int k=0;k<strlen(word);k++)
                teste[k]=0;

            aux=i;
            for(int j=0;j<strlen(word);j++){
                if(word[j]==frase[aux]){
                    teste[j]=1;
                    aux++;
                }
            }

            ok=true;
            for(int m=0;m<strlen(word);m++){
                if(teste[m]==0){
                    ok=false;
                }
            }

            if( ok ){
                contar++;
            }
        }
    }

    cout << "apareceu " << contar << " vezes" << endl;
 */
}

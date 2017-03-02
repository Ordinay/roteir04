#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	srand(time(NULL));
	int aleatorio, palpite=0;

	aleatorio = rand()%100;
	//cout<<aleatorio<<endl;
	while(palpite!=aleatorio){
		cout << "Digite um Numero" << endl;
		cin >> palpite;

		if(palpite>aleatorio){
			cout<<"Numero Muito Alto" << endl;

		}
		if(palpite<aleatorio){
			cout << "Numero Muito Baixo" << endl;
		}

	}
	cout << "Voce Acertou HuHu !!! " << endl ;

	return 0;
}

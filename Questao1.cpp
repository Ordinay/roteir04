#include <iostream>

using namespace std;

int main() {

	int maior;
	int atual=1;
	int aux;

	cout<<"Digite um numero: "<< endl;
	cin>>maior;

	while(atual!=0){
		cout<<"Digite um numero: "<< endl;
		cin>>atual;
		
		aux = atual;
		if(atual==0){
			cout<<"O maior numero digitado foi:"<< maior << endl;
			cout<<"PROGRAMA ENCERRADO "<< endl;
			return 0;
		}
		if (aux>maior){
			maior = aux;
		}else{
			maior = maior;
		}


	}




	return 0;
}
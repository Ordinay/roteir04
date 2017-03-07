#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void){
	srand(time(NULL));

	int aleatorio, giros, i=0, face1=0, face2=0, face3=0, face4=0, face5=0, face6=0;

	

	cout << "Quantas Vezes Deseja Girar o Dado?" << endl;

	cin >> giros ;
	//cout << giros << endl;

	for( i = 0 ; i < giros ; i++){
		
		aleatorio = ( rand() % 6) + 1;
		
		//cout << "O numero Gerador foi " << aleatorio << endl;
		
		if( aleatorio == 1){
			face1++;
		}
		if( aleatorio == 2){
			face2++;
		}
		if ( aleatorio == 3){
			face3++;
		}
		if ( aleatorio == 4){
			face4++;

		}
		if( aleatorio == 5){
			face5++;
		}
		if ( aleatorio == 6){
			face6++;
		}

	}

	cout << "O Numero 1 Surgiu : " << face1 << "\nO Numero 2 Surgiu : " << face2 << "\nO Numero 3 Surgiu : " << face3 << "\nO Numero 4 Surgiu : " << face4 << "\nO Numero 5 Surgiu : " << face5 << "\nO numero 6 Surgiu : " << face6 << endl; 


	

	return 0;

}
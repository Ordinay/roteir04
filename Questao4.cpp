#include <iostream>
#include <stdlib.h>

using namespace std;

struct  jogador{
	
	int voto;
};

jogador jogadores[24];

int main(void){

	int num, TotalVotos=0, i=1, MaisVotado, Jogador, b=1;

	while(1){

		cout << "\nDigite um Numero Correspondente a Camisa do Jogador para adicionar Um voto ou 0 para Encerrar." << endl;
	
		cin >> num;

		if(num == 0){

			cout << "\nPrograma Encerrado" << endl;

			cout << "\nForam Computados um Total de  " << TotalVotos << " Votos ." << endl;

			cout << "Jogador  " << "Votos  " << "  %" << endl;
			
			for(i=1 ; i<=23 ; i++){
				
				if(jogadores[i].voto >> 0){
					
					cout << "     " <<  i  << "      " << jogadores[i].voto << "       " << (((float) jogadores[i].voto / TotalVotos)*100) << "%" << endl;
				
				}

			}

			MaisVotado = jogadores[1].voto;

			for (b=1 ; b<=23 ; b++){

				if(jogadores[b].voto > MaisVotado){

					MaisVotado = jogadores[b].voto;

					Jogador = b;
				}

			}

//			cout << MaisVotado << "  Valor de b :" << b << "Numero do jogador :" << Jogador << endl;

			cout << "\nO Jogador mais votado foi o " << Jogador << "com " << MaisVotado << "Votos " << "Correspondente a " << (((float) jogadores[Jogador].voto / TotalVotos)*100) << "%" <<" dos votos" << endl; 

			return 0;
		}

		if(num > 23 || num <= 0){

            cout << "\nDigite um Numero Valido" << endl;
		}

		if( num>=1 & num <= 23){

			TotalVotos++;

			jogadores[num].voto++;

			//cout <<"\n O jogador  Numero " << num << "Ja obteve " << jogadores[num].voto << "Votos. " << endl;
		}
	}

	return 0;

}

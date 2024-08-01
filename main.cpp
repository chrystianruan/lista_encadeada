#include <iostream>
#include <string>
#include "vetor.h" //Classe Vetor. Obrigatório

//adicionar demais arquivos .h/.cpp aqui.
#include "funcoes.cpp" //Funções adicionais. Opcional

using namespace std;

/* Código exemplo. 
 * O "main()" deve compilar/executar tal como está escrito.
 */
int main() {
	try{
		cout<<"---------Teste FLOAT ---------"<<endl;		
		cout<<"---Caso 1: Vetor vazio---"<<endl;
		Vetor<float> f;
		f.show();

		cout<<endl<<"---Caso 2: Adicionar 3 elementos---"<<endl;
		f.add(1.1);
		f.add(10.2);
		f.add(3.3); //adiciona "21" no final do Vetor
		f.show();

		cout<<endl<<"---Caso 3: Ordenando 3 elementos---"<<endl;
		// f.sort( (*comparar_int) );
		f.show();
	
		cout<<endl<<"---Caso 4: Removento elemento da posição 2---"<<endl;
		if (f.remove(2) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		f.show();
		
		cout<<endl<<"---Caso 5: Removento elemento da posição 0---"<<endl;
		if (f.remove(0) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		f.show();
		
		cout<<endl<<"---Caso 6: Removento elemento da posição 0---"<<endl;		
		cout << endl << "elemento:" << f.at(0);
		if (f.remove(0) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		f.show();		

		cout<<"---------FIM Teste FLOAT ---------"<<endl<<endl<<endl;


		cout<<"---------Teste STRINGS ---------"<<endl;
		cout<<"---Caso 1: Vetor vazio---"<<endl;
		Vetor<string> s;
		s.show();

		cout<<endl<<"---Caso 2: Adicionar 4 elementos---"<<endl;
		s.add(string("a")); //adiciona "1" no final do Vetor
		s.add(string("d")); //adiciona "3" no final do Vetor
		s.add(string("b")); //adiciona "1" no final do Vetor
		s.add(string("c")); //adiciona "3" no final do Vetor
		s.show();
		
		cout<<endl<<"---Caso 3: Ordenando 4 elementos---"<<endl;
		// s.sort( (*comparar_string) );
		s.show();
		
		cout<<endl<<"---Caso 4: Removento elemento da posição 2---"<<endl;
		if (s.remove(2) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		s.show();

		cout<<endl<<"---Caso 5: Removento elemento da posição 0---"<<endl;		
		if (s.remove(0) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		s.show();
		
		cout<<endl<<"---Caso 6: Removento elemento da posição 1---"<<endl;		
		if (s.remove(1) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		s.show();
		
		cout<<endl<<"---Caso 7: Removento elemento da posição 0---"<<endl;		
		if (s.remove(0) ==true) cout<<"Removido"; else cout<<" Não Removido";
		cout << endl;
		s.show();	
		
		cout<<"---------FIM Teste STRINGS ---------"<<endl;
				
		return 0;
	}catch(const char* msg){
		cout << msg << endl;
	}
	catch (...){
		cout << "Erro Qualquer - Encontrar qual é!" << endl;
	}
	return 0;
	
}

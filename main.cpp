#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double compras, ticketmedio, atraso, pagamento, score, pontos;
	
	cout <<endl<< "SISTEMA DE PERFIL DE CLIENTE" << endl;
	cout << "--------------------------------" << endl;
	cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl<<endl;
	
	cout << "Quantas compras o cliente fez no ultimo ano? "; 
	cin >> compras;
	cout <<endl<< "Qual o ticket médio? ";
	cin >> ticketmedio;
	cout << endl;
	cout <<endl<< "Quantas vezes o cliente atrasou o pagamento?";
	cin >> atraso;
	cout <<endl<< "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)?";
	cin >> pagamento;
	
	if (score == 0){
		pontos = 0;
	}
	if (score < 3000){
		pontos = 20;
	}
	if (score == 3000)
        pontos = 40;
    if(score > 3000){
    	pontos = 60;
	}    
	
	cout <<endl<<endl<< "Score de volume de compras = "	<< pontos << " pontos" << endl;	
	return 0;
}

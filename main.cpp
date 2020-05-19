#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double compras, ticketmedio, atraso, pagamento;
	
	cout <<endl<< "SISTEMA DE PERFIL DE CLIENTE" << endl;
	cout << "--------------------------------" << endl;
	cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl<<endl;
	
	cout << "Quantas compras o cliente fez no ultimo ano? "; 
	cin >> compras;
	cout << "Qual o ticket médio? ";
	cin >> ticketmedio;
	
	cout <<endl<< "Quantas vezes o cliente atrasou o pagamento?";
	cin >> atraso;
	cout << "A maioria das compras foi em dinheiro, cartão, ou boleto (D/C/B)?";
	cin >> pagamento;
	
	return 0;
}

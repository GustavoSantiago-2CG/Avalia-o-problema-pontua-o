#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double compras, ticketmedio, atraso, score, pontos1, pontos2, pontos3;
	string pagamento, B, C, D;
	
	
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
		pontos1 = 0;
	}
	
	if (score <= 3000 && compras <= 2){
		pontos1 = 20;
	}
	
	if (score == 3000 && compras >= 2){
        pontos1 = 40;
    }
    
	else{
    	pontos1 = 60;
	}    
	
	cout <<endl<<endl<< "Score de volume de compras = "	<< pontos1 << " pontos" << endl;	
	
	if (atraso > 1 || compras == 0);{
	     pontos2 = 0;
		 }
	if (compras >= 1 && atraso == 1){
		pontos2 = 15;
	} 
	if (compras >= 1 && atraso == 0){
		pontos2 = 30; 
	}    
         	
	cout << "Score de inadimplencia = "	<< 	pontos2 << " pontos" << endl;												
	
	if (pagamento == "D" && compras > 0){
		pontos3 = 5; 
	}
	if (pagamento == "C" || pagamento == "B" && compras > 0){
		pontos3 = 10; 
	}
	
	cout << "Score de forma de pagamento = "<< 	pontos3 << " pontos" << endl;
	
	
	
	
	return 0;
}

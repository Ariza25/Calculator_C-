#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "");
	
	float num1, num2, resultado, porcentagem;
	int opcao;
	
	cout << "Escolha uma op��o:\n";
	cout << "1. Soma\n";
	cout << "2. Subtra��o\n"; 
	cout << "3. Multiplica��o\n";
	cout << "4. Divis�o\n";
	cout << "5. porcentagem\n"; 
	cout << "Op��o escolhida: ";
	
	cin >> opcao;	
	
	switch(opcao){
		case 1:
			cout <<"\nDigite o primeiro n�mero:";
			cin >> num1;
			cout <<"\nDigite o segundo n�mero:";
			cin >> num2;
			resultado = num1 + num2;
			cout << "\nO Resultado da soma �: " << resultado;
			break;
			
		case 2:
			cout <<"\nDigite o primeiro n�mero:";
			cin >> num1;
			cout <<"\nDigite o segundo n�mero:";
			cin >> num2;
			resultado = num1 - num2;
			cout << "\nO Resultado da subtra��o �: " << resultado;
			break;
			
		case 3:
			cout <<"\nDigite o primeiro n�mero:";
			cin >> num1;
			cout <<"\nDigite o segundo n�mero:";
			cin >> num2;
			resultado = num1 * num2;
			cout << "\nO Resultado da multiplica��o �: " << resultado;
			break;
			
		case 4:
			cout <<"\nDigite o primeiro n�mero:";
			cin >> num1;
			cout <<"\nDigite o segundo n�mero:";
			cin >> num2;
			resultado = num1 / num2;
			cout << "\nO Resultado da divis�o �: " << resultado;
			break;
			
		case 5:
			cout <<"\nDigite o primeiro n�mero:";
			cin >> num1;
			cout <<"\nDigite a porcentagem:";
			cin >> porcentagem;
			resultado = num1 * (porcentagem/100);
			cout << "\n" << porcentagem << "% de " << num1 << " � igual a: " << resultado;
			break;
			
		default:
			cout <<"\nOp��o inv�lida!";
			break;
	}
	
	return 0;
}





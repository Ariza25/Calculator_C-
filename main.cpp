#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "");
	
	float num1, num2, resultado, porcentagem;
	int opcao;
	
	cout << "Escolha uma opção:\n";
	cout << "1. Soma\n";
	cout << "2. Subtração\n"; 
	cout << "3. Multiplicação\n";
	cout << "4. Divisão\n";
	cout << "5. porcentagem\n"; 
	cout << "Opção escolhida: ";
	
	cin >> opcao;	
	
	switch(opcao){
		case 1:
			cout <<"\nDigite o primeiro número:";
			cin >> num1;
			cout <<"\nDigite o segundo número:";
			cin >> num2;
			resultado = num1 + num2;
			cout << "\nO Resultado da soma é: " << resultado;
			break;
			
		case 2:
			cout <<"\nDigite o primeiro número:";
			cin >> num1;
			cout <<"\nDigite o segundo número:";
			cin >> num2;
			resultado = num1 - num2;
			cout << "\nO Resultado da subtração é: " << resultado;
			break;
			
		case 3:
			cout <<"\nDigite o primeiro número:";
			cin >> num1;
			cout <<"\nDigite o segundo número:";
			cin >> num2;
			resultado = num1 * num2;
			cout << "\nO Resultado da multiplicação é: " << resultado;
			break;
			
		case 4:
			cout <<"\nDigite o primeiro número:";
			cin >> num1;
			cout <<"\nDigite o segundo número:";
			cin >> num2;
			resultado = num1 / num2;
			cout << "\nO Resultado da divisão é: " << resultado;
			break;
			
		case 5:
			cout <<"\nDigite o primeiro número:";
			cin >> num1;
			cout <<"\nDigite a porcentagem:";
			cin >> porcentagem;
			resultado = num1 * (porcentagem/100);
			cout << "\n" << porcentagem << "% de " << num1 << " é igual a: " << resultado;
			break;
			
		default:
			cout <<"\nOpção inválida!";
			break;
	}
	
	return 0;
}





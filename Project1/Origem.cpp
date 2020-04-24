#include<iostream>

using namespace::std;

void validarNumero(int vetor[6], int valorUsuario, int tamanho);
void procurarIndice(int vetor[6], int num1, int num2, int valorProcurado);
void imprimirVetor(int vetor[6], int tamanho, int i);
void corpoCodigo(int vetor[6], int tamanho);


int main() {
	int vetor [] = {7,6,3,1,0,5};

	corpoCodigo(vetor, 6);


	system("Pause");
	return 0;
}


void validarNumero(int vetor [6], int valorUsuario, int tamanho) {
	int num1 = tamanho - 1;
	int num2 = num1 - 1;
	if (valorUsuario <= ((tamanho - 1) + tamanho-2) && valorUsuario >= 1){
		procurarIndice(vetor, num1, num2, valorUsuario);
	}
	else {
		system("CLS");
		cout << "Digite numero valido entre 1 e 9: " << "\n";
		corpoCodigo(vetor, 6);
	}
}

void procurarIndice(int vetor[6], int num1, int num2,int valorProcurado) {
	if ((num1 + num2) == valorProcurado){
		cout << "O soma dos indices do numeros " << vetor[num1] << " + " << vetor[num2] << " e igual a " << valorProcurado << "\n";
	}
	else {
		num2 = num2 - 1;
		if (num2 < 0) {
			num1 = num1 - 1;
			num2 = num1 - 2;
		}
		procurarIndice(vetor, num1, num2, valorProcurado);
		
	}
}

void imprimirVetor(int vetor[6], int tamanho, int i) {
	if (i < tamanho){
		cout << vetor[i];
		i++;
	}if (i < tamanho){
		imprimirVetor(vetor, tamanho, i);
	}
}

void corpoCodigo(int vetor[6], int tamanho) {
	int numUsuario;
	cout << "Digite um numero: ";
	cin >> numUsuario;
	imprimirVetor(vetor, tamanho, 0);
	cout << "\n";
	validarNumero(vetor, numUsuario, 6);
}

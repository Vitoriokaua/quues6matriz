/*Leia uma matriz de ordem n, informada pelo usuário. 
Calcule a soma dos elementos que estão abaixo da diagonal principal.*/

#include <iostream>
using namespace std;

void ler_matriz(int m[][20], int n) {
	cout << "informe os numeros: ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Elemento [" << i << "][" << j << "]: ";
			cin >> m[i][j];

		}
	}

}

int somar_diagoonal(int m[][20], int n) {
	int soma = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			soma += m[i][j];
		}
	return soma;
}

int main() {
	int n;

	cout << "informe a dordem da matriz: ";
	cin >> n;
	int matriz[20][20];

	ler_matriz(matriz, n);

	int soma = somar_diagoonal(matriz, n);

	cout << "A soma dos elementos que estao abaixo da diagonal  principal é: " << soma << endl;




	return 0;
}
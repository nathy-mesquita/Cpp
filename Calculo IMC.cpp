/*Olá, Esse código tem a função de informar o Índice de Massa Corporal (IMC) de acordo com sua faixa de idade, gênero e suas caracteristicas físicas(peso e altura). Além disso informa a classificação adequada para cada caso em específico (adolescente, adulto e idoso)

A entrada deve ter a aparência mostrada abaixo:


1: - Idade
2: - Sexo [F / f] <para feminino> ou [M / m]<para masculino>
3: - Peso <em quilogramas - Kg>
4: - Altura <em centímetros - cm> (Ex:1.60)


The entry should have an impression shown below:

1: - Age
2: - Sex [F / f] <for female> or [M / m] <for male>
3: - Weight <in kilograms - kg>
4: - Height <in centimeters - cm>

Developed by: @NathalyMesquita &&  @JuanCalheiros


OBS: Para crianças a com idade igual ou menor que 10 anos, esse cálculo não se enquadra.
Parâmetros adotados pela OMS(Organização Mundial de Saúde).

*/

#include<bits/stdc++.h>
using namespace std;
void adolescente(int i, float p, float a, char s) {
	float imc01 = 0;

	imc01 = (p / (pow(a, 2))); // (p*p)
	if (tolower(s) == 'f') {
		if (i == 10) {
			if (imc01<14.23)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<20.19) && (imc01 >= 14.23))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 20.19)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 11) {
			if (imc01<14.60)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<21.18) && (imc01 >= 14.60))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 21.18)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 12) {
			if (imc01<14.98)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01 > 14.98) && (imc01 <= 22.17))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 22.17)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 13) {
			if (imc01<15.36)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<23.08) && (imc01 >= 15.36))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 23.08)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 14) {
			if (imc01<15.67)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<23.88) && (imc01 >= 15.67))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 23.88)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 15) {
			if (imc01<16.01)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<24.29) && (imc01 >= 16.01))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 24.29)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 16) {
			if (imc01<16.37)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<24.74) && (imc01 >= 16.37))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 24.74)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 17) {
			if (imc01<16.59)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<25.23) && (imc01 >= 16.59))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 25.23)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 18) {
			if (imc01<16.71)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<25.56) && (imc01 >= 16.71))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 25.56)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 19) {
			if (imc01<16.87)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<25.85) && (imc01 >= 16.87))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 25.85)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
	}
	else {
		if (i == 10) {
			if (imc01<14.42)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<19.60) && (imc01 >= 14.42))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 19.60)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 11) {
			if (imc01<14.83)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<20.35) && (imc01 >= 14.83))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 20.35)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 12) {
			if (imc01<15.24)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<21.12) && (imc01 >= 15.24))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 21.12)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 13) {
			if (imc01<15.73)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<21.93) && (imc01 >= 15.73))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 21.93)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 14) {
			if (imc01<16.18)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<22.77) && (imc01 >= 16.18))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 22.77)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 15) {
			if (imc01<16.59)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<23.63) && (imc01 >= 16.59))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 23.63)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 16) {
			if (imc01<17.01)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<24.45) && (imc01 >= 17.01))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 24.45)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 17) {
			if (imc01<17.31)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<25.28) && (imc01 >= 17.31))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 25.28)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 18) {
			if (imc01<17.54)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<25.95) && (imc01 >= 17.54))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 25.95)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
		if (i == 19) {
			if (imc01<17.80)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Baixo peso";
			if ((imc01<26.36) && (imc01 >= 17.80))
				cout << "\nDiagnostico: IMC = " << imc01 << " - Adequado ou Eutrofico";
			if (imc01 >= 26.36)
				cout << "\nDiagnostico: IMC = " << imc01 << " - Sobrepeso";
		}
	}
	return;

}
void adulto(int i, float p, float a) {
	float imc02 = 0;
	imc02 = (p / (pow(a, 2)));
	if (imc02 >= 40.00) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Obesidade grau III";
	}
	if ((imc02 >= 35) && (imc02<39.99)) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Obesidade grau II";
	}
	if ((imc02 >= 30) && (imc02<34.99)) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Obesidade grau I";
	}
	if ((imc02 >= 25) && (imc02<29.99)) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Acima do peso";
	}
	if ((imc02 >= 18.5) && (imc02<24.99)) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Peso Normal";
	}
	if ((imc02 >= 17) && (imc02<18.49)) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Abaixo do peso";
	}
	if (imc02<17.00) {
		cout << "\nDiagnostico: IMC = " << imc02 << " - Muito abaixo do peso";
	}

	return;
}
void idoso(int i, float p, float a) {
	float imc03 = 0;
	imc03 = (p / (pow(a, 2)));
	if (imc03 >= 27)
		cout << "\nDiagnostico: IMC = " << imc03 << " - Sobrepeso";

	if ((imc03>22) && (imc03<27))
		cout << "\nDiagnostico: IMC = " << imc03 << " - Adequado ou Eutrofico";

	if (imc03 <= 22)
		cout << "\nDiagnostico: IMC = " << imc03 << " - Baixo peso";

	return;
}
int main()
{
	char sexo;
	int idade;
	float peso, altura;

	cout << "Calculo de IMC \n";
	cout << "Idade : ";
	cin >> idade;
	cout << "\nSexo [M/F] = ";
	cin >> sexo;
	cout << "\nPeso: ";
	cin >> peso;
	cout << "\nAltura (ex:  1.60 cm)";
	cout << "\nAltura: ";
	cin >> altura;

	if (idade>60)
		idoso(idade, peso, altura);
	if ((idade >= 20) && (idade <= 60))
		adulto(idade, peso, altura);
	if ((idade >= 10) && (idade <= 19))
		adolescente(idade, peso, altura, sexo);


	return 0;
}

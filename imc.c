#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "portuguese");
	
	float peso, altura, PesoMuitoBaixo = 16.9, PesoBaixo = 18.4, PesoNormal = 24.9, AcimaDoPeso = 29.9, Obesidade = 34.9;
	
	printf("Use ',' para separar os números, não use '.'\n");
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	float imc = peso / (altura * altura);
	
	if(imc <= PesoMuitoBaixo){
		printf("Voce esta muito abaixo do peso, e seu IMC e: %.2f\n", imc);
	}else if(imc <= PesoBaixo){
		printf("Voce esta abaixo do peso, e seu IMC e: %.2f\n", imc);
	}else if(imc <= PesoNormal){
		printf("Voce esta com o peso normal, e seu IMC e: %.2f\n", imc);
	}else if(imc <= AcimaDoPeso){
		printf("Voce esta acima do peso, e seu IMC e: %.2f\n", imc);
	}else if(imc <= Obesidade){
		printf("Voce esta obeso, e seu IMC e: %.2f\n", imc);
	}else{
		printf("Voce esta com obesidade morbida, e seu IMC e: %.2f\n", imc);
	}

system("pause");
}

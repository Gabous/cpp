//usamos entre aspas pois se encontra no mesmo diretorio da classe conta
#include "Conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: está indicando que a funcao/metodo Sacar pertence a 
//classe Conta e que este código a seguir vai implementar a função sacar.

bool Conta::Sacar(double Valor) {

	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não podera sacar
	if (Saldo < Valor) {
		std::cout << "\nSaldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else {
		//Sen�o ele poderá sacar
		//temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor) {
	Saldo += Valor; // o mesmo que Saldo = Saldo + valor
	std::cout << "\nDeposito de R$" << Valor << "Efetuado com Sucesso!\n";
}

//a função recebe como argumentos para seus parâmetros um Objeto do tipo Casa e um valor double
void Conta::Transferir(Conta& Destino, double Valor) {
	if (Saldo < Valor) {
		std::cout << "\nSaldo Insuficiente!";
	}
	else {
		//Aqui Destino est� com o objeto passado para a fun��o
		//Logo vai chamar o m�todo Depositar desta fun��o
		Destino.Depositar(Valor);
		//Depois de depositar voce deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferencia realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";

	}
}

double Conta::ConsultarSaldo() {
	return Saldo;
}

std::string Conta::GetBanco() {
	return Banco;
}
int Conta::GetAgencia() {
	return Agencia;
}

int Conta::GetNumConta() {
	return NumConta;
}

std::string Conta::GetTitular() {
	return Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco: " << this << "\n";
		
}

void Conta::SetBanco(std::string Banco) {
	//como o compilador vai saber se banco é variavel local ou o atributo da classe conta?
	//uso do ponteiro this->
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia) {
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta) {
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular) {
	this->Titular = Titular;
}

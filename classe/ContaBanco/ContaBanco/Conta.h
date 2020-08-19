#pragma once
#include <iostream>

//este é o arquivo .h onde existem apenas as declaracoes dos atributos e metodos da classe.Aqui nao existem as definicoes,
//implementacoes das funcoes, 

class Conta {
	//indica que o acesso a estes membros só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{ 0.0 };
	//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do codigo da classe Conta
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(Conta& Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};



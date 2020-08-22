#pragma once
#include <iostream>;

//Quando voce nao indica a visibilidade o encapsulamento
//por padrao em uma classe, ele será private
class Pessoa
{
public:
	//Interessante Criar Construtores
	Pessoa() :Nome(""), CPF(0), Matricula(0) {}

	//Agora um construtor com parametros

	Pessoa(std::string Nome, int CPF, int Matricula):Nome
		(Nome), CPF(CPF), Matricula(Matricula){}

	void AcessarSistema();

	std::string GetNome();
	int GetCPF();
	int GetMatricula();
	void SetNome(std::string Nome);
	void SetCPF(int CPF);
	void SetMatricula(int Matricula);
	void MostrarDados();


private:
	std::string Nome;
	int CPF;
	int Matricula;
};


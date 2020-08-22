#include "Pessoa.h"


int main() {




	system("PAUSE");
	return 0;
}

void Pessoa::AcessarSistema()
{
	std::cout << "****Acesso ao sistema concedido *****";
}

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::SetNome(std::string Nome)
{
	Nome = Nome;
}

void Pessoa::SetCPF(int CPF)
{
	CPF = CPF;
}

void Pessoa::SetMatricula(int Matricula)
{
	Matricula = Matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "****DADOS****\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";

}

#include <iostream>
#include<cstring>

struct Data {
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco {

	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};

struct Pessoa {

	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;
};

int main() {

	Pessoa Pessoa01;
	Pessoa01.Nome = "Udemy";
	Pessoa01.DtNascimento.Dia = 01;
	Pessoa01.DtNascimento.Mes = 02;
	Pessoa01.DtNascimento.Ano = 2009;
	Pessoa01.Endereco.Rua = "Rua A";
	Pessoa01.Endereco.Cidade = "São Paulo";
	Pessoa01.Endereco.Pais = "Brasil";
	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	std::cout << "Nome: " << Pessoa01.DtNascimento.Dia << "\n";
	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	std::cout << "Nome: " << Pessoa01.Nome << "\n";
	system("PAUSE");
	return 0;
}
#pragma once
#include "Pessoa.h"

class Aluno: public Pessoa
{
public:

	std::string Curso;
	Aluno(){}
	Aluno(std::string NovoNome, int NovoCPF, int
	 NovaMatricula, std::string NovoCurso) : Pessoa
		(NovoNome, NovoCPF, NovaMatricula), Curso(NovoCurso) {}
	void RealizarProva();
	std::string GetCurso();
	void SetCurso(std::string NovoCurso);
	void MostrarDados();

private:
	std::string Curso;
};


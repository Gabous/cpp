#include <iostream>
#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main() {

	Professor Marcos("Pacheco", 1234556, 321233, "Udemy");  
	Aluno Luke("Skywalker", 8888, 12333, "Jedi");
	Bibliotecario ObiWan("Kenobi", 1111, 22222);

	Marcos.MostrarDados();
	Luke.MostrarDados();
	ObiWan.MostrarDados();

	//Marcos.Nome = "Pacheco";
	//Luke.Nome = "Skywalker";
	//ObiWan.Nome = "Kenobi";

	system("PAUSE");
	return 0;
}
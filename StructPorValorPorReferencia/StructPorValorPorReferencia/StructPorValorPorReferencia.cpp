#include <iostream>
#include <iomanip>

struct Aluno {
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;
} Aluno01 = { 1111, "Fulano", "TI", 4, 990.50 };
//acima ja podemos criar um objeto do tipo desta struct colocando entre } e ;

/*Abaixo s�o prototipos de funcoes que possuem um parametro do tipo struct
Aluno. Ou seja, estats fun��es s�o capazes de receber na chamada das mesmas
argumentos que sejam do tipo struct Aluno*/

void MostrarDados(Aluno Dado);
//Agora criamos uma referencia em Alterar dados...Desta forma Dado n�o ir� mais
//receber uma simples c�pia da Struct. &Dado ser� um novo alias, 
//uma nova forma de manipular a struct Aluno01
void AlterarDados(Aluno &Dado); // podemos retirar struct, pois � como se fosse uma classe
/*Neste caso criamos uma vers�o sobrecarregada da fun��o AlteraDados.
Agora nesta assinatura da fun��o AlteraDados � recebido um parametro do tipo
ponteiro capaz de apontar para uma variavel(objeto) do tipo Struct Aluno
lembre-se: se Dado � um ponteiro ele recebe e pode ter dentro dele um endere�o
de memoria...Logo ao chamar a fun��o AlteraDados nesta vers�o com
ponteiros, deve-se enviar o endere�o do objeto!!!*/
void AlterarDados(Aluno* Dado);
void MostrarDados(Aluno* Dado);

int main() {
//aqui usamos a forma tradicional de instancia/criar uma variavel(objeto)
//do tipo struct
Aluno Aluno01 = { 11111, "Ciclano", "RH", 5, 1230.50 };
//Aluno01 j� e um objeto do tipo struct criado e instanciado a partir do atalho.
//Logo estamos enviando para a fun��o MostrarDados a variavel Aluno01

//Agora criamos via ponteiros um objeto
//Agora este objeto estar� na Heap da RAM
//e a forma de acesso dos membros do objeto n�o ser� mais pela nota��o
//ponto e sim pela nota��o flecha
Aluno* Aluno02 = new Aluno;
Aluno Aluno03; //Criamos outro objetom as Aluno03 n�o � um ponteiro
/*Para chamar a fun��o AlteraDados que modifica este objeto via ponteiros
precisamos enviar o endere�o de mem�ria de Aluno03*/


system("CLS");
std::cout << "\n ANTES DE MODIFICAR OS DADOS\n";
AlterarDados(&Aluno03);

MostrarDados(Aluno01);
AlterarDados(Aluno01);
std::cout << "\n DEPOIS DE MODIFICAR OS DADOS\n"; 
MostrarDados(Aluno01);
std::cout << "\n ANTES DE MODIFICAR OS DADOS\n";
/**/
AlterarDados(Aluno02);
std::cout << "\n DEPOIS DE MODIFICAR OS DADOS\n";
MostrarDados(Aluno02);



system("PAUSE");
return 0;
}

//Entao aluno01 � o argumento que sera colocado no parametro Dado da fun��o 
void MostrarDados(Aluno Dado)
{
	std::cout << "****Dados do Aluno *****\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade: " << "R$" << std::fixed << std::setprecision(2)
		<< Dado.Mensalidade << std::endl;
	std::cout << "***************************\n\n";
}
/*Agora altera pois Dado n�o recebe mais uma copia, um valor de struct Aluno01
Dado agora � uma refer�ncia para quem for enviada para a fun��o AlteraDados.Se
� uma refer�ncia. Dado ser� capaz de alterar a Aluno01, pois � uma refer�ncia
do mesmo*/

//Ou seja Aluno01 passa ser referenciado por Dado
/*� como se tivessemos a senten�a
Aluno &Dado = Aluno01;*/
void AlterarDados(Aluno &Dado)
{
	Dado.Nome = "Beltrano";
	Dado.Curso = "Engenharia";
	Dado.Semestre = 1;
	Dado.Matricula = 22222;
	Dado.Mensalidade = 3223.40;
}

void AlterarDados(Aluno* Dado)
{
	//Desreferenciamento de ponteiros
	//v� at� o local que voce aponta e no campo nome coloque "Teste"
	//(*). pode ser substituido por ->
	Dado->Nome = "Deltrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 2353;
	Dado->Mensalidade = 899.09;

}

void MostrarDados(Aluno* Dado)
{
	std::cout << "****Dados do Aluno *****\n";
	std::cout << "\t Nome: " << Dado->Nome << std::endl;
	std::cout << "\t Curso: " << Dado->Curso << std::endl;
	std::cout << "\t Semestre: " << Dado->Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado->Matricula << std::endl;
	std::cout << "\t Mensalidade: " << "R$" << std::fixed << std::setprecision(2)
		<< Dado->Mensalidade << std::endl;
	std::cout << "***************************\n\n";
}

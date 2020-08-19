// ContaBanco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

//na função main() iremos instanciar objetos
//desta forma ela precisa incluir as delcarações da classe Conta

#include "Conta.h"
#include <iostream>
#include <string>

 int main() {
	 //criamos um objeto ContaCliente01 do tipo Conta
	 //está aocado na stack
	Conta ContaCliente01;
	//criamos um objeto ContaCliente02 do tipo Conta
	//está aocado na stack
	Conta ContaCliente02;
	//os objetos foram criados(instanciados) e colocados na memoria RAM
	//abaixo  o debug mostra esses objetos e os valores atuais dos atributos(variaveis) dele
	
	std::cout << "Endereco Memoria Objeto ContaCliente01" << &ContaCliente01 << "\n";
	std::cout << "Endereco Memoria Objeto ContaCliente02" << &ContaCliente02 << "\n";
	
	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Teste");
	ContaCliente01.Depositar(18293);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Itau");
	ContaCliente02.SetAgencia(233);
	ContaCliente02.SetNumConta(122);
	ContaCliente02.SetTitular("Joao");
	ContaCliente02.Depositar(1500);
	ContaCliente02.Sacar(300);

	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(1000);




	system("PAUSE");
	return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

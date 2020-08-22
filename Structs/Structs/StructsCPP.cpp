#include <iostream>

struct Data {
	//Como não especifiquei o modificador de acesso
	//na struct ele sera por padrao public:
	static int contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	Data() {
		id = contador++;
		std::cout << "\nConstrutor  Data(" << id <<") executado" << "\n";
	}
	~Data() { std::cout << "\nDestrutor  Data() executado" << "\n"; }
};
//desta forma acima voce pode iniciar os valores ao instanciar e usar chaves

int Data::contador = 1;

int main() {
	{
		Data Agenda1;
		//aqui criei um novo ESCOPO pois lembre que entre chabes é um escopo
		//e vai determinar o ciclo de vida das variaveis
		//quando codigo ultrapassar a chave final as variaveis declaradas dentro
		//do escopo serão destruidas
		{
			Data Agenda2;
			//agora esse objeto Agenda3 esta na HEAP e nao sera destruido ao final do escopo
			//ele será destruido se for utilizada a funçao delete
			Data* Agenda3 = new Data;
			delete(Agenda3);
		}

		Data Agenda4;
	}
	system("PAUSE");
	return 0;
}
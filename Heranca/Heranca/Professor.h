#pragma once
#include "Pessoa.h"
class Professor :
    public Pessoa
{
public:
    std::string Departamento;
    Professor(){}
    Professor(std::string NovoNome, int NovoCPF, int NovaMatricula, 
        std::string NovoDepartamento): Pessoa(NovoNome, NovoCPF, NovaMatricula),
         Departamento(NovoDepartamento){}
    
    void EfetuarChamada();
    void EntregarPauta();

    std::string GetDepartamento();
    void SetDepartamento(std::string NovoDepartamento);
    void MostrarDados();

private:
    std::string Departamento;
};


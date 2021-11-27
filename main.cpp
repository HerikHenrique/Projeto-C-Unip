#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

struct paciente
{
    char nome[100];
    char telefone[10];
    string endereco [6];
    float dataDeNascimento;
    char email;
    int senha;

    char inserir(addNome){
        
    }
};

typedef paciente paciente;

string infectado(string resultado1)
    {
        std::string resultado;
        printf("Seu teste de Covid-19 deu Positivo?\n");
        cout << "Digite (S) se sim" <<endl << "Digite (N) se n�o" << endl;
        // scanf("%s", &resultado);
        cin >> resultado;

        std::string key = "s";
        std::string negative = "n";

        int comparator = resultado.compare(key);
        int comparatorNegative = resultado.compare(negative);


        if (resultado.compare(key) && resultado.compare(negative))
        {
            cout << "Argumento Inv�lido\n\n\n\n\n";
            return infectado(resultado);
        } else if (resultado.compare(key)){

            printf("Parab�ns! Continue com as devidas precau��es");
        }else{
            printf("Voc� est� infectado!\n\n\n");
        }
            return resultado;


    };


int main()
{
    paciente p;
    string resultado1;
    // string positivo = "s";
    int *ponteiro;
    setlocale(LC_ALL, "portuguese");

    string resultadoTeste = infectado(resultado1);
    // int checkarResultado = strcmp(positivo, resultadoTeste);
    if ("s" == resultadoTeste)
    {
        printf("Vamos Realizar o seu cadastro\n\n\n");

        // FILE * pFile;
        printf("Digite seu nome completo\n\n\n");

        setbuf(stdin, NULL);
        gets(p.nome);
        printf("Nome: %s\n\n", p.nome);

        puts("Digite seu Telefone: \n");
        gets(p.telefone);
        printf("Telefone: %s", p.telefone);

        
        
        


        
    };

    return 0;
}

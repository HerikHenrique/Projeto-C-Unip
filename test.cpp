#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>
using namespace std;

typedef struct paciente{
    string nome;
    int senha;
    int telefone;
    string endereco [6];
    float dataDeNascimento;
    char email;

};
typedef struct paciente paciente;

int main(){

paciente p;

scanf("%s", &p.nome);
printf("%s\n", p.nome);

return 0;
}
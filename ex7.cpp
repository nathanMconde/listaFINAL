#include <iostream>
using namespace std;

struct dados
{
    char nome[50];
    int cpf;
    int dia;
    int mes;
    int ano;
};

void funcscan(struct dados *p);
void funcimpr(struct dados *ptr);

int main()
{
    dados dados1;
    funcscan(&dados1);
    funcimpr(&dados1);
}

void funcscan(struct dados *p)
{
    cout << "Digite o seu primeiro nome"<<endl;
    cin >> (*p).nome;
    cout << "Digite o seu cpf"<<endl;
    cin >> (*p).cpf;
    cout << "Digite o dia do seu nascimento"<<endl;
    cin >> (*p).dia;
    cout << "Digite o mes"<<endl;
    cin >> (*p).mes;
    cout << "Digite ano"<<endl;
    cin >> (*p).ano;
}

void funcimpr(struct dados *ptr){
    cout<<"Nome: "<<(*ptr).nome<<endl;
    cout<<"CPF: "<<(*ptr).cpf<<endl;
    cout<<"Data:"<<(*ptr).dia<<"/"<<(*ptr).mes<<"/"<<(*ptr).ano;
};





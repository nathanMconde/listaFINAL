#include <iostream>
using namespace std;

void preenche(int *vet, int tam, int n);

int main()
{
    int v;
    preenche(&v, 5, 33);

    return 0;
}

void preenche(int *vet, int tam, int n)
{

    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = n;
    }

    for (int i = 0; i < tam; i++)
    {
        cout <<*(vet + i)<<endl;
    }
}
#include <iostream>
using namespace std;

void preenche(int *vet, int tam, int *n);

int main()
{
    int m[5] = {1,2,3,4,6};
    int v;
    preenche(&v, 5, m);

    return 0;
}

void preenche(int *vet, int tam, int *n)
{
    n[5];

    for (int i = 0; i < tam; i++)
    {
        *(vet + i) = n[i];
    }

    for (int i = 0; i < tam; i++)
    {
        cout <<*(vet + i)<<endl;
    }
}
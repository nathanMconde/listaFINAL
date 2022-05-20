#include <iostream>

using namespace std;

void lerfunc(int *p, int tam);

int main()
{
    int n;
    cout << "Digite um valor para alocar memoria:" << endl;
    cin >> n;

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    lerfunc(ptr, n);

    int i;
    for (i = 1; i <= n; i++)
    {
        cout << "O vetor " << i << " e preenchido com o valor: " << *(ptr + i)<<endl;
    }

    free(ptr);
    return 0;
}

void lerfunc(int *p, int tam)
{
    int i;
    for (i = 1; i <= tam; i++)
    {
        cout << "Digite os valores para serem lidos" << endl;
        cin >> p[i];
    }
}
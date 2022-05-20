#include <iostream>

using namespace std;

int main()
{
    FILE *file = fopen("arq.txt", "w");
    int i = 0;
    char frase[100];

    cout << "Digite os caracteres que deseja armazenar:" << endl;
    cin >> frase;

    while (frase[i] != NULL) //se o usuario digitar espaço ele entra com o caractere 0 que entendo por NULL,
    {                        // então o programa se encerraria com um espaço.
        cout << frase[i];
        i++;
    }
    fprintf(file, "%s", frase);
    fclose(file);

    return 0;
}
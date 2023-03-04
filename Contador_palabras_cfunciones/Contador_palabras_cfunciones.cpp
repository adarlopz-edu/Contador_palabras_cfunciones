#include<iostream>
#include <string>

using namespace std;
int contador(string f, int c) {
    for (int i = 0; i < f.length(); i++) {
        if ((f[i] == ' ' && f[i + 1] != ' ')) {
            c = c + 1;
        }
    }
    return c;
}

int main()
{
    string f = " ";
    int c = 0;
    cout << "Ingrese una frase (maximo 100 caracteres): " << endl;
    getline(cin >> ws, f);
    int p = contador(f, c);

    cout << "Palabras: " << p + 1 << endl;
}
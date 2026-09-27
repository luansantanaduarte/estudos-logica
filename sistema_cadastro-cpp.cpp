#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*SISTEMA DE CADASTRO*/
    int idade;
    string usuario;
    string senha;
    const string USUARIO_VALIDO = "admin";
    const string SENHA_VALIDA = "1234";
    
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    cout << endl << "Digite seu usuário: ";
    cin >> usuario;
    
    cout << endl << "Digite sua senha: ";
    cin >> senha;
    
    bool usuario_ok = (usuario == USUARIO_VALIDO);
    bool senha_ok = (senha == SENHA_VALIDA);
    
    if (usuario_ok && senha_ok) {
        cout << endl << "Acesso liberado.";
    } else {
        cout << endl << "Acesso negado!";
    }
    
    return 0;
}
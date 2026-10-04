#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*SISTEMA DE CADASTRO*/
    /*Declarações das variáveis de cadastro*/
    int idade;
    string usuario;
    string senha;
    const string USUARIO_VALIDO = "admin";
    const string SENHA_VALIDA = "1234";
    const int MAX_TENTATIVAS = 3;
    
    /*Pergunta da IDADE e reserva da idade na variavel IDADE*/
    /* << Operador de impressão da ne tela | >> Operador de reserva em uma variável*/
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    
    int tentativa = 1;
    while (tentativa <= MAX_TENTATIVAS) {
        
        /*Pergunta pelo USUÁRIO e reserva na variável USUÁRIO*/
        /* << Operador de impressão da ne tela PODE SER CONCATENADO COM OUTROS (ANEXANDO O QUE FOI COLOCADO NO FLUXO DE SAÍDA)*/
        cout << endl << "Digite seu usuário: ";
        cin >> usuario;
            
        /*Pergunta pela SENHA e reserva na variável SENHA*/
        cout << endl << "Digite sua senha: ";
        cin >> senha;
        
         if (usuario == USUARIO_VALIDO && senha == SENHA_VALIDA) {
            cout << endl << "Acesso liberado.";
            break;
        } else {
            cout << endl << "-----Acesso negado!-----" << endl << "Restam: " << MAX_TENTATIVAS - tentativa << ((MAX_TENTATIVAS - tentativa == 1) ? " tentativa" : " tentativas") << endl;
            if (tentativa == MAX_TENTATIVAS) {
                cout << "Quantidade de tentativas esgotadas. Tente novamente mais tarde.";
            }
            tentativa ++;
        }
    }
    
    /* RETURN - Utilizado para indicar que não houve erros de execução */
    return 0;
}
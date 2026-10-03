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
    
    
    /*Pergunta da IDADE e reserva da idade na variavel IDADE*/
    /* << Operador de impressão da ne tela | >> Operador de reserva em uma variável*/
    cout << "Digite a sua idade: ";
    cin >> idade;
    
    
    int tentativa = 1;
    while (tentativa <= 3) {
        /*Pergunta pelo USUÁRIO e reserva na variável USUÁRIO*/
        /* << Operador de impressão da ne tela PODE SER CONCATENADO COM OUTROS (ANÁLOGO AO + EM OUTRAS LINGUAGENS)*/
        cout << endl << "Digite seu usuário: ";
        cin >> usuario;
            
        /*Pergunta pela SENHA e reserva na variável SENHA*/
        cout << endl << "Digite sua senha: ";
        cin >> senha;
        
        
        /* Teste se usuário e senha estão corretos */
         /* USO DO FLUXO DE CÓDIGO OU IF/ELSE PARA MANIPULAR O ANDAMENTO DO ALGORITMO */
        bool usuario_ok = (usuario == USUARIO_VALIDO);
        bool senha_ok = (senha == SENHA_VALIDA);
        
         if (usuario == USUARIO_VALIDO && senha == SENHA_VALIDA) {
            cout << endl << "Acesso liberado.";
            break;
        } else {
            cout << endl << "-----Acesso negado!-----" << endl << "Restam: " << 3 - tentativa << " tentativas." << endl;
            tentativa ++;
            continue;
        }
    }
    
    /* RETURN - Utilizado para indicar que não houve erros de execução */
    return 0;
}
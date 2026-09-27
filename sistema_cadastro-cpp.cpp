#include <iostream>
using namespace std;

int main()
{
    int idade = 18;
    string nome = "Ana";
    int senha = 1234;
    
    /*Decisões, ou desbio de fluxo de execução com base em condicionais*/
    /*Primeira estrutura: O if e o else (se, senão)*/
    if (idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }
    
    
    /*else if -> diz respeito a múltiplas condições em sequência*/
    if (idade < 13) {
        cout << "Criança" << endl;
    } else if (idade < 18) {
        cout << "Adolescente" << endl;
    } else if (idade < 60) {
        cout << "Adulto" << endl;
    } else {
        cout << "Idoso" << endl;
    }
    
    /*Operadores lógicos encadeados*/
    bool usuario_ok = (nome == "Ana");
    cout << usuario_ok << " ";
    bool senha_ok = (senha == 1234);
    cout << senha_ok;
    
    /* Eu preciso que a senha e o usuário sejam válidos para permitir o login*/
    if (usuario_ok && senha_ok) {
        cout << endl << "Login autorizado.";
    } else {
        cout << endl << "Login negado!";
    }
    
    /*Outra estrutura de desvio de fluxo é o switch case*/
    int opcao;
    cout << endl << endl << "Escolha uma opção:" << endl << "1 - Cadastrar" << endl << "2 - Login" << endl << "3- Sair" << endl;
    cin >> opcao;
    
    switch (opcao) {
        case 1: 
        cout << endl << "Abrindo cadastro...";
        break;
        
        case 2: 
        cout << endl << "Abrindo Login";
        break;
        
        case 3:
        cout << endl << "Saindo...";
        break;
        
        default:
        cout << "Opção inválida.";
        break;
    }
    
    /*Operador ternário - Utiliza a estrutura do if else, mas em uma única linha*/
    string status = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    cout << endl << status;
    
    return 0;
}
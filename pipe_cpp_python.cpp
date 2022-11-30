// pipe_cpp_python.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //criar mensagem
    ofstream myfile;
    myfile.open("mensagem_cpp");
    myfile << "essa e uma mensagem do c++\n";
    myfile.close();
    std::cout << "mensagen enviada\n";

    //iniciar programa python
    system("python pipe_cpp_python.py");

    //ler mensagem python
    std::cout << "lendo mensagem python\n";
    ifstream f(string("mensagem_python").c_str());
    bool esiste_mensagem_python = false;
    while (!esiste_mensagem_python) {
        esiste_mensagem_python = f.good();
    }

    ifstream mensagem_python("mensagem_python");
    string texto_py;
    while (getline(mensagem_python, texto_py)) {
        // Output the text from the file
        cout << texto_py;
    }
    cout << endl;
    mensagem_python.close();


    //terminar programa
    std::cout << "aperte enter para continuar\n";
    string s;
    cin >> s;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

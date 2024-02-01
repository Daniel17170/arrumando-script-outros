#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Projeto {
    string NomeProjeto;
};

int main() {
    vector<Projeto> listaProjetos;
    int outro;
    int indice;

    do {
        cout << endl;
        cout << "Menu" << endl;
        cout << "1. Voltar ao menu principal" << endl;
        cout << "2. Marcar mais projetos como concluídos" << endl;
        cout << "Escolha uma opção: ";
        cin >> outro;

        while (cin.fail() || (outro != 1 && outro != 2)) {
            cout << "Opção inválida. Escolha novamente: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> outro;
        }

        switch (outro) {
            case 1:
                break;
            case 2:
                cout << "Lista de projetos" << endl;
                for (int i = 0; i < listaProjetos.size(); i++) {
                    cout << i << " " << listaProjetos[i].NomeProjeto << endl;
                }
                cout << "Digite o índice do projeto a ser marcado como completo: ";
                cin >> indice;

                if (indice >= 0 && indice < listaProjetos.size()) {
                    cout << "Projeto marcado como completo: " << listaProjetos[indice].NomeProjeto << endl;
                } else {
                    cout << "Índice inválido!" << endl;
                }
                break;
            default:
                cout << "Opção inválida" << endl;
                break;
        }
    } while (outro != 1);

    return 0;
}

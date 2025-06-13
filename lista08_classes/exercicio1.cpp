#include <iostream>
using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        float altura;
    public:
        Pessoa() {
            setNome("desconhecido");
            setIdade(1);
            setAltura(0.1);
        }
        Pessoa(string nNome, int nIdade, float nAltura) {
            setNome(nNome);
            setIdade(nIdade);
            setAltura(nAltura);
        }
        void preenche() {
            string nome, enter;
            int idade;
            float altura;
            getline(cin, enter);
            cin >> nome;
            setNome(nome);
            cin >> idade;
            setIdade(idade);
            cin >> altura;
            setAltura(altura);
        }
        void exibe() {
            cout << "Nome: " << getNome() << endl;
            cout << "Idade: " << getIdade() << " anos" << endl;
            cout << "Altura: " << getAltura() << " metros" << endl;
        }
        void setNome(string texto) { nome = texto; }
        void setIdade(int numero) { idade = numero; }
        void setAltura(float valor) { altura = valor; }
        string getNome() { return nome; }
        int getIdade() { return idade; }
        float getAltura() { return altura; }
};

void preencheGrupo(Pessoa grupo[], int N) {
    for (int i = 0; i < N; i++) grupo[i].preenche();
}

void exibeGrupo(Pessoa grupo[], int N) {
    for (int i = 0; i < N; i ++) {
        cout << "Dados da pessoa:" << endl;
        grupo[i].exibe();
        cout << endl;
    }
}

int main () {
    int N; cin >> N;
    Pessoa grupo[N];
    preencheGrupo(grupo, N);
    exibeGrupo(grupo, N);
}
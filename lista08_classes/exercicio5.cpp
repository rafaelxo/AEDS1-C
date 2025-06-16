#include <iostream>
#include <iomanip>
using namespace std;

class Elevador {
    private:
        int andarAtual, totalAndares, capacidade, pessoasPresentes;
    public:
        Elevador() { inicializaTudo(1, 1, 1, 1); }
        Elevador (int andar, int total, int capac, int quant) { inicializaTudo(andar, total, capac, quant); }
        void setAndar(int andar) {
            try {
                if (andar >= 0) andarAtual = andar;
                else throw invalid_argument ("Andar invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        void setTotal(int total) {
            try {
                if (total > 0 && total <= 30) totalAndares = total;
                else throw invalid_argument ("Total de andares invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        void setCapacidade(int capac) {
            try {
                if (capac > 0 && capac <= 20) capacidade = capac;
                else throw invalid_argument ("Capacidade de pessoas invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        void setPessoas(int quant) {
            try {
                if (quant > 0) pessoasPresentes = quant;
                else throw invalid_argument ("Quantidade de pessoas presentes invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getAndar() { return andarAtual; }
        int getTotal() { return totalAndares; }
        int getCapacidade() { return capacidade; }
        int getPessoas() { return pessoasPresentes; }
    private:
        void inicializaTudo (int andar, int total, int capac, int quant) {
            setAndar(andar);
            setTotal(total);
            setCapacidade(capac);
            setPessoas(quant);
        }
};

int main () {
    Elevador e[2];
    int capacidade, andares;
    cin >> capacidade >> andares;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string acao;
        cin >> acao;
    }
}
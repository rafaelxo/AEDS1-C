#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Tipo {
    private:
        int codigo;
        float percentual;
    public:
        Tipo () { setCodigo(1); }
        void setCodigo(int num) {
            try {
                if (num == 1) {
                    codigo = 1;
                    setPercentual(10);
                } else if (num == 2) {
                    codigo = 2;
                    setPercentual(20);
                }
                else throw invalid_argument ("Codigo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getCodigo() { return codigo; }
        float getPercentual() { return percentual; }
    private:
        void setPercentual(float val) {
            try {
                if (val >= 0) percentual = val;
                else throw invalid_argument ("Codigo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
};

class Produto {
    private:
        string descricao;
        Tipo tipo;
        float preco, imposto;
    public:
        Produto() {
            setDescricao("nenhum");
            tipo.setCodigo(1);
            setPreco(1);
            setImposto();
        }
        Produto(string d, int n, float p, float i) {
            setDescricao(d);
            tipo.setCodigo(n);
            setPreco(p);
            setImposto();
        }
        void setDescricao(string d) {
            try {
                if (descricao.length() > 5) descricao = d;
                else throw invalid_argument ("Descricao invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        string getDescricao() { return descricao; }
        void setTipo(Tipo t) {
            tipo = t;
            setImposto();
        }
        Tipo getTipo() { return tipo; }
        void setPreco(float p) {
            try {
                if (p > 0) preco = 0;
                else throw invalid_argument ("Preco invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getPreco() { return preco; }
        float getImposto() { return imposto; }
        float calcular() { return preco + preco * imposto; }
    private:
        void setImposto() {
            imposto = preco * tipo.getPercentual();
        }
};

int main () {
    Produto p;
    p.preenche();
    cout << "Preco final do produto: " << p.getFinal << endl;
}

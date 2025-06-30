#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Imovel {
    private:
        string proprietario, quadra;
        int lote, situacao;
        float area, v_venda, v_comissao;
        void inicializa(string prop, string quad, int lot, int sit, float ar, float venda, float comissao) {
            setProprietario(prop);
            setQuadra(quad);
            setLote(lot);
            setSituacao(sit);
            setArea(ar);
            setVenda(venda);
            setComissao(comissao);
        }
    public:
        Imovel() { inicializa("nenhum", "nenhuma", 1, 1, 1, 1, 1); }
        Imovel(string prop, string quad, int lot, int sit, float ar, float venda, float comissao) { inicializa(prop, quad, lot, sit, ar, venda, comissao); }
        void setProprietario(string prop) {
            try {
                if (prop.length() > 2) proprietario = prop;
                else throw invalid_argument("Proprietario invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        string getProprietario() { return proprietario; }
        void setQuadra(string quad) {
            try {
                if (quad.length() > 2) quadra = quad;
                else throw invalid_argument("Proprietario invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        string getQuadra() { return quadra; }
        void setLote(int lot) {
            try {
                if (lot > 0) lote = lot;
                else throw invalid_argument("Lote invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getLote() { return lote; }
        void setSituacao(int sit) {
            try {
                if (sit > 0) situacao = sit;
                else throw invalid_argument("Situacao invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getSituacao() { return situacao; }
        void setArea(float ar) {
            try {
                if (ar > 0) area = ar;
                else throw invalid_argument("Area invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getArea() { return area; }
        void setVenda(float venda) {
            try {
                if (venda > 0) v_venda = venda;
                else throw invalid_argument("Valor de venda invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getVenda() { return v_venda; }
        void setComissao(float comissao) {
            try {
                if (comissao > 0) v_comissao = comissao;
                else throw invalid_argument("Valor de comissao invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getComissao() { return v_comissao; }
        virtual float calcularIptu() {}
};

class Casa : public Imovel {
    private:
        float a_construida;
    public:
        Casa() : Imovel() {
            setAreaConstruida(1);
        }
        Casa(string prop, string quad, int lot, int sit, float ar, float venda, float comissao, float constr, float iptu)
            : Imovel(prop, quad, lot, sit, ar, venda, comissao) {
            setAreaConstruida(constr);
        }
        void setAreaConstruida(float constr) {
            try {
                if (constr < getArea()) a_construida = constr;
                else throw invalid_argument("Area construida invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getAreaConstruida() { return a_construida; }
        float calcularIptu() { return getVenda() * 0.01; }
};

class Terreno : public Imovel {
    public:
        Terreno() : Imovel() {}
        Terreno(string prop, string quad, int lot, int sit, float ar, float venda, float comissao)
            : Imovel(prop, quad, lot, sit, ar, venda, comissao) {}
        float calcularIptu() { return getVenda() * 0.02; }
};

int main() {

}

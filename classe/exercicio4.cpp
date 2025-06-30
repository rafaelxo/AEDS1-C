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

        }
        string getProprietario() { return proprietario; }
        void setQuadra(string quad) {

        }
        string getQuadra() { return quadra; }
        void setLote(int lot) {

        }
        int getLote() { return lote; }
        void setSituacao(int sit) {

        }
        int getSituacao() { return situacao; }
        void setArea(float ar) {

        }
        float getArea() { return area; }
        void setVenda(float venda) {

        }
        float getVenda() { return v_venda; }
        void setComissao(float comissao) {

        }
        float getComissao() { return v_comissao; }
};

int main() {

}

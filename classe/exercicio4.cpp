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
        Imovel() { inicializa("nenhum", "nenhuma", 1, 1, 1, 1, 0); }
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
        Casa(string prop, string quad, int lot, int sit, float ar, float venda, float comissao, float constr)
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
    Casa casas[15];
    Terreno terrenos[15];
    int numCasas = 0, numTerrenos = 0, opcao;
    do {
        cout << endl << "Menu:" << endl << endl;
        cout << "1 - Cadastrar imovel";
        cout << "2 - Alterar situacao";
        cout << "3 - Mostrar somatorio dos valores";
        cout << "4 - Mostrar somatorio das comissoes";
        cout << "0 - Sair" << endl << endl;
        cout << "Insira a opcao desejada: ";
        cin >> opcao;
        switch (opcao) {
        case 1:
            if (numCasas + numTerrenos < 30) {
                int tipo;
                cout << "Tipo de imovel (1 - Terreno, 2 - Casa): "; cin >> tipo;
                string prop, quad;
                int lot, sit;
                float ar, venda, comissao = 0, constr;
                cout << "Proprietario: "; cin >> prop;
                cout << "Quadra: "; cin >> quad;
                cout << "Lote: "; cin >> lot;
                cout << "Area: "; cin >> ar;
                cout << "Valor de venda: "; cin >> venda;
                cout << "Situacao (1 - a venda, 2 - vendido, 3 - em negociacao): "; cin >> sit;
                if (sit == 2) {
                    float percent;
                    cout << "Percentual de comissao (<= 10%): ";
                    cin >> percent;
                    if (percent > 10 || percent < 0) {
                        cout << "Percentual invalido! Deve ser entre 0 e 10%.\n";
                        break;
                    }
                    comissao = venda * (percent / 100);
                }
                else if (sit == 1 || sit == 3) comissao = 0;
                try {
                    if (tipo == 1 && numTerrenos < 15) {
                        Terreno novoTerreno(prop, quad, lot, sit, ar, venda, comissao);
                        terrenos[numTerrenos++] = novoTerreno;
                        cout << "Terreno cadastrado com sucesso!\n";
                    }
                    else if (tipo == 2 && numCasas < 15) {
                        cout << "Area construida: ";
                        cin >> constr;
                        Casa novaCasa(prop, quad, lot, sit, ar, venda, comissao, constr);
                        casas[numCasas++] = novaCasa;
                        cout << "Casa cadastrada com sucesso!\n";
                    }
                    else cout << "Tipo invalido ou limite excedido!\n";
                } catch (exception &e) { cout << "Erro ao cadastrar: " << e.what() << endl; }
            } else cout << "Limite de 30 imoveis atingido!" << endl;
            break;
        case 2:
            if (numCasas + numTerrenos == 0) {
                cout << "Nenhum imovel cadastrado!\n";
                break;
            }
            cout << "\nImoveis cadastrados:\n";
            for (int i = 0; i < numCasas; i++) {
                cout << "Casa " << i << ": " << casas[i].getProprietario() << ", Quadra " << casas[i].getQuadra() << ", Lote " << casas[i].getLote() << ", Situacao " << casas[i].getSituacao() << endl;
            }
            for (int i = 0; i < numTerrenos; i++) {
                cout << "Terreno " << i << ": " << terrenos[i].getProprietario() << ", Quadra " << terrenos[i].getQuadra() << ", Lote " << terrenos[i].getLote() << ", Situacao " << terrenos[i].getSituacao() << endl;
            }
            int tipo, idx;
            cout << "Selecione o tipo (1 - Terreno, 2 - Casa): "; cin >> tipo;
            if (tipo == 1) {
                cout << "Indice do terreno (0 a " << numTerrenos - 1 << "): ";
                cin >> idx;
                if (idx >= 0 && idx < numTerrenos) {
                    int novaSit;
                    cout << "Nova situacao (1 - a venda, 2 - vendido, 3 - em negociacao): ";
                    cin >> novaSit;
                    if (novaSit == 1 || novaSit == 3) terrenos[idx].setComissao(0);
                    else if (novaSit == 2) {
                        float percent;
                        cout << "Percentual de comissao (<= 10%): ";
                        cin >> percent;
                        if (percent > 10 || percent < 0) {
                            cout << "Percentual invalido!\n";
                            break;
                        }
                        float comissao = terrenos[idx].getVenda() * (percent / 100);
                        terrenos[idx].setComissao(comissao);
                    }
                    terrenos[idx].setSituacao(novaSit);
                    cout << "Situacao alterada com sucesso!\n";
                } else cout << "Indice invalido!\n";
            }
            else if (tipo == 2) {
                cout << "Indice da casa (0 a " << numCasas - 1 << "): ";
                cin >> idx;
                if (idx >= 0 && idx < numCasas) {
                    int novaSit;
                    cout << "Nova situacao (1 - a venda, 2 - vendido, 3 - em negociacao): ";
                    cin >> novaSit;
                    if (novaSit == 1 || novaSit == 3) casas[idx].setComissao(0);
                    else if (novaSit == 2) {
                        float percent;
                        cout << "Percentual de comissao (<= 10%): ";
                        cin >> percent;
                        if (percent > 10 || percent < 0) {
                            cout << "Percentual invalido!\n";
                            break;
                        }
                        float comissao = casas[idx].getVenda() * (percent / 100);
                        casas[idx].setComissao(comissao);
                    }
                    casas[idx].setSituacao(novaSit);
                    cout << "Situacao alterada com sucesso!\n";
                } else cout << "Indice invalido!\n";
            } else cout << "Tipo invalido!\n";
            break;
        case 3:
            if (numCasas + numTerrenos == 0) {
                cout << "Nenhum imovel cadastrado!\n";
                break;
            }
            float totalVendas = 0;
            for (int i = 0; i < numCasas; i++) totalVendas += casas[i].getVenda();
            for (int i = 0; i < numTerrenos; i++) totalVendas += terrenos[i].getVenda();
            cout << fixed << setprecision(2);
            cout << "Total dos valores dos imoveis: R$ " << totalVendas << endl;
            break;
        case 4:
            if (numCasas + numTerrenos == 0) {
                cout << "Nenhum imovel cadastrado!\n";
                break;
            }
            float totalComissoes = 0;
            for (int i = 0; i < numCasas; i++) totalComissoes += casas[i].getComissao();
            for (int i = 0; i < numTerrenos; i++) totalComissoes += terrenos[i].getComissao();
            cout << fixed << setprecision(2);
            cout << "Total das comissoes: R$ " << totalComissoes << endl;
            break;
        case 0:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);
}

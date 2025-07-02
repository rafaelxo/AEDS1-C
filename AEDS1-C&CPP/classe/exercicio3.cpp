#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Cargo {
    private:
        int codigo;
        float v_hora;
    public:
        Cargo() {
            codigo = 1;
            v_hora = 10;
        }
        Cargo(int i, float f) {
            codigo = i;
            v_hora = f;
        }
        int getCodigo() { return codigo; }
        float getVHora() { return v_hora; }
};

class Funcionario {
    private:
        string nome;
        int cargo, horas_t;
        char sexo;
    public:
        Funcionario() {
            setNome("nenhum");
            setCargo(1);
            setSexo('M');
            setHorasT(10);
        }
        Funcionario(int i, char c, float f) {
            setCargo(i);
            setSexo(c);
            setHorasT(f);
        }
        void setNome(string texto) {
            try {
                if (texto.length() > 2) nome = texto;
                else throw invalid_argument("Nome invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        string getNome() { return nome; }
        void setCargo(int i) {
            try {
                if (i > 0) cargo = i;
                else throw invalid_argument("Cargo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getcargo() { return cargo; }
        void setSexo(char c) {
            c = toupper(c);
            try {
                if (c == 'M' || c == 'F') sexo = c;
                else throw invalid_argument("Sexo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        char getSexo() { return sexo; }
        void setHorasT(int i) {
            try {
                if (i > 0) horas_t = i;
                else throw invalid_argument("Horas invalida!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getHorasT() { return horas_t; }
        float calcular(Cargo cg[], char c) {
            float salario = horas_t * cg[cargo - 1].getVHora();
            if (c == 'F') salario *= 1.2;
            return salario;
        }
};

int main () {
    Cargo c[3] = { Cargo(1, 10), Cargo(2, 20), Cargo(3, 30) };
    Funcionario f;
    int cod, horas;
    char sexo;
    string nome;
    cout << "Insira o nome do funcionario: ";
    getline(cin, nome); f.setNome(nome);
    cout << "Insira o codigo do cargo: ";
    cin >> cod; f.setCargo(cod);
    cout << "Insira o sexo do funcionario (M ou F): ";
    cin >> sexo; f.setSexo(sexo);
    cout << "Insira o numero de horas trabalhadas: ";
    cin >> horas; f.setHorasT(horas);
    cout << "Salario do funcionario: " << f.calcular(c, sexo) << endl;
}

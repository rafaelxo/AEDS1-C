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
            setCodigo(1);
            setVHora(10);
        }
        Cargo(int i, float f) {
            setCodigo(i);
            setVHora(f);
        }
        void setCodigo(int i) {
            try {
                if(i > 0) codigo = i;
                else throw invalid_argument("Codigo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        int getCodigo() { return codigo; }
        void setVHora(float f) {
            try {
                if (f > 1) v_hora = f;
                else throw invalid_argument("Codigo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
        float getVHora() { return v_hora; }
};

class Funcionario {
    private:
        int codigo;
        char sexo;
        int horas_t;
    public:
        Funcionario() {
            setCodigo(1);
            setSexo("M");
            setHorasT(10);
        }
        Funcionario(int i, char c, float f) {
            setCodigo(i);
            setSexo(c);
            setHorasT(f);
        }
        void setCodigo(int i) {
            try {
                if (i > 0) codigo = i;
                else throw invalid_argument("Codigo invalido!");
            } catch (exception &e) { cerr << e.what() << endl; }
        }
};

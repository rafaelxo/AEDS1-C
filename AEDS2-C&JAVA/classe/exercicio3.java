import java.util.Scanner;

public class Cargo {
    private int codigo;
    private double v_hora;
    public Cargo() {
        codigo = 1; v_hora = 10;
    }
    public Cargo(int i, double f) {
        codigo = i; v_hora = f;
    }
    public int getCodigo() { return codigo; }
    public double getVHora() { return v_hora; }
}

public class Funcionario {
    private String nome;
    private int cargo, horas_t;
    private char sexo;
    public Funcionario() {
        setNome("nenhum");
        setCargo(1);
        setSexo('M');
        setHorasT(10);
    }
    public Funcionario(String n, int c, char s, int h) {
        setNome(n);
        setCargo(c);
        setSexo(s);
        setHorasT(h);
    }
    public void setNome(String n) {
        try {
            if (n.length() > 2) nome = n;
            else throw IllegalArgumentException("Nome inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public String getNome() { return nome; }
    public void setCargo(int c) {
        try {
            if (i > 0) cargo = c;
            else throw IllegalArgumentException("Cargo inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public int getCargo() { return cargo; }
    public void setSexo(char s) {
        c = Character.toUpperCase(s);
        try {
            if (s == 'M' || s == 'F') sexo = s;
            else throw IllegalArgumentException("Sexo inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public char getSexo() { return sexo; }
    public void setHorasT(int h) {
        try {
            if (h > 0) horas_t = h;
            else throw IllegalArgumentException("Horas inválidas!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public int getHorasT() { return horas_t; }
    public double calcular(Cargo[] c, char s) {
        double salario = horas_t * c[cargo - 1].getVHora();
        if (s == 'F') salario *= 1.2;
        return salario;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Cargo[] c = new Cargo[3] = { new Cargo(1, 10), new Cargo(2, 20), new Cargo(3, 30) };
        Funcionario f = new Funcionario();
        int cod, horas;
        char sexo;
        String nome;
        System.out.print("Insira o nome do funcionário: ");
        nome = sc.nextLine(); f.setNome(nome);
        System.out.print("Insira o código do funcionário: ");
        cod = sc.nextInt(); f.setCargo(cod);
        System.out.print("Insira o sexo do funcionário (M ou F): ");
        sexo = sc.nextChar(); f.setSexo(sexo);
        System.out.print("Insira o número de horas trabalhadas pelo funcionário: ");
        horas = sc.nextInt(); f.setHorasT(horas);
        System.out.print("Salário do funcionário: " + f.calcular(c, sexo) + " reais!");
        System.out.println();
    }
}

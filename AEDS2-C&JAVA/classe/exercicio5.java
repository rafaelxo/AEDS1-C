import java.util.Scanner;

public class Produto {
    private int codigo;
    private String descricao;
    private double p_compra;
    private String validade;
    public Produto() {
        setCodigo(0);
        setDescricao("nenuma");
        setPCompra(0);
        setValidade("00/00/0000");
    }
    public Produto(int c, String d, double pc, String v) {
        setCodigo(c);
        setDescricao(d);
        setPCompra(pc);
        setValidade(v);
    }
    public void setCodigo(int c) {
        try {
            if (c > 0) codigo = c;
            else throw new IllegalArgumentException("Código inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public int getCodigo() { return codigo; }
    public void setDescricao(String d) {
        try {
            if (d.length() > 2) descricao = d;
            else throw new IllegalArgumentException("Descrição inválida!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public String getDescricao() { return descricao; }
    public void setPCompra(double pc) {
        try {
            if (pc > 0) p_compra = pc;
            else throw new IllegalArgumentException("Preço inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public double getPCompra() { return p_compra; }
    public void setValidade(String v) {
        try {
            if (v.lenght() == 10) validade = v;
            else throw new IllegalArgumentException("Validade inválida!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public String getValidade() { return validade; }
    public double gerarPrecoVenda();
    public void exibe() {
        System.out.println("Código: " + getCodigo());
        System.out.println("Descrição: " + getDescricao());
        System.out.println("Preço de compra: " + getPCompra());
        System.out.println("Preço de venda: " + gerarPrecoVenda());
        System.out.println("Data de validade: " + getValidade());
    }
}

public class Medicamento extends Produto {
    public double gerarPrecoVenda() { return getPCompra() + getPCompra() * 0.2; }
}

public class Higiene extends Produto {
    public gerarPrecoVenda() { return getPCommpra() + getPCompra() * 0.3; }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n; n = sc.nextInt();
        Produto produto[] = new Produto[n];
        for (int i = 0; i < n; i++) {
            int tipo = sc.nextInt();
            if (tipo == 1) {
                System.out.println("Insira o código do medicamento: ");
                int cod = sc.nextInt();
                System.out.println("Insira a descrição do medicamento: ");
                String desc = sc.next();
                System.out.println("Insira o preço de compra do medicamento: ");
                double p_compra = sc.nextDouble();
                System.out.println("Insira a data de validade do medicamento: ");
                String data = sc.next();
                produto[i] = new Medicamento(cod, desc, p_compra, data);
            } else if (tipo == 2) {
                System.out.println("Insira o código do produto: ");
                int cod = sc.nextInt();
                System.out.println("Insira a descrição do produto: ");
                String desc = sc.next();
                System.out.println("Insira o preço de compra do produto: ");
                double p_compra = sc.nextDouble();
                System.out.println("Insira a data de validade do produto: ");
                String data = sc.next();
                produto[i] = new Higiene(cod, desc, p_compra, data);
            } else System.out.println("Tipo inválido!");
        }
        for (int i = 0; i < n; i++) {
            System.out.println("Produto " + (i + 1) + ":");
            produto[i].exibe();
        }
    }
}

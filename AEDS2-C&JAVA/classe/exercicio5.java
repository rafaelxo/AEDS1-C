import java.util.Scanner;

public class Produto {
    private int codigo;
    private String descricao;
    private double p_compra;
    public Produto() {
        setCodigo(0);
        setDescricao("nenuma");
        setPCompra(0);
    }
    public Produto(int c, String d, double pc) {
        setCodigo(c);
        setDescricao(d);
        setPCompra(pc);
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
    public double gerarPrecoVenda();
}

public class Medicamento extends Produto {
    private double per_lucro;
    private String validade;
    public Medicamento() {
        setPerLucro(0);
        setValidade("nenhuma");
    }
    public Medicamento(double pl, String v) {
        setPerLucro(pl);
        setValidade(v);
    }
    public void setPerLucro(double pl) {
        try {
            if (pl > 0) per_lucro = pl;
            else throw new IllegalArgumentException("Percentual inválido!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public double getPerLucro() { return per_lucro; }
    public void setValidade(String v) {
        try {
            if (v.lenght() == 10) validade = v;
            else throw new IllegalArgumentException("Validade inválida!");
        } catch (Exception e) { System.out.println(e.getMessage()); }
    }
    public String getValidade() { return validade; }
    public double gerarPrecoVenda() { return getPCompra() + (getPCompra() * (getPerLucro()/100)); }
}

public class Higiene extends Produto {
    public gerarPrecoVenda() { return getPCommpra() + getPCompra() * 0.3; }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
    }
}

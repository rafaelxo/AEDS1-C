import java.util.Scanner;

class Tipo {
    private int codigo;
    private float percentual;

    public Tipo () { setCodigo(1); }
    public void setCodigo(int num) {
        try {
            if (num == 1) {
                codigo = 1;
                percentual = 10;
            } else if (num == 2) {
                codigo = 2;
                percentual = 20;
            } else throw new IllegalArgumentException("Código inválido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public int getCodigo() { return codigo; }
    public string formataCod() {
        if (codigo == 1) return "Alimentação";
        else if (codigo == 2) return "Transporte";
        ele return "Desconhecido";
    }
    public float getPercentual() { return percentual; }
    public void preenche(Scanner sc) {
        int n;
        Systema.out.print("Tipo do produto: ");
        n = sc.nextInt();
        setCodigo(n);
        System.out.println();
    }
    public void exibe() {
        System.out.println("Tipo do produto: " + formataCod());
        System.out.println("Percentual de imposto: " + getPercentual() + "%");
    }
}

class Produto {
    private String descricao;
    private Tipo tipo = new Tipo();
    private float preco, imposto;

    public Produto() {
        setDescricao("nenhum");
        tipo.setCodigo(1);
        setPreco(1);
        setImposto();
    }
    public Produto(String s, int i, float f) {
        setDescricao(s);
        tipo.setCodigo(i);
        setPreco(f);
        setImposto();
    }
    public void setDescricao(String s) {
        try {
            if (s.length() > 0) descricao = s;
            else throw new IllegalArgumentExcpetion("Descrição inválida!");
        } catch (Exception e) { System.err.println(e.getMessage());
        }
    }
}

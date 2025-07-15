import java.util.Scanner;

class Imovel {
    private String proprietario, quadra;
    private int lote, situacao;
    private double area, v_venda, v_comissao;
    private void inicializa(String prop, String quad, int lot, int sit, double ar, double venda, double comissao) {
        setProprietario(prop);
        setQuadra(quad);
        setLote(lot);
        setSituacao(sit);
        setArea(ar);
        setVenda(venda);
        setComissao(comissao);
    }
    public Imovel() {
        inicializa("nenhum", "nenhuma", 1, 1, 1, 1, 0);
    }
    public Imovel(String prop, String quad, int lot, int sit, double ar, double venda, double comissao) {
        inicializa(prop, quad, lot, sit, ar, venda, comissao);
    }
    public void setProprietario(String prop) {
        try {
            if (prop.length() > 2) proprietario = prop;
            else throw new IllegalArgumentException("Proprietario invalido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public String getProprietario() { return proprietario; }
    public void setQuadra(String quad) {
        try {
            if (quad.length() > 2) quadra = quad;
            else throw new IllegalArgumentException("Proprietario invalido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public String getQuadra() { return quadra; }
    public void setLote(int lot) {
        try {
            if (lot > 0) lote = lot;
            else throw new IllegalArgumentException("Lote invalido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public int getLote() { return lote; }
    public void setSituacao(int sit) {
        try {
            if (sit > 0) situacao = sit;
            else throw new IllegalArgumentException("Situacao invalida!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }

    public int getSituacao() { return situacao; }
    public void setArea(double ar) {
        try {
            if (ar > 0) area = ar;
            else throw new IllegalArgumentException("Area invalida!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public double getArea() { return area; }
    public void setVenda(double venda) {
        try {
            if (venda > 0) v_venda = venda;
            else throw new IllegalArgumentException("Valor de venda invalido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public double getVenda() { return v_venda; }
    public void setComissao(double comissao) {
        try {
            if (comissao > 0) v_comissao = comissao;
            else throw new IllegalArgumentException("Valor de comissao invalido!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public double getComissao() { return v_comissao; }
    public double calcularIptu() { return 0; }
}

class Casa extends Imovel {
    private double a_construida;
    public Casa() {
        super();
        setAreaConstruida(1);
    }
    public Casa(String prop, String quad, int lot, int sit, double ar, double venda, double comissao, double constr) {
        super(prop, quad, lot, sit, ar, venda, comissao);
        setAreaConstruida(constr);
    }
    public void setAreaConstruida(double constr) {
        try {
            if (constr < getArea()) a_construida = constr;
            else throw new IllegalArgumentException("Area construida invalida!");
        } catch (Exception e) { System.err.println(e.getMessage()); }
    }
    public double getAreaConstruida() { return a_construida; }
    public double calcularIptu() { return getVenda() * 0.01; }
}

class Terreno extends Imovel {
    public Terreno() super();
    public Terreno(String prop, String quad, int lot, int sit, double ar, double venda, double comissao) super(prop, quad, lot, sit, ar, venda, comissao);
    public double calcularIptu() { return getVenda() * 0.02; }
}

class Main {
    public static int menu() {
        int opcao;
        System.out.println("\nMenu:\n");
        System.out.println("1 - Cadastrar imovel");
        System.out.println("2 - Alterar situacao");
        System.out.println("3 - Mostrar somatorio dos valores");
        System.out.println("4 - Mostrar somatorio das comissoes");
        System.out.println("5 - Sair\n");
        System.out.print("Insira a opcao desejada: ");
        Scanner scanner = new Scanner(System.in);
        opcao = scanner.nextInt();
        return opcao;
    }
    public static Casa geraNovaCasa() {
        String prop, quad;
        int lot, sit;
        double ar, venda, comissao = 0, constr;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Proprietario: ");
        prop = scanner.next();
        System.out.print("Quadra: ");
        quad = scanner.next();
        System.out.print("Lote: ");
        lot = scanner.nextInt();
        System.out.print("Area: ");
        ar = scanner.nextdouble();
        System.out.print("Valor de venda: ");
        venda = scanner.nextdouble();
        System.out.print("Situacao (1 - a venda, 2 - vendido, 3 - em negociacao): ");
        sit = scanner.nextInt();
        if (sit == 2) {
            double percent;
            System.out.print("Percentual de comissao (<= 10%): ");
            percent = scanner.nextdouble();
            if (percent > 10 || percent < 0) {
                System.out.println("Percentual invalido!");
                scanner.nextLine();
                throw new IllegalArgumentException("Percentual de comissao invalido!");
            }
            comissao = venda * (percent / 100);
        }
        System.out.print("Area construida: ");
        constr = scanner.nextdouble();
        return new Casa(prop, quad, lot, sit, ar, venda, comissao, constr);
    }
    public static Terreno geraNovoTerreno() {
        String prop, quad;
        int lot, sit;
        double ar, venda, comissao = 0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Proprietario: ");
        prop = scanner.next();
        System.out.print("Quadra: ");
        quad = scanner.next();
        System.out.print("Lote: ");
        lot = scanner.nextInt();
        System.out.print("Area: ");
        ar = scanner.nextdouble();
        System.out.print("Valor de venda: ");
        venda = scanner.nextdouble();
        System.out.print("Situacao (1 - a venda, 2 - vendido, 3 - em negociacao): ");
        sit = scanner.nextInt();
        if (sit == 2) {
            double percent;
            System.out.print("Percentual de comissao (<= 10%): ");
            percent = scanner.nextdouble();
            if (percent > 10 || percent < 0) {
                System.out.println("Percentual invalido!");
                scanner.nextLine();
                throw new IllegalArgumentException("Percentual de comissao invalido!");
            }
            comissao = venda * (percent / 100);
        }
        return new Terreno(prop, quad, lot, sit, ar, venda, comissao);
    }
    public static int cadastraNovoImovel(Imovel[] imoveis, int contImovel, Imovel novoImovel) {
        if (contImovel >= 30) {
            System.out.println("Limite de 30 imoveis atingido!");
            new Scanner(System.in).nextLine();
            return contImovel;
        }
        imoveis[contImovel] = novoImovel;
        System.out.println((novoImovel instanceof Casa ? "Casa" : "Terreno") + " cadastrado com sucesso!");
        new Scanner(System.in).nextLine();
        return contImovel + 1;
    }
    public static void alterarSituacaoImovel(Imovel[] imoveis, int contImovel) {
        if (contImovel == 0) {
            System.out.println("Nenhum imovel cadastrado!");
            new Scanner(System.in).nextLine();
            return;
        }
        System.out.println("\nImoveis cadastrados:");
        for (int i = 0; i < contImovel; i++) {
            System.out.println((imoveis[i] instanceof Casa ? "Casa" : "Terreno") + " " + i + ": " + imoveis[i].getProprietario() + ", Quadra " + imoveis[i].getQuadra() + ", Lote " + imoveis[i].getLote() + ", Situacao " + imoveis[i].getSituacao());
        }
        int idx;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Indice do imovel (0 a " + (contImovel - 1) + "): ");
        idx = scanner.nextInt();
        if (idx < 0 || idx >= contImovel) {
            System.out.println("Indice invalido!");
            new Scanner(System.in).nextLine();
            return;
        }
        int novaSit;
        System.out.print("Nova situacao (1 - a venda, 2 - vendido, 3 - em negociacao): ");
        novaSit = scanner.nextInt();
        if (novaSit == 1 || novaSit == 3) imoveis[idx].setComissao(0);
        else if (novaSit == 2) {
            double percent;
            System.out.print("Percentual de comissao (<= 10%): ");
            percent = scanner.nextdouble();
            if (percent > 10 || percent < 0) {
                System.out.println("Percentual invalido!");
                new Scanner(System.in).nextLine();
                return;
            }
            double comissao = imoveis[idx].getVenda() * (percent / 100);
            imoveis[idx].setComissao(comissao);
        }
        imoveis[idx].setSituacao(novaSit);
        System.out.println("Situacao alterada com sucesso!");
        new Scanner(System.in).nextLine();
    }
    public static double gerarValorTotalDosImoveis(Imovel[] imoveis, int contImovel) {
        double total = 0;
        for (int i = 0; i < contImovel; i++) total += imoveis[i].getVenda();
        return total;
    }
    public static double gerarValorTotalComissaoImoveis(Imovel[] imoveis, int contImovel) {
        double total = 0;
        for (int i = 0; i < contImovel; i++) total += imoveis[i].getComissao();
        return total;
    }
    public static void main(String[] args) {
        Imovel[] imoveis = new Imovel[30];
        int contImovel = 0, opcao;
        do {
            opcao = menu();
            if (opcao == 1) {
                int tipo;
                System.out.println("Escolha o tipo de imovel:");
                System.out.println("1 - Casa ");
                System.out.println("2 - Terreno: ");
                Scanner scanner = new Scanner(System.in);
                tipo = scanner.nextInt();
                try {
                    if (tipo == 1) {
                        Casa auxCasa = new Casa(geraNovaCasa());
                        contImovel = cadastraNovoImovel(imoveis, contImovel, auxCasa);
                    } else if (tipo == 2) {
                        Terreno auxTerreno = new Terreno(geraNovoTerreno());
                        contImovel = cadastraNovoImovel(imoveis, contImovel, auxTerreno);
                    } else {
                        System.out.println("Escolha Errada. Observe os tipos de imoveis validos!");
                        new Scanner(System.in).nextLine();
                    }
                } catch (Exception e) {
                    System.out.println("Erro ao cadastrar: " + e.getMessage());
                    new Scanner(System.in).nextLine();
                }
            }
            if (opcao == 2) alterarSituacaoImovel(imoveis, contImovel);
            if (opcao == 3) {
                double valorTotalImoveis = gerarValorTotalDosImoveis(imoveis, contImovel);
                System.out.printf("O somatorio do valor de venda dos imoveis e R$ %.2f%n", valorTotalImoveis);
                new Scanner(System.in).nextLine();
            }
            if (opcao == 4) {
                double valorTotalComissoes = gerarValorTotalComissaoImoveis(imoveis, contImovel);
                System.out.printf("O somatorio do valor das comissoes dos imoveis vendidos e R$ %.2f%n", valorTotalComissoes);
                new Scanner(System.in).nextLine();
            }
            if (opcao == 5) {
                System.out.println("Finalizando execucao da aplicacao.");
                new Scanner(System.in).nextLine();
            }
            if (opcao < 1 || opcao > 5) {
                System.out.println("Opcao invalida.");
                new Scanner(System.in).nextLine();
            }
        } while (opcao != 5);
    }
}

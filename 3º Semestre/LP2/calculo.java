
public class computador {
    private boolean ligado;
    private String sistema;

    public void ligar() {
        this.ligado = true;
    }

    public void desligar() {
        this.ligado = false;
    }

    public void formatar() {
        this.sistema = "";
    }

    public void instalarSo(String sistemaOperacional) {
        this.sistema = sistemaOperacional;
    }
}


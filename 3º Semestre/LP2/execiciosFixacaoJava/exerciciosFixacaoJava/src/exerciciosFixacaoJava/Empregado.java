package exerciciosFixacaoJava;

public class Empregado {
	private String nome;
	private String sobrenome;
	private double salario;

	public String getNome() {
		return nome;
	}


	public void setNome(String nome) {
		this.nome = nome;
	}


	public String getSobrenome() {
		return sobrenome;
	}


	public void setSobrenome(String sobrenome) {
		this.sobrenome = sobrenome;
	}


	public double getSalario() {
		return salario;
	}


	public Empregado(String nome, String sobrenome, double salario) {
		setNome(nome);
		setSobrenome(sobrenome);
		setSalario(salario);
	}
	

	public void setSalario(double salario) {
		this.salario = salario > 0 ? salario : 0.0;
	}

	public double getSalarioAnual() {
		return this.salario * 12;
	}

	public void aumentaSalario() {
		this.salario += salario / 10;
	}
}

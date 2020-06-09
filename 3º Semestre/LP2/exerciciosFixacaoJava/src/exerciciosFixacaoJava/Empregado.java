package exerciciosFixacaoJava;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Empregado {
	private String nome;
	private String sobrenome;
	private double salario;

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

package exercicioFixacao2;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Funcionario {
	private String matricula;
	private String nome;
	private double salarioBruto;
	private double salarioLiquido;

	public Funcionario(String matricula, String nome, double salarioBruto) {
		setMatricula(matricula);
		setNome(nome);
		setSalarioBruto(salarioBruto);
		setSalarioLiquido(CalculaSalarioLiquido(salarioBruto));
	}

	public double CalculaSalarioLiquido(double salarioBruto) {
		double salarioLiquido;
		if (salarioBruto <= 1500) {
			salarioLiquido = salarioBruto - ((6.0 / 100) * salarioBruto);
		} else {
			salarioLiquido = salarioBruto - ((9.5 / 100) * salarioBruto);
		}
		return salarioLiquido;
	}
}

package exercicioFixacao2;

import java.util.ArrayList;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class Empresa {
	private ArrayList<Funcionario> funcionarios = new ArrayList<Funcionario>();
	private int maxFuncionarios = 10;
	private double salarioLiquidoTotal = 0.0;

	public void AdicionarFuncionario(Funcionario funcionario) throws Exception {
		if (funcionarios.size() < maxFuncionarios) {
			funcionarios.add(funcionario);
		} else {
			throw new Exception("Limite de Funcion�rios atingido!");
		}
	}

	public void ExibirFuncionarios() {
		System.out.println("Total de Funcion�rios: " + funcionarios.size());
		funcionarios.forEach((func) -> {
			System.out.println("----------------------------------");
			System.out.println(
					"\tNome: " + func.getNome() + "\n\tMatricula: " + func.getMatricula() + "\n\tSalario Bruto: R$"
							+ func.getSalarioBruto() + "\n\tSalario L�quido: R$" + func.getSalarioLiquido());
			this.AcumSalarioLiquidoTotal(func.getSalarioLiquido());
		});
		System.out.println("----------------------------------");
		System.out.println("Sal�rio total a ser pago: R$" + this.getSalarioLiquidoTotal());
	}

	public void AcumSalarioLiquidoTotal(double salarioLiquido) {
		this.setSalarioLiquidoTotal(this.getSalarioLiquidoTotal() + salarioLiquido);
	}
}

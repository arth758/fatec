package exercicioFixacao2;

public class Main {

	public static void main(String[] args) throws Exception {
		Empresa empresa = new Empresa();

		for (int i = 1; i <= 10; i++) {
			empresa.AdicionarFuncionario(new Funcionario(("" + i), ("Teste #" + i), (i * 500)));
		}
		// empresa.AdicionarFuncionario(new Funcionario("0001", "Arthur Reis", 1500.00)); // retorna uma Exception

		empresa.ExibirFuncionarios();
	}

}

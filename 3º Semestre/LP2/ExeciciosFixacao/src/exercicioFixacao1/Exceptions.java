package exercicioFixacao1;

public class Exceptions extends Exception {
	private static final long serialVersionUID = 1L;

	public static void OcupacaoVaziaException() throws Exception {
		throw new Exception("Preencha Jogador!");
	}
	
	public static void PosicaoOcupada() throws Exception {
		throw new Exception("Essa posição já foi ocupada!");
	}
}

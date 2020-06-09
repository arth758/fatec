package inte;

public class Aluno {
	
	private String cpf;
	private DadosLogin dadosLogin;
	
	public Aluno(String cpf, DadosLogin dadosLogin) {
		this.cpf = cpf;
		this.dadosLogin = dadosLogin;
	}
	
	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public void setDadosLogin(DadosLogin dadosLogin) {
		this.dadosLogin = dadosLogin;
	}

	public DadosLogin getDadosLogin() {
		return dadosLogin;
	}
}

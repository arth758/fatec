package inte;

public class Professor {
	
	private DadosLogin dadosLogin;
	private String cpf;
	
	public Professor(String cpf, DadosLogin dadosLogin) {
		this.cpf = cpf;
		this.dadosLogin = dadosLogin;
	}

	public DadosLogin getDadosLogin() {
		return dadosLogin;
	}

	public void setDadosLogin(DadosLogin dadosLogin) {
		this.dadosLogin = dadosLogin;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
}

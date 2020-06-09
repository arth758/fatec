package inte;

public class CADI {
	
	private String cpf;
	private DadosLogin dadosLogin;
	
	public CADI(String cpf, DadosLogin dadosLogin) {
		this.cpf = cpf;
		this.dadosLogin = dadosLogin;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public DadosLogin getDadosLogin() {
		return dadosLogin;
	}

	public void setDadosLogin(DadosLogin dadosLogin) {
		this.dadosLogin = dadosLogin;
	}
	
}

package antenas;

public class DadosLogin {
	
	private String email;
	private String senha;
	
	
	public DadosLogin(String email, String senha) {
		this.email = email;
		this.senha = senha;
	}


	public String getEmail() {
		return email;
	}


	public void setEmail(String email) {
		this.email = email;
	}


	public String getSenha() {
		return senha;
	}


	public void setSenha(String senha) {
		this.senha = senha;
	}
	
	public boolean compararDadosLogin(DadosLogin dl) {
		if(email.equals(dl.email) && senha.equals(dl.senha)) {
			return true;
		} else {
			return false;
		}
	}

}

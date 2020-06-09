
public class DadosLogin {
	private String usuario;
	private String senha;
	
	public DadosLogin(String usuario,String senha)
	{
		this.usuario=usuario;
		this.senha=senha;
	}

	public String getUsuario() {
		return usuario;
	}

	public void setUsuario(String usuario) {
		this.usuario = usuario;
	}

	public String getSenha() {
		return senha;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}
	
	public boolean matches(DadosLogin dados)
	{
		if(!usuario.equals(dados.getUsuario()))
		{
			return false;
		}
		if(!senha.equals(dados.getSenha())){
			return false;
		}
		return true;		
	}
}

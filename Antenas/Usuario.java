
public class Usuario {
	private String nome;
	private String sobrenome;
	private DadosLogin dados;
	
	public Usuario(String nome,String sobrenome,DadosLogin dados)
	{
		this.nome=nome;
		this.sobrenome=sobrenome;
		this.dados = dados;
	}
	
	public String getNome()
	{
		return nome;
	}
	public void setNome(String n)
	{
		nome=n;
	}
	
	public String getSobrenome()
	{
		return sobrenome;
	}
	public void setSobrenome(String s)
	{
		sobrenome=s;
	}
	
	public DadosLogin getDados()
	{
		return dados;
	}
	
}

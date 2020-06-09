package inte;

import java.util.LinkedList;
import java.util.List;

public class Projeto {

	private String chave;
	private String titulo;
	private String descBreve;
	private String url;
	private String descDetalhada;
	private String tecnologias;
	private String link;
	private Entrega entrega;
	private String dataHora;
	private String localReuniao;
	private String cadi;
	private String empresario;
	private List<String> professor = new LinkedList<String>();
	private List<String> alunos = new LinkedList<String>();
	private int faseProjeto;
	
	public Projeto(String titulo, String descricaoBreve, String URL, String descDetalhada, String link, String tecnologias, Entrega entrega, String chave, 
			String dataHora, String localReuniao, String cadi, String empresario, List<String> alunos, List<String> professores, int faseProjeto) {
		this.titulo = titulo;
		this.descBreve = descricaoBreve;
		this.url = URL;
		this.descDetalhada = descDetalhada;
		this.link = link;
		this.tecnologias = tecnologias;
		this.entrega = entrega;
		this.chave = chave;
		this.dataHora = dataHora;
		this.localReuniao = localReuniao;
		this.cadi = cadi;
		this.empresario = empresario;
		this.professor = professores;
		this.faseProjeto = faseProjeto;
		this.alunos = alunos;
	}

	public List<String> getAlunos() {
		return alunos;
	}

	public void setAlunos(List<String> alunos) {
		this.alunos = alunos;
	}

	public void setEmpresario(String empresario) {
		this.empresario = empresario;
	}

	public String getCadi() {
		return cadi;
	}

	public void setCadi(String cadi) {
		this.cadi = cadi;
	}

	public String getEmpresario() {
		return empresario;
	}

	public List<String> getProfessor() {
		return professor;
	}

	public void setProfessor(List<String> professor) {
		this.professor = professor;
	}

	public int getFaseProjeto() {
		return faseProjeto;
	}

	public void setFaseProjeto(int faseProjeto) {
		this.faseProjeto = faseProjeto;
	}

	public String getDataHora() {
		return dataHora;
	}

	public void setDataHora(String dataHora) {
		this.dataHora = dataHora;
	}

	public String getLocalReuniao() {
		return localReuniao;
	}

	public void setLocalReuniao(String localReuniao) {
		this.localReuniao = localReuniao;
	}

	public Entrega getEntrega() {
		return entrega;
	}

	public void setEntrega(Entrega entrega) {
		this.entrega = entrega;
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public String getDescBreve() {
		return descBreve;
	}

	public void setDescBreve(String descBreve) {
		this.descBreve = descBreve;
	}

	public String getUrl() {
		return url;
	}

	public void setUrl(String url) {
		this.url = url;
	}

	public String getDescDetalhada() {
		return descDetalhada;
	}

	public void setDescDetalhada(String descDetalhada) {
		this.descDetalhada = descDetalhada;
	}

	public String getTecnologias() {
		return tecnologias;
	}

	public void setTecnologias(String tecnologias) {
		this.tecnologias = tecnologias;
	}

	public String getLink() {
		return link;
	}

	public void setLink(String link) {
		this.link = link;
	}

	public String getChave() {
		return chave;
	}

	public void setChave(String chave) {
		this.chave = chave;
	}
}

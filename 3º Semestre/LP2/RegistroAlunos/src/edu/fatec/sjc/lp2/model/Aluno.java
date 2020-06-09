package edu.fatec.sjc.lp2.model;

public class Aluno {
	private Integer matricula;
	private String nome;
	private String curso;
	private Prova[] provas;
		
	public Aluno(Integer matricula, String nome, String curso) {
		provas = new Prova[4];
		setMatricula(matricula);
		setNome(nome);
		setCurso(curso);
	}

	public Integer getMatricula() {
		return matricula;
	}

	public void setMatricula(Integer matricula) {
		this.matricula = matricula;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCurso() {
		return curso;
	}

	public void setCurso(String curso) {
		this.curso = curso;
	}

	public Prova[] getProvas() {
		return provas;
	}

	public void setProvas(Prova[] provas) {
		this.provas = provas;
	}
}

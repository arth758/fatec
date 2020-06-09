package edu.fatec.sjc.lp2.model;

public class Prova {
	private Double nota;
	private Double peso;
	
	public Prova(Double nota, Double peso) {
		this.nota = nota;
		this.peso = peso;
	}

	public Double getNota() {
		return nota;
	}

	public void setNota(Double nota) {
		this.nota = nota;
	}

	public Double getPeso() {
		return peso;
	}

	public void setPeso(Double peso) {
		this.peso = peso;
	}
	
}

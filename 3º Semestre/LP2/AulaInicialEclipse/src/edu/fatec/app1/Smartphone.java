package edu.fatec.app1;

public class Smartphone {
	private String resolucao;
	private Cor color;
	private double tamanho;
	private Versao versaoSo;
	private EspecificacaoHardware especificacao;

	public Cor getColor() {
		return color;
	}
	
	public void setColor(Cor color) {
		this.color = color;
	}
	
	public double getTamanho() {
		return tamanho;
	}
	
	public void setTamanho(double tamanho) {
		this.tamanho = tamanho;
	}
	
	public Versao getVersaoSo() {
		return versaoSo;
	}
	
	public void setVersaoSo(Versao versaoSo) {
		this.versaoSo = versaoSo;
	}
	
	public EspecificacaoHardware getEspecificacao() {
		return especificacao;
	}
	
	public void setEspecificacao(EspecificacaoHardware especificacao) {
		this.especificacao = especificacao;
	}
	
	public String getResolucao() {
		return resolucao;
	}
	
	public void setResolucao(String resolucao) {
		this.resolucao = resolucao;
	}
}

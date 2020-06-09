package edu.fatec.sjc.lp2.figures;

public class Losango implements Calculable{
	private double dzinho;
	private double dzao;
	
	public Losango(double dzinho, double dzao) {
		this.dzinho = dzinho;
		this.dzao = dzao;
	}
	
	@Override
	public double calcularArea() {
		return (dzao * dzinho) / 2;
	}

}

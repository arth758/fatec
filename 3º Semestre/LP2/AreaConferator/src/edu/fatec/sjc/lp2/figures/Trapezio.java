package edu.fatec.sjc.lp2.figures;

public class Trapezio implements Calculable{
	private double bzao;
	private double bzinho;
	private double altura;
	
	public Trapezio(double bzao, double bzinho, double altura) {
		this.bzao = bzao;
		this.bzinho = bzinho;
		this.altura = altura;
	}
	
	@Override
	public double calcularArea() {
		return ((bzao + bzinho) * altura)/2;
	}

}

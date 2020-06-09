package edu.fatec.sjc.lp2.figures;

public class Triangulo implements Calculable{
	private double base;
	private double altura;

	public Triangulo(final double base, final double altura) {
		this.base = base;
		this.altura = altura;
	}
	
	@Override
	public double calcularArea() {
		return (base * altura)/2;
	}

}

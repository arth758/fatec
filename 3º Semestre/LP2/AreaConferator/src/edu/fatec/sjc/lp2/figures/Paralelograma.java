package edu.fatec.sjc.lp2.figures;

public class Paralelograma implements Calculable {
	private double base;
	private double altura;

	public Paralelograma(final double base, final double altura) {
		this.base = base;
		this.altura = altura;
	}

	@Override
	public double calcularArea() {
		Calculable c = new Retangulo(base, altura);
		return c.calcularArea();
	}

}

package edu.fatec.sjc.lp2.figures;

public class Cubo implements Calculable{
	private double lado;

	public Cubo(final double pLado) {
		lado = pLado;
	}

	@Override
	public double calcularArea() {
		Calculable c = new Quadrado(lado);
		return 6 * c.calcularArea();
	}
}

package edu.fatec.sjc.lp2.figures;

public class Quadrado implements Calculable {
	private double lado;

	public Quadrado(final double pLado) {
		lado = pLado;
	}

	@Override
	public double calcularArea() {
		Calculable c = new Retangulo(lado, lado);
		return c.calcularArea();
	}

}

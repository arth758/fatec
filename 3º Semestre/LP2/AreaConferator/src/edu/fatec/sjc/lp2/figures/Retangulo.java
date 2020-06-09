package edu.fatec.sjc.lp2.figures;

public class Retangulo implements Calculable {
	private double ladoA;
	private double ladoB;

	public Retangulo(final double ladoA, final double ladoB) {
		this.ladoA = ladoA;
		this.ladoB = ladoB;
	}

	@Override
	public double calcularArea() {
		return ladoA * ladoB;
	}

}

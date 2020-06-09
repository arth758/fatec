package edu.fatec.sjc.lp2.figures;

public class Hexagono implements Calculable {
	private double altura;

	public Hexagono(double altura) {
		this.altura = altura;
	}

	@Override
	public double calcularArea() {
		return (3 * Math.pow(altura, 2) * Math.sqrt(3)) / 2;
	}

}

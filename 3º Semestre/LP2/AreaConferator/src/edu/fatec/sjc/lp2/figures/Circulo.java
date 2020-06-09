package edu.fatec.sjc.lp2.figures;

public class Circulo implements Calculable{
	private double raio;
	
	public Circulo(final double raio) {
		this.raio = raio;
	}
	
	@Override
	public double calcularArea() {
		return Math.PI * (raio * raio);
	}
	
}

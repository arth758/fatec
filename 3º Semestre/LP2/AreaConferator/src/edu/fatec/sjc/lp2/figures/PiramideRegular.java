package edu.fatec.sjc.lp2.figures;

public class PiramideRegular implements Calculable {
	private double alturaPiramide;
	private double base;
	
	public PiramideRegular(double alturaPiramide, double base) {
		this.alturaPiramide = alturaPiramide;
		this.base = base;
	}
	
	@Override
	public double calcularArea() {
		return (4 * ((base * getApotema()) / 2)) + (base * base);
	}
	
	public double getApotema() {
		return Math.sqrt((Math.pow(base, 2) + Math.pow(alturaPiramide, 2)));
	}
}

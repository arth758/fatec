package edu.fatec.sjc.lp2.figures;

public class PrismaTriangular implements Calculable {
	private double base;
	private double alturaTriangulo;
	private double alturaPrisma;
	
	public PrismaTriangular(double base, double alturaTriangulo, double alturaPrisma) {
		this.base = base;
		this.alturaTriangulo = alturaTriangulo;
		this.alturaPrisma = alturaPrisma;
	}
	
	@Override
	public double calcularArea() {
		return base * (alturaTriangulo + (3 * alturaPrisma));
	}

}

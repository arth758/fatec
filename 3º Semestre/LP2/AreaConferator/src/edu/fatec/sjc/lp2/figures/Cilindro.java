package edu.fatec.sjc.lp2.figures;
//At = 2(p.r²) + 2(p.r.h)
public class Cilindro implements Calculable{
	private double raio;
	private double altura;
	
	public Cilindro(double raio, double altura) {
		this.raio = raio;
		this.altura = altura;
	}
	
	@Override
	public double calcularArea() {
		return (2 * (Math.PI * Math.pow(raio, 2))) + (2 * (Math.PI * raio * altura));
	}
	
}

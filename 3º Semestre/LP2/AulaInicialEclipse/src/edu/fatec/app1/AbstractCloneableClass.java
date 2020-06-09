package edu.fatec.app1;

public abstract class AbstractCloneableClass implements Cloneable {
	private String className;
	
	public AbstractCloneableClass(String className) {
		this.className = className;
		System.out.println("Classe " + this.className + " instanciada.");
	}

	public abstract Double calcularFatorial(Long nrElementos);
	
	public abstract Object clone();
	
	public Double calcularSoma(Double n1, Double n2) {
		return n1 + n2;
	}
}

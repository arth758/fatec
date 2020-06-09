package edu.fatec.app1;

import edu.fatec.app1.model.Conta;

public class Main {

	
	@SuppressWarnings("unused")
	public static void main(String[] args) {
		Cloneable objCloneable = new Conta("Objeto 1");
		AbstractCloneableClass obj2Cloneable = new Conta("Objeto 2");
		Conta obj3Cloneable = new Conta("Objeto 3");
		
		AbstractCloneableClass obj4Cloneable = new AbstractCloneableClass("Objeto 4") {
			
			@Override
			public Object clone() {
				// TODO Auto-generated method stub
				return null;
			}
			
			@Override
			public Double calcularFatorial(Long nrElementos) {
				// TODO Auto-generated method stub
				return null;
			}
			
			@Override
			public Double calcularSoma(Double n1, Double n2) {
				return n1 - n2;
			}
		};
		
		Double valor1 = 10.0;
		Double valor2 = 5.0;
		System.out.println(obj2Cloneable.calcularSoma(valor1, valor2));
		System.out.println(obj4Cloneable.calcularSoma(valor1, valor2));
	}

}

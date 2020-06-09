package Exercicio_4;

import lombok.Getter;
import lombok.Setter;


@Getter
@Setter
public class Complex {
	private int real;
	private int imaginario;
	
	public Complex() {
		//Dois inicializam = 0
		real = 0;
		imaginario = 0;	
	}
	
	public Complex(int pReal) {
		// Imaginario inicializa como 0
		this.real = pReal;
		this.imaginario = 0;
	}
	
	public Complex(int pReal, int pImaginario) {
		//Dois inicializam normalmente
		this.imaginario = pImaginario;
		this.real = pReal;
	}
	public int parteReal(int pReal, int pImaginario) {
		return this.real;
	}
	public int parteImaginaria(int pReal, int pImaginario) {
		return this.imaginario;
	}
	
	public double modulo(int pReal, int pImaginario) { 
		double part1 = (this.real*this.real) + (this.imaginario * this.imaginario);
		double modulo = Math.sqrt(part1);
		return modulo;
	}
	public String argumento(int pReal, int pImaginario) {
		double result = Math.atan(this.imaginario / this.real);
		String a = Double.toString(result);
		return a;
	}
	public String inversoAdtivo(int pReal, int pImaginario) {
		if(this.imaginario < 0) {
			int[] resultados = new int[3];
			resultados[0] = this.real;
			resultados[1] = this.imaginario;
			resultados[2] = (this.real * this.real) + (this.imaginario * this.imaginario);
			
			String a = Integer.toString(resultados[0]);
			
			String b = Integer.toString(resultados[1]);
			
			String c = Integer.toString(resultados[2]);
			
			 
			return "(" + a + b + ")" + "/" + c;
		}
		else {
			int[] resultados = new int[3];
			resultados[0] = pReal;
			resultados[1] = this.imaginario;
			resultados[2] = (pReal * pReal) + (this.imaginario * this.imaginario);
			
			String a = Integer.toString(resultados[0]);
			
			String b = Integer.toString(resultados[1]);
			
			String c = Integer.toString(resultados[2]);
			
			return "(" + a + "+" + b + ")" + "/" + c;
		}
	}
	public String Soma(int[] pReal, int[] pImaginario) {
		pReal[0] = this.real;
		pReal[1] = this.real;
		pImaginario[0] = this.imaginario;
		pImaginario[1] = this.imaginario;
		int somaReal = pReal[0] + pReal[1];
		int somaImaginario = pImaginario[0] + pImaginario[1];
		int[] retorno;
		retorno = new int[2];
		retorno[0] = somaReal;
		retorno[1] = somaImaginario;
		String a = Integer.toString(retorno[0]);
		String b = Integer.toString(retorno[1]);
		
		return "(" + a + "," + b + ")";
		
		
	}
	
	public String Subtracao(int[] pReal, int[] pImaginario) {
		pReal[0] = this.real;
		pReal[1] = this.real;
		pImaginario[0] = this.imaginario;
		pImaginario[1] = this.imaginario;
		int subtracaoReal = pReal[0] + pReal[1];
		int subtracaoImaginario = pImaginario[0] + pImaginario[1];
		int[] retorno;
		retorno = new int[2];
		retorno[0] = subtracaoReal;
		retorno[1] = subtracaoImaginario;
		String a = Integer.toString(retorno[0]);
		String b = Integer.toString(retorno[1]);
		
		return "(" + a + "," + b + ")";
	}
	//z1⋅z2=(ac−bd)+(ad+bc)i
	public String Multiplicacao(int[] pReal, int[]pImaginario) {
		pReal[0] = this.real;
		pReal[1] = this.real;
		pImaginario[0] = this.imaginario;
		pImaginario[1] = this.imaginario;
		int[] resultados = new int[6];
		//ac
		resultados[0]= (pReal[0]*pReal[1]);
		//ad
		resultados[1]= (pReal[0] * pImaginario[1]);
		//cb
		resultados[2]= 	(pReal[1] * pImaginario[0]);
		//bd
		resultados[3]= (pImaginario[0] * pImaginario[1])*(-1);
		
		resultados[4] = resultados[0] - resultados[3];
		
		resultados[5] = resultados[2] + resultados[1];
		
		String a = Integer.toString(resultados[4]);
		
		String b = Integer.toString(resultados[5]);
		 
		return "(" + a + "," + b + ")";
	}
	//z1/z2 = ((ac - bd)/(c**2 + d**2))+((ad + bc)/(c**2 + d**2) 
	public String Divisao(int[] pReal, int[] pImaginario) {
		pReal[0] = this.real;
		pReal[1] = this.real;
		pImaginario[0] = this.imaginario;
		pImaginario[1] = this.imaginario;
		int [] resultados = new int[9];
		//ac
		resultados[0]= (pReal[0]*pReal[1]);
		//ad
		resultados[1]= (pReal[0] * pImaginario[1]);
		//cb
		resultados[2]= 	(pReal[1] * pImaginario[0]);
		//bd
		resultados[3]= (pImaginario[0] * pImaginario[1])*(-1);
		
		resultados[4] = resultados[0] - resultados[3];
		
		resultados[5] = resultados[2] + resultados[1];
		
		resultados[6] = ((pReal[1] * pReal[1]) + (pImaginario[1] * pImaginario[1]));
		
		resultados[7] = resultados[4] / resultados[6];
		
		resultados[8] = resultados[5] / resultados[6];
		
		String a = Integer.toString(resultados[7]);
		
		String b = Integer.toString(resultados[8]);
		 
		return "(" + a + "," + b + ")";
	}

}

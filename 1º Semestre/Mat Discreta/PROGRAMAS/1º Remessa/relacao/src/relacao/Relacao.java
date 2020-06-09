package relacao;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Relacao {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		List<String> list_A = new ArrayList<String>();
		List<String> list_B = new ArrayList<String>();
		
		String el_A, el_B;
		int x = 0, a, b;
		
		System.out.printf("Quantos elementos quer no Conjunto A? ");
		a = input.nextInt();
		
		System.out.printf("Quantos elementos quer no Conjunto B? ");
		b = input.nextInt();
		
		String[][] relacao = new String[a][b];
		
		System.out.println("Entre com um valor para o conjunto A: ");
		while(x < a) {
			System.out.printf("Opção: ");
			el_A = input.next();
			list_A.add(el_A);
			relacao[x][0] = el_A; 
			System.out.println(relacao[x][0]);
			x++;
		}
		
		x = 0;
		
		System.out.println("\nEntre com um valor para o conjunto B: ");
		while(x < b) {
			System.out.printf("Opção: ");
			el_B = input.next();
			list_B.add(el_B);
			relacao[0][x] = el_B;
			System.out.println(relacao[0][x]);
			x++;
		}
		
		System.out.println("\nElementos juntos:");
		
//		int c = 0, l = 0;
//		while(l < a) {
//			while(c < b) {
//				System.out.println(relacao[l][c]);
//				c++;
//			}
//			l++;
//		}
		
		System.out.println("Elementos de A:\n");
		
		for(String n: list_A) {
			System.out.printf(n, "\n");
		}
		
		System.out.println("\nElementos de B: \n");
		
		for(String n: list_B) {
			System.out.printf(n, "\n");
		}
		
	}

}

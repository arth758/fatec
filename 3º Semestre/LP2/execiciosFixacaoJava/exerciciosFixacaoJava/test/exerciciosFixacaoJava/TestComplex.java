package exerciciosFixacaoJava;

import static org.junit.Assert.*;

import org.junit.Test;

public class TestComplex {
	Complex cut;

	@Test
	public void doisVazios() {
		cut = new Complex();
		assertEquals(0, cut.getReal());
		assertEquals(0, cut.getImaginario());
	}

	@Test
	public void imaginarioZero() {
		cut = new Complex(5);
		assertEquals(5, cut.getReal());
		assertEquals(0, cut.getImaginario());
	}

	@Test
	public void numeroComplexo() {
		cut = new Complex(5, 3);
		assertEquals(5, cut.getReal());
		assertEquals(3, cut.getImaginario());
	}

	@Test
	public void buscandoParteReal() {
		cut = new Complex(5, 3);
		cut.parteReal(5, 3);
		assertEquals(5, cut.getReal());
	}

	@Test
	public void buscandoParteImaginaria() {
		cut = new Complex(4, 3);
		cut.parteImaginaria(4, 3);
		assertEquals(3, cut.getImaginario());
	}

	@Test
	public void valorModulo() {
		cut = new Complex(8, 6);
		assertEquals(10, cut.modulo(8, 6), 0.01);
	}

	@Test
	public void valorArgumento() {
		cut = new Complex(3, 3);
		assertEquals(0.78, cut.argumento(3, 3), 0.01);
	}

	@Test
	public void valorInversoAdtivo() {
		cut = new Complex(4, 3);
		assertEquals(4, cut.inversoAdtivo(4, 3), 0.01);
	}

	@Test
	public void valorSoma() {
		cut = new Complex();
		assertEquals("7/7", cut.Soma(new Complex(4, 5), new Complex(3, 2)));
	}
}

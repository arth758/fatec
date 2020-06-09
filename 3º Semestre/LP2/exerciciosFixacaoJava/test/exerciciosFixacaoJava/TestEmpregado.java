package exerciciosFixacaoJava;

import static org.junit.Assert.*;
import org.junit.Test;

public class TestEmpregado {
	Empregado cut;
	Empregado anotherCut;

	@Test
	public void testeComNome() {
		cut = new Empregado("Arthur", "Reis", 100);
		assertEquals("Arthur", cut.getNome());
	}

	@Test
	public void testeComSobrenome() {
		cut = new Empregado("Arthur", "Reis", 100);
		assertEquals("Reis", cut.getSobrenome());
	}
	// Testes com Sal�rio Empregado 1
	@Test
	public void testeComSalarioPositivoCut() {
		cut = new Empregado("Arthur", "Reis", 1600);
		assertEquals(1600 * 12, cut.getSalarioAnual(), 0.01);
	}

	@Test
	public void testeComSalarioNegativoCut() {
		cut = new Empregado("Arthur", "Reis", -100);
		assertEquals(0, cut.getSalario(), 0.01);
	}
	// Testes com Sal�rio Empregado 2
	@Test
	public void testeComSalarioPositivoAnotherCut() {
		anotherCut = new Empregado("Marcos", "Alexandre", 1600);
		assertEquals(1600 * 12, anotherCut.getSalarioAnual(), 0.01);
	}

	@Test
	public void testeComSalarioNegativoAnotherCut() {
		anotherCut = new Empregado("Marcos", "Alexandre", -100);
		assertEquals(0, anotherCut.getSalario(), 0.01);
	}
	// Teste com Sal�rio Anual Empregado 1
	@Test
	public void testeComSalarioAnualCut() {
		cut = new Empregado("Arthur", "Reis", 100);
		assertEquals(100 * 12, cut.getSalarioAnual(), 0.01);
	}
	// Teste com Sal�rio Anual Empregado 2
	@Test
	public void testeComSalarioAnualAnotherCut() {
		anotherCut = new Empregado("Marcos", "Alexandre", 1000);
		assertEquals(1000 * 12, anotherCut.getSalarioAnual(), 0.01);
	}
	// Teste com Sal�rio Aumentado Empregado 1
	@Test
	public void testeComSalarioAumentadoCut() {
		cut = new Empregado("Arthur", "Reis", 1600);
		cut.aumentaSalario();
		assertEquals(1760, cut.getSalario(), 0.01);
	}
	// Teste com Sal�rio Aumentado Empregado 2
	@Test
	public void testeComSalarioAumentadoAnotherCut() {
		anotherCut = new Empregado("Marcos", "Alexandre", 2000);
		anotherCut.aumentaSalario();
		assertEquals(2200, anotherCut.getSalario(), 0.01);
	}
}

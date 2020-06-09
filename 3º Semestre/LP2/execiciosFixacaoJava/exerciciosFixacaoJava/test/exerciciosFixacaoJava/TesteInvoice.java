package exerciciosFixacaoJava;

import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;

public class TesteInvoice {
private Invoice aux;
	
	@Before
	public void init() {
		aux = new Invoice(1L, "Item 1",2L, 2.5);
	}
	
	@Test
	public void validarCalculoPrecoNegativo() {
		aux.setPrecoUnitario(-1.0);
		assertEquals(0.0, aux.getInvoiceAmount(), 0.01);
	}
	
	@Test
	public void validarCalculoQuantidadeNegativo() {
		aux.setQuantidadeItem(-1L);
		assertEquals(0.0, aux.getInvoiceAmount(), 0.01);
	}
	
	@Test
	public void validarcalculoQuantidadePrecoPositivo() {
		assertEquals(5.0, aux.getInvoiceAmount(), 0.01);
	}
}

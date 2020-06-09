package exerciciosFixacaoJava;

import static org.junit.Assert.*;

import org.junit.Test;

public class TestData {
	Data cut;

	@Test
	public void criarDataValida() {
		cut = new Data(24, 11, 2001);
		assertEquals(24, cut.getDia());
		assertEquals(11, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmFevereiro() {
		cut = new Data(24, 2, 2001);
		assertEquals(24, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataInvalidaEmFevereiro() {
		cut = new Data(30, 2, 2001);
		assertEquals(0, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmDezembro() {
		cut = new Data(24, 12, 2001);
		assertEquals(24, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataInvalidaEmDezembro() {
		cut = new Data(33, 12, 2001);
		assertEquals(0, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissexto() {
		cut = new Data(24, 11, 2016);
		assertEquals(24, cut.getDia());
		assertEquals(11, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaEmFevereiroComAnoBissexto() {
		cut = new Data(24, 2, 2016);
		assertEquals(24, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataInvalidaEmFevereiroComAnoBissexto() {
		cut = new Data(30, 2, 2016);
		assertEquals(0, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaEmDezembroComAnoBissexto() {
		cut = new Data(24, 12, 2016);
		assertEquals(24, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataInvalidaEmDezembroComAnoBissexto() {
		cut = new Data(33, 12, 2016);
		assertEquals(0, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataAtual() {
		cut = new Data();
		assertEquals(14, cut.getDia());
		assertEquals(3, cut.getMes());
		assertEquals(2020, cut.getAno());
	}

	@Test
	public void criarDataAtualString() {
		cut = new Data();
		assertEquals("14/3/2020", cut.toString());
	}

	@Test
	public void getDatacomoString() {
		cut = new Data();
		assertEquals("14/3/2020", cut.toString(14, 3, 2020));
	}

	@Test
	public void criaDataValidaEAvancaData() {
		cut = new Data();
		cut.avancaData();
		assertEquals("15/3/2020", cut.toString());
	}

	@Test
	public void criarDataValidaEmJaneiroEAvancaData() {
		cut = new Data(24, 1, 2001);
		cut.avancaData();
		assertEquals(25, cut.getDia());
		assertEquals(1, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmFevereiroEAvancaData() {
		cut = new Data(24, 2, 2001);
		cut.avancaData();
		assertEquals(25, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarOutraDataValidaEmFevereiroEAvancaData() {
		cut = new Data(28, 2, 2001);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(3, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmAbrilEAvancaData() {
		cut = new Data(30, 4, 2001);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(5, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmSetembroEAvancaData() {
		cut = new Data(5, 9, 2001);
		cut.avancaData();
		assertEquals(6, cut.getDia());
		assertEquals(9, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmOutubroEAvancaData() {
		cut = new Data(31, 10, 2001);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(11, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmNovembroEAvancaData() {
		cut = new Data(30, 11, 2001);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2001, cut.getAno());
	}

	@Test
	public void criarDataValidaEmDezembroEAvancaData() {
		cut = new Data(31, 12, 2001);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(1, cut.getMes());
		assertEquals(2002, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmJaneiroEAvancaData() {
		cut = new Data(24, 1, 2016);
		cut.avancaData();
		assertEquals(25, cut.getDia());
		assertEquals(1, cut.getMes());
		assertEquals(2016, cut.getAno());
	}
	
	@Test
	public void criarDataValidaComAnoBissextoEmFevereiroEAvancaData() {
		cut = new Data(26, 2, 2016);
		cut.avancaData();
		assertEquals(27, cut.getDia());
		assertEquals(2, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarOutraDataValidaComAnoBissextoEmFevereiroEAvancaData() {
		cut = new Data(29, 2, 2016);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(3, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmAbrilEAvancaData() {
		cut = new Data(30, 4, 2016);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(5, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmSetembroEAvancaData() {
		cut = new Data(5, 9, 2016);
		cut.avancaData();
		assertEquals(6, cut.getDia());
		assertEquals(9, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmOutubroEAvancaData() {
		cut = new Data(31, 10, 2016);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(11, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmNovembroEAvancaData() {
		cut = new Data(30, 11, 2016);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(12, cut.getMes());
		assertEquals(2016, cut.getAno());
	}

	@Test
	public void criarDataValidaComAnoBissextoEmDezembroEAvancaData() {
		cut = new Data(31, 12, 2016);
		cut.avancaData();
		assertEquals(1, cut.getDia());
		assertEquals(1, cut.getMes());
		assertEquals(2017, cut.getAno());
	}
}

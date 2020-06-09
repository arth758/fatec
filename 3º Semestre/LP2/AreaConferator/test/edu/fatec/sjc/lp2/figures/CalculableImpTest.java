package edu.fatec.sjc.lp2.figures;

import java.util.Arrays;
import org.junit.Test;
import org.junit.Assert;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

import edu.fatec.sjc.lp2.figures.Calculable;
import edu.fatec.sjc.lp2.figures.Cilindro;
import edu.fatec.sjc.lp2.figures.Circulo;
import edu.fatec.sjc.lp2.figures.Cubo;
import edu.fatec.sjc.lp2.figures.Esfera;
import edu.fatec.sjc.lp2.figures.Hexagono;
import edu.fatec.sjc.lp2.figures.Losango;
import edu.fatec.sjc.lp2.figures.Paralelograma;
import edu.fatec.sjc.lp2.figures.PiramideRegular;
import edu.fatec.sjc.lp2.figures.PrismaTriangular;
import edu.fatec.sjc.lp2.figures.Quadrado;
import edu.fatec.sjc.lp2.figures.Retangulo;
import edu.fatec.sjc.lp2.figures.Trapezio;
import edu.fatec.sjc.lp2.figures.Triangulo;

@RunWith(Parameterized.class)
public class CalculableImpTest {
	private Calculable calc;
	private double expectedResult;
	
	public CalculableImpTest(final Calculable calc, final double expectedResult) {
		this.calc = calc;
		this.expectedResult = expectedResult;
	}

	@Test
	public void testCalculoFigurasGeometricas() {
		Assert.assertEquals(expectedResult, calc.calcularArea(), 0.1);
	}
	
	@Parameters(name = "{index}: {0} = expected: {2}")
	public static Iterable<Object[]> data() {
		return Arrays.asList(
				new Object[][] {
					{ new Quadrado(2.0), 4.0 }, 
					{ new Retangulo(3.0, 2.0), 6.0 },
					{ new Circulo(2.0), 12.5 },
					{ new Triangulo(3.0, 4.0), 6.0 },
					{ new Paralelograma(5.0, 6.0), 30.0 },
					{ new Trapezio(5.0, 3.0, 2.0), 8.0 },
					{ new Hexagono(6.0), 93.5},
					{ new Losango(3.0, 4.0), 6.0 },
					{ new Cubo(2.0), 24.0 },
					{ new Cilindro(15.0, 7.0), 2073.5 },
					{ new Esfera(60.0), 45239.0 },
					{ new PrismaTriangular(12.0, 8.0, 14.0), 600.0 },
					{ new PiramideRegular(12.0, 18.0), 1102.7 },
				});
	}
	
}

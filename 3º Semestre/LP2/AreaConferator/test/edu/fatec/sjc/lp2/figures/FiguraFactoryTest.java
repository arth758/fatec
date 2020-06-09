package edu.fatec.sjc.lp2.figures;

import java.util.Arrays;
import org.junit.Test;
import org.junit.Assert;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

import edu.fatec.sjc.lp2.FiguraType;
import edu.fatec.sjc.lp2.factory.Factory;
import edu.fatec.sjc.lp2.factory.FiguraFactory;
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
public class FiguraFactoryTest {
	private Factory<Calculable, FiguraType> calc;
	private Class<Calculable> expectedClass;
	private FiguraType type;
	private double[] parameters;

	public FiguraFactoryTest(final FiguraType type, final Class<Calculable> expectedClass, final double... parameters) {
		this.calc = new FiguraFactory();
		this.expectedClass = expectedClass;
		this.type = type;
		this.parameters = parameters;
	}

	@Test
	public void testCalculoFigurasGeometricas() {
		Assert.assertTrue(calc.create(type, parameters).getClass().equals(expectedClass));
	}

	@Parameters(name = "{index}: {0} = expected: {1}")
	public static Iterable<Object[]> data() {
		return Arrays.asList(new Object[][] { { FiguraType.QUADRADO, Quadrado.class, new double[] { 2.0 } },
				{ FiguraType.RETANGULO, Retangulo.class, new double[] { 3.0, 2.0 } },
				{ FiguraType.CIRCULO, Circulo.class, new double[] { 2.0 } },
				{ FiguraType.TRIANGULO, Triangulo.class, new double[] { 3.0, 4.0 } },
				{ FiguraType.PARALELOGRAMA, Paralelograma.class, new double[] { 5.0, 6.0 } },
				{ FiguraType.TRAPEZIO, Trapezio.class, new double[] { 5.0, 3.0, 2.0 } },
				{ FiguraType.HEXAGONO, Hexagono.class, new double[] { 6.0 } },
				{ FiguraType.LOSANGO, Losango.class, new double[] { 3.0, 4.0 } },
				{ FiguraType.CUBO, Cubo.class, new double[] { 2.0 } },
				{ FiguraType.CILINDRO, Cilindro.class, new double[] { 15.0, 7.0 } },
				{ FiguraType.ESFERA, Esfera.class, new double[] { 60.0 } },
				{ FiguraType.PRISMA_TRIANGULAR, PrismaTriangular.class, new double[] { 12.0, 8.0, 14.0 } },
				{ FiguraType.PIRAMIDE_REGULAR, PiramideRegular.class, new double[] { 12.0, 18.0 } }, });
	}
}

programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		escreva("Celsius e Fahrenheit\n\n")
		
		real cel
		inteiro faren = 50
		
		escreva("Fahrenheit = Celsius:\n\n")
		enquanto(faren <= 150)
		{
			cel = (faren - 32) * (5.0 / 9.0)
			escreva(faren, " °F = ", mat.arredondar(cel, 2), " °C\n")
			faren++
		}
	}
}
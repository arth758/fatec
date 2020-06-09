package exerciciosFixacaoJava;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Data {
	private int dia;
	private int mes;
	private int ano;

	String[] actualDate = LocalDate.now().toString().split("-");

	public int getDia() {
		return dia;
	}

	public void setDia(int dia) {
		this.dia = dia;
	}

	public int getMes() {
		return mes;
	}

	public void setMes(int mes) {
		this.mes = mes;
	}

	public int getAno() {
		return ano;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}

	public Data(int dia, int mes, int ano) {
		List<Integer> meses31Dias = new ArrayList<Integer>();
		meses31Dias = getMeses31Dias();

		List<Integer> meses30Dias = new ArrayList<Integer>();
		meses30Dias = getMeses30Dias();

		boolean bissexto = isBissexto(ano);

		if (meses30Dias.contains(mes) || meses31Dias.contains(mes) || mes == 2) {
			if (mes == 2) {
				if (bissexto) {
					if (dia > 0 && dia < 30) {
						setDia(dia);
					}
				} else {
					if (dia > 0 && dia < 29) {
						setDia(dia);
					}
				}
				setMes(mes);
				setAno(ano);
			} else if (meses30Dias.contains(mes)) {
				if (dia > 0 && dia < 31) {
					setDia(dia);
				}
				setMes(mes);
				setAno(ano);
			} else if (meses31Dias.contains(mes)) {
				if (dia > 0 && dia < 32) {
					setDia(dia);
				}
				setMes(mes);
				setAno(ano);
			}
		}
		setAno(ano);
	}

	public List<Integer> getMeses31Dias() {
		List<Integer> meses31Dias = new ArrayList<Integer>();
		meses31Dias.add(1);
		meses31Dias.add(3);
		meses31Dias.add(5);
		meses31Dias.add(7);
		meses31Dias.add(8);
		meses31Dias.add(10);
		meses31Dias.add(12);
		return meses31Dias;
	}

	public List<Integer> getMeses30Dias() {
		List<Integer> meses30Dias = new ArrayList<Integer>();
		meses30Dias.add(4);
		meses30Dias.add(6);
		meses30Dias.add(9);
		meses30Dias.add(11);
		return meses30Dias;
	}

	public boolean isBissexto(int ano) {
		if ((ano % 4 == 0) && (ano % 100 != 0))
			return true;
		return false;
	}

	public Data() {
		setDia(Integer.parseInt(actualDate[2]));
		setMes(Integer.parseInt(actualDate[1]));
		setAno(Integer.parseInt(actualDate[0]));
	}

	public String toString(int dia, int mes, int ano) {
		return dia + "/" + mes + "/" + ano;
	}

	public String toString() {
		return this.dia + "/" + this.mes + "/" + this.ano;
	}

	public void avancaData() {
		List<Integer> meses31Dias = new ArrayList<Integer>();
		meses31Dias = getMeses31Dias();

		List<Integer> meses30Dias = new ArrayList<Integer>();
		meses30Dias = getMeses30Dias();

		boolean bissexto = isBissexto(ano);

		if (meses30Dias.contains(mes)) {
			if (dia == 30) {
				setDia(1);
				setMes(mes + 1);
			} else {
				setDia(dia + 1);
			}
		} else if (meses31Dias.contains(mes)) {
			if (dia == 31) {
				setDia(1);
				if (mes == 12) {
					setMes(1);
					setAno(ano + 1);
				} else {
					setMes(mes + 1);
				}
			} else {
				setDia(dia + 1);
			}
		} else if (mes == 2) {
			if (bissexto) {
				if (dia == 29) {
					setDia(1);
					setMes(mes + 1);
				} else {
					setDia(dia + 1);
				}
			} else {
				if (dia == 28) {
					setDia(1);
					setMes(mes + 1);
				} else {
					setDia(dia + 1);
				}
			}
		}
	}
}

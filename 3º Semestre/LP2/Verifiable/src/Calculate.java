
public class Calculate implements Verifiable {

	@Override
	public boolean isPrimeNumber(Integer number) {
		for (int j = 2; j < number; j++) {
			if (number % j == 0)
				return false;
		}
		return true;
	}

	@Override
	public Integer calulatePrimeNumber(Integer nEsimoElement) {
		int primo = 1;
		int count = 0;
		int rest;
		int x;

		while (count < nEsimoElement) {
			primo += (primo < 3) ? 1 : 2;
			rest = 0;

			for (x = 1; x <= primo / 2; x++) {
				if (primo % x == 0)
					rest += 1;
				if (rest > 1)
					continue;
			}
			if (rest == 1)
				count++;
		}
		return primo;
	}
}

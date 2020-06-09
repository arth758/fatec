package edu.fatec.sjc.lp2.factory;

public interface Factory<R, T> {
	R create(final T ft, double... params);
}

package Biblioteca;

import java.util.Date;
import lombok.Getter;
import lombok.Setter;

@Getter @Setter
public class Emprestimo {
	private Date dataEmprestimo;
	private Date dataDevolucao;
}

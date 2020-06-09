package Biblioteca;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter
public class Obra {
	private String genero;
	private String idioma;
	private String midia;
	private String nome;
	private String anoPublicacao;
	private String autor;
	private Editora editora;
}

package antenas;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class Teste {

	@Test
	void test() {
		Antenas antenas = new Antenas();
		
		antenas.addEmpresario(new Empresario("123", new DadosLogin("joao@gmail.com", "456"))); //obviamente isso vai mudar porque o empresario...
		antenas.addEmpresario(new Empresario("321", new DadosLogin("maria@gmail.com", "654"))); //... tera atributos que vc colocara.
		
		assertEquals(antenas.getEmpresarios().size(), 2);
		
		antenas.addProjeto(new Projeto("abc"));
		
		Projeto projeto = antenas.buscarProjetoPorChave("abc");

		assertEquals(projeto.getChave(), "abc");
		
		Empresario emp = antenas.loginEmpresario(new DadosLogin("joao@gmail.com", "456"));
		
		assertEquals(emp.getCpf(), "123");
		
		//obviamente, fazer mais testes...
		
	}

}

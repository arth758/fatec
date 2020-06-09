package inte;

import static org.junit.jupiter.api.Assertions.*;
import java.util.LinkedList;
import java.util.List;
import org.junit.jupiter.api.Test;

class Teste {

	@Test
	void test() {
		Antenas antenas = new Antenas();
		
		// Listas
		List<String> professores = new LinkedList<String>();
		professores.add("joao@fatec.sp.gov.br");
		professores.add("joaozinho@fatec.sp.gov.br");
		
		List<String> alunos = new LinkedList<String>();
		alunos.add("arthur@email.com");
		alunos.add("breno@email.com");
		
		// Empresário
		antenas.cadEmpresario(new Empresario("123", new DadosLogin("joao@gmail.com", "456"))); 
		antenas.cadEmpresario(new Empresario("321", new DadosLogin("maria@gmail.com", "654")));
		assertEquals(antenas.getEmpresarios().size(), 2);
		
		Empresario emp = antenas.loginEmpresario(new DadosLogin("joao@gmail.com", "456"));
		assertEquals(emp.getCpf(), "123");
		
		// Projeto
		antenas.cadProjeto(new Projeto("teste", "testando", "www.123.com", "testando detalhadamente", "www.abc.com.br", "sei não", 
				new Entrega("www.git.com", "www.cloud.com", "teste"), "abc", "24/11 12:00", "testeeeeeee", "cadi", "empresario" , professores, alunos, 1));
		
		antenas.cadProjeto(new Projeto("projeto", "projeto", "www.github.com", "descrvendo detalhadamente", "www.teste.com.br", "projetos", 
				new Entrega("www.aaa.com", "www.nuuvem.com.br", "testando"), "key", "25/12 00:00", "PROJETO", "Giuliano", "Sabha" , professores, alunos, 2));
		
		assertEquals(antenas.getProjetos().size(), 2);
		
		Projeto projeto = antenas.buscarProjetoPorChave("abc");
		assertEquals(projeto.getChave(), "abc");
		
		Projeto proj = antenas.buscarProjetoPorTitulo("nenhum");
		assertEquals(proj, null);
		
		proj = antenas.buscarProjetoPorTitulo("projeto");
		assertEquals(proj.getChave(), "key");
		
		// Professor
		antenas.cadProfessor(new Professor("456", new DadosLogin("prof1", "prof1")));
		antenas.cadProfessor(new Professor("789", new DadosLogin("prof2", "prof2")));
		assertEquals(antenas.getProfessor().size(), 2);
		
		Professor prof = antenas.loginProfessor(new DadosLogin("prof1", "prof1"));
		assertEquals(prof.getCpf(), "456");
		
		prof = antenas.loginProfessor(new DadosLogin("prof2", "prof2"));
		assertEquals(prof.getCpf(), "789");
		
		// Aluno
		antenas.cadAluno(new Aluno("123", new DadosLogin("arthur", "12345")));
		antenas.cadAluno(new Aluno("123", new DadosLogin("alunão", "aluninho")));
		assertEquals(antenas.getAluno().size(), 2);
		
		Aluno aln = antenas.loginAluno(new DadosLogin("arthur", "12345"));
		assertEquals(aln.getCpf(), "123");
		
		aln = antenas.loginAluno(new DadosLogin("alunão", "aluninho"));
		assertEquals(aln.getCpf(), "123");
		
		// CADI
		antenas.cadCadi(new CADI("123456789", new DadosLogin("cadi", "senha")));
		antenas.cadCadi(new CADI("123456789", new DadosLogin("responsavel", "abcdefghij")));
		assertEquals(antenas.getCadi().size(), 2);
		
		CADI cadi = antenas.loginCadi(new DadosLogin("cadi", "senha"));
		assertEquals(cadi.getCpf(), "123456789");
		
		cadi = antenas.loginCadi(new DadosLogin("responsavel", "abcdefghij"));
		assertEquals(cadi.getCpf(), "123456789");
	}

}

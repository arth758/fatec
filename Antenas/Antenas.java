package antenas;

import java.util.LinkedList;
import java.util.List;

public class Antenas {

	private List<Empresario> empresarios = new LinkedList<Empresario>();
	private List<Projeto> projetos = new LinkedList<Projeto>();
	//etc...
	
	

	public void addEmpresario(Empresario emp) {
		empresarios.add(emp);
	}
	
	
	public void addProjeto(Projeto proj) {
		projetos.add(proj);
	}
	
	public Projeto buscarProjetoPorChave(String chave) {
		for(Projeto projeto:projetos) {
			if(projeto.getChave().equals(chave)) return projeto;
		}
		return null;
	}
	
	//2. Implemente o método _(loginEmpresario)_ e seu método de dependência _(compararDadosLogin)_ 
	public Empresario loginEmpresario(DadosLogin dl) {
		for(Empresario empresario:empresarios) {
			if(empresario.getDadosLogin().compararDadosLogin(dl)) return empresario;
		}
		return null;
	}
	
	public List<Empresario> getEmpresarios() {
		return empresarios;
	}
	
	
}

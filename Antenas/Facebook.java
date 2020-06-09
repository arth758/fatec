import java.util.LinkedList;
import java.util.List;

import java.util.concurrent.ConcurrentLinkedQueue;


public class Facebook {
	
	public ConcurrentLinkedQueue<Usuario> usuarios = new ConcurrentLinkedQueue<Usuario>();;
	
	
	
	public void addUsuario(Usuario usu)
	{
		if(verificarUsuarioExistente(usu)==false){
			usuarios.add(usu);
		}
		
	}
	
	public boolean verificarUsuarioExistente(Usuario usu){
		for(Usuario user:usuarios){
			if(user.getDados().getUsuario().equals(usu.getDados().getUsuario())) return true;
		}
		return false;
	}
	
	public List<Usuario> logar(DadosLogin login)
	{
		List<Usuario> encontrado = new LinkedList<Usuario>();
		for(Usuario buscarUsuario:usuarios)
		{
			if(buscarUsuario.getDados().matches(login)==true)
			{
				encontrado.add(buscarUsuario);
			}
		}
		return encontrado;
	}
	
	public void deletarUsuario(String login){
		for(Usuario user:usuarios){
			if(user.getDados().getUsuario().equals(login)) usuarios.remove(user);
		}
	}
	
}

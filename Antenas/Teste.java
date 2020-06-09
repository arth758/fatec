import java.util.List;


public class Teste {
	public static void main(String[] args) {
		
		Facebook face = new Facebook();
		
		face.addUsuario(new Usuario("Eduardo", "Di Nizo", new DadosLogin("edu_nizo", "engenharia")));
		face.addUsuario(new Usuario("Roberto", "Dantas", new DadosLogin("ro_dantas", "mecanico")));
		face.addUsuario(new Usuario("Dulce", "Di Nizo", new DadosLogin("dulce", "estrela")));
		
		System.out.println(face.usuarios);
		
		face.deletarUsuario("edu_nizo");
		
		System.out.println(face.usuarios);
		
		face.addUsuario(new Usuario("Roberto", "Dantas", new DadosLogin("ro_dantas", "mecanico")));
		
		System.out.println(face.usuarios);
		
		
		
		
	}
}

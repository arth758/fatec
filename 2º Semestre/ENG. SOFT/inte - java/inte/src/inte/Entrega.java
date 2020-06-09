package inte;

public class Entrega {
	
	private String linkGit;
	private String linkCloud;
	private String Texto;
	
	public Entrega(String linkGit, String linkCloud, String Texto) {
		this.linkCloud = linkCloud;
		this.linkGit = linkGit;
		this.Texto = Texto;
	}

	public String getLinkGit() {
		return linkGit;
	}

	public void setLinkGit(String linkGit) {
		this.linkGit = linkGit;
	}

	public String getLinkCloud() {
		return linkCloud;
	}

	public void setLinkCloud(String linkCloud) {
		this.linkCloud = linkCloud;
	}

	public String getTexto() {
		return Texto;
	}

	public void setTexto(String texto) {
		Texto = texto;
	}
}

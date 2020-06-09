package exerciciosFixacaoJava;

public class Invoice {
	private long numeroItem;
	private String descricaoItem;
	private long quantidadeItem;
	private double precoUnitario;
	
	public long getNumeroItem() {
		return numeroItem;
	}

	public void setNumeroItem(long numeroItem) {
		this.numeroItem = numeroItem;
	}

	public String getDescricaoItem() {
		return descricaoItem;
	}

	public void setDescricaoItem(String descricaoItem) {
		this.descricaoItem = descricaoItem;
	}

	public long getQuantidadeItem() {
		return quantidadeItem;
	}

	public void setQuantidadeItem(long quantidadeItem) {
		this.quantidadeItem = quantidadeItem;
	}

	public double getPrecoUnitario() {
		return precoUnitario;
	}

	public void setPrecoUnitario(double precoUnitario) {
		this.precoUnitario = precoUnitario;
	}

	public Invoice(long pNumeroItem, String pDescricaoItem, long pQuantidadeItem, double pPrecoUnitario) {
		setNumeroItem(pNumeroItem);
		setDescricaoItem(pDescricaoItem);
		setPrecoUnitario(pPrecoUnitario);
		setQuantidadeItem(pQuantidadeItem);
	}
	
	public void setQuantidadeItem(Long pQuantidade) {
		this.quantidadeItem = pQuantidade < 0 ? 0 : pQuantidade;
	}
	
	public void setPrecoUnitario(Double pPreco) {
		this.precoUnitario = pPreco < 0 ? 0 : pPreco;
	}
	
	public Double getInvoiceAmount() {
		return getPrecoUnitario() * getQuantidadeItem();
	}
}

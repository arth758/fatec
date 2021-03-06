package exerciciosFixacaoJava;

import lombok.Getter;
import lombok.Setter;

@Getter @Setter
public class Invoice {
	private long numeroItem;
	private String descricaoItem;
	private long quantidadeItem;
	private double precoUnitario;
	
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

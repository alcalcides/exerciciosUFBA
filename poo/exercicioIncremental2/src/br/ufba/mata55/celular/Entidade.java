package br.ufba.mata55.celular;

public abstract class Entidade {

	private int x;
	private int y;
	private int tamanho;
	private boolean ativo;

	public int getX() {
		return x;
	}

	public void setX(int x) {
		this.x = x;
	}

	public int getY() {
		return y;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getTamanho() {
		return tamanho;
	}

	public void setTamanho(int tamanho) {
		if (tamanho < 3)
			setAtivo(false);
		else
			this.tamanho = tamanho;

	}

	public boolean isAtivo() {
		return ativo;
	}

	public void setAtivo(boolean ativo) {
		this.ativo = ativo;
	}

}

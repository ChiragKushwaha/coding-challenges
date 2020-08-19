package biNumber;

public class BiNumber {
	private int Number1, Number2;

	public BiNumber(int Number1, int Number2) {
		this.Number1 = Number1;
		this.Number2 = Number2;
	}

	public int add() {
		return (Number1 + Number2);
	}

	public int multiply() {
		return (Number1 * Number2);
	}

	public void Double() {
		this.Number1 *= 2;
		this.Number2 *= 2;
	}

	public int getNumber1() {
		return this.Number1;
	}

	public int getNumber2() {
		return this.Number2;
	}


}

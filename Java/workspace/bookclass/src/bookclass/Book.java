package bookclass;

public class Book {
	private int noOfCopies;
	private String nameOfBook;

	public int getNoOfCopies() {
		return noOfCopies;
	}

	public void setNoOfCopies(int noOfCopies) {
		if (noOfCopies > 0) {
			this.noOfCopies = noOfCopies;
		}
	}

	public void increaseNoOfCopies(int howMuch) {
		setNoOfCopies(this.noOfCopies + howMuch);
	}

	public void decreaseNoOfCopies(int howMuch) {
		setNoOfCopies(this.noOfCopies - howMuch);
	}
	public Book(String nameOfBook) {
		this.nameOfBook = nameOfBook;
	}

	public void print() {
		System.out.printf("%s Book Ordered.", this.nameOfBook).println();

	}

}

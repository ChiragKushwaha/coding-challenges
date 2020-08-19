package bookclass;

public class BookRunner {

	public static void main(String[] args) {
		Book artOfComputerProgramming = new Book("Art Of Computer Programming");
		Book effectiveJava = new Book("Effective Jave");
		Book cleanCode = new Book("Clean Code");

		artOfComputerProgramming.print();
		effectiveJava.print();
		cleanCode.print();

		artOfComputerProgramming.setNoOfCopies(100);
		effectiveJava.setNoOfCopies(20);
		cleanCode.setNoOfCopies(70);
	}

}

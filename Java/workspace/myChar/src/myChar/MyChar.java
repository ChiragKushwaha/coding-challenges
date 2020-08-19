package myChar;

public class MyChar {
	private char myChar;

	public MyChar(char c) {
		this.myChar = c;
	}

	public boolean isVowel() {
		if (this.myChar == 'a' || this.myChar == 'e' || this.myChar == 'i' || this.myChar == 'o'
				|| this.myChar == 'u' || this.myChar == 'A' || this.myChar == 'E' || this.myChar == 'I'
				|| this.myChar == 'O' || this.myChar == 'U') {
			return true;
		}
		return false;
	}

	public boolean isNumber() {
		if (this.myChar >= 48 && this.myChar <= 57) {
			return true;
		}
		return false;
	}

	public boolean isAlphabet() {
		if (this.myChar >= 97 && this.myChar <= 122) {
			return true;
		}
		return false;
	}

	public static void printLowerCaseAlphabets() {
		for (char ch = 'a'; ch <= 'z'; ch++) {
			System.out.println(ch);
		}
	}

	public static void printUpperCaseAlphabets() {
		for (char ch = 'A'; ch <= 'Z'; ch++) {
			System.out.println(ch);
		}
	}

	public boolean isConsonant() {
		if (isAlphabet() && !isVowel()) {
			return true;
		}
		return false;
	}

}

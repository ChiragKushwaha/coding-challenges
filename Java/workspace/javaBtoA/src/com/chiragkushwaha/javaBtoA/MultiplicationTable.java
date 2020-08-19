package com.chiragkushwaha.javaBtoA;

public class MultiplicationTable {
	void print() {
		print(3);
	}

	void print(int table) {
		print(table, 1, 10);
	}

	void print(int table, int from, int to) {
		for (int i = from; i <= to; i++) {
			System.out.printf("%d x %d = %d", table, i, i * table).println();
		}
	}
}

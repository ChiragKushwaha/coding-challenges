package com.simpleInterest;

import java.math.BigDecimal;

public class SimpleInterestRunner {

	public static void main(String[] args) {
		SimpleInterest s = new SimpleInterest("4500.00", "7.5");
		BigDecimal value = s.calculate(5);
		System.out.println(value);

	}

}

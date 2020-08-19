package com.chiragkushwaha.oops;

public class MotorBikeRunner {

	public static void main(String[] args) {

		MotorBike ducati = new MotorBike("Ducati", 20);
		MotorBike honda = new MotorBike("Honda", 20);

		ducati.start();
		honda.start();

		ducati.setSpeed(100);
		ducati.increaseSpeed(100);
//		int ducatiSpeed = ducati.getSpeed();
//		ducatiSpeed = ducatiSpeed + 100;
//		ducati.setSpeed(ducatiSpeed);
		System.out.println(ducati.getSpeed());
		ducati.decreaseSpeed(40);
		System.out.println(ducati.getSpeed());

		honda.setSpeed(80);
		honda.increaseSpeed(100);
//		int hondaSpeed = honda.getSpeed();
//		hondaSpeed = hondaSpeed + 100;
//		honda.setSpeed(hondaSpeed);
		System.out.println(honda.getSpeed());
		honda.decreaseSpeed(10);
		System.out.println(honda.getSpeed());

		ducati.setSpeed(20);
		honda.setSpeed(0);
	}

}

package com.chiragkushwaha.oops;

public class MotorBike {

	private String name;
	private int speed;

	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		if (speed > 0) {
			this.speed = speed;
		}
	}

	public MotorBike(String name, int speed) {
		this.name = name;
		this.speed = speed;
	}

	public void increaseSpeed(int howMuch) {
		setSpeed(this.speed + howMuch);
	}

	public void decreaseSpeed(int howMuch) {
//		this.speed = this.speed - howMuch;
		setSpeed(this.speed - howMuch);
	}
	public void start() {
		System.out.printf("%s Started", this.name).println();
	}

}

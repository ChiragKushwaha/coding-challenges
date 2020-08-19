package com.chiragkushwaha;

public class Main {//code block

    public static void main(String[] args) {//code block
	    boolean gameOver =true;
	    int score = 5000;
	    int levelCompleted = 5;
	    int bonus=100;
//	    if (score ==5000)
//            System.out.println("Your score was 5000");
//        System.out.println("This was executed");
//        if (score <5000 && score>1000) {
//            System.out.println("Your score was less than 5000 but grater than 1000");
//        }else if (score<1000){
//            System.out.println("Your score was less than 1000");
//        }
//        else {
//            System.out.println("Got here");
//        }
        if (gameOver){//Scope
            int finalScore = score+(levelCompleted*bonus);
            finalScore += 1000;
            System.out.println("Your final score was "+ finalScore);
        }
//
//        boolean newGameOver =true;
//        int newScore = 5000;
//        int newLevelCompleted = 5;
//        int newBonus=100;
//
//        if (newGameOver){
//            int finalScore = newScore +(newLevelCompleted*newBonus);
//            System.out.println("Your final score was "+finalScore);
//        }
        score = 10000;
        levelCompleted = 8;
        bonus= 200;

        if (gameOver){
            int finalScore = score +(levelCompleted*bonus);
            System.out.println("Your final score was "+finalScore);
        }











    }
}

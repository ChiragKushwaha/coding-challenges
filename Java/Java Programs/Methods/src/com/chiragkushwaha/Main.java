package com.chiragkushwaha;

public class Main {

    public static void main(String[] args) {
//        boolean gameOver =true;
//        int score = 5000;
//        int levelCompleted = 5;
//        int bonus=100;

        int highScore =calculateScore(true,800,5,100);
        System.out.println("Your final score was "+highScore);
        highScore=calculateScore(true, 10000,8,200);
        System.out.println("Your final score was "+highScore);

//        score = 10000;
//        levelCompleted = 8;
//        bonus= 200;

//        if (gameOver){
//            int finalScore = score +(levelCompleted*bonus);
//            System.out.println("Your final score was "+finalScore);
//        }
        int highScorePosition =calculateHighScorePosition(1500);
        displayHighScorePosition("Tim", highScorePosition);

        highScorePosition =calculateHighScorePosition(900);
        displayHighScorePosition("Bob", highScorePosition);

        highScorePosition =calculateHighScorePosition(400);
        displayHighScorePosition("Percy", highScorePosition);

        highScorePosition =calculateHighScorePosition(50);
        displayHighScorePosition("Gilbert", highScorePosition);
    }
    public static void displayHighScorePosition(String playerName, int highScorePosition){
        System.out.println(playerName+" managed to get into position " +
                highScorePosition+" on the high score table");
    }
    public static int calculateHighScorePosition(int playerScore){
//        if (playerScore>=1000){
//            return 1;
//        }else if (playerScore>=500 && playerScore<1000){
//            return 2;
//        }else if (playerScore>=100 && playerScore<500){
//            return 3;
//        }else {
//            return 4;
//        }
//        if (playerScore>=1000){
//            return 1;
//        }else if (playerScore>=500){
//                return 2;
//        }else if (playerScore>=100){
//            return 3;
//        }else {
//            return 4;
//        }
//        if (playerScore>=1000){
////            return 1;
////        }else if (playerScore>=500){
////            return 2;
////        }else if (playerScore>=100){
////            return 3;
////        }
////        return 4;
        int position = 4; //assuming position 4 will be returned
        if (playerScore>=1000){
            position= 1;
        }else if (playerScore>=500){
            position= 2;
        }else if (playerScore>=100){
            position= 3;
        }
        return position;
    }

    public static int  calculateScore( boolean gameOver,int score,int levelCompleted,int bonus){

        if (gameOver){//Scope
            int finalScore = score+(levelCompleted*bonus);
            finalScore += 1000;
//            System.out.println("Your final score was "+ finalScore);
            return finalScore;
        }//else {
           // return  -1
        //}
        return -1;
    }
}

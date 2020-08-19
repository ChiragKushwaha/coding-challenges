package com.chiragkushwaha;

public class Main {

    public static void main(String[] args) {
        int result =10+2;
        System.out.println("1+2 = "+result);

        int previousResult = result;
        result = result -1;
        System.out.println(previousResult+" - 1 = "+result);

        previousResult = result;
        result = result*10;
        System.out.println(previousResult+" * 10 = "+result);

        previousResult = result;
        result = result/5;
        System.out.println(previousResult+" / 5 = "+result);

        previousResult = result;
        result = result%3;
        System.out.println(previousResult+" % 3 = "+result);

        result++;
        System.out.println("Result is now "+result);

        result--;
        System.out.println("Result is now "+result);

        result+=2;
        System.out.println("Result is now "+result);

        result*=10;
        System.out.println("Result is now "+result);

        result-=10;
        System.out.println("Result is now "+result);

        result/=10;
        System.out.println("Result is now "+result);

        boolean isAlien = false;
        if(isAlien == false){
            System.out.println("It is not a alien!");
        }

        int topScore= 83;
        if (topScore<100)
            System.out.println("You got the high score!");

        int secondTopScore =81;
        if (topScore > secondTopScore && topScore <100)
            System.out.println("Greater than second top score and less than 100");

        if((topScore >90) || (secondTopScore<=90))
            System.out.println("One of these tests is true");

        int newValue = 50;
        if (newValue ==50)
            System.out.println("This is true");

        boolean isCar = false;
        if (isCar == true) // isCar =true // it will run because the assignment operator returns the value itself from which it is initialized
            System.out.println("This is not supposed to happen");

        isCar = true;
        boolean wasCar= isCar ? true: false;
        if (wasCar)
            System.out.println("wasCar is true");

        double myFirstValue= 20d;
        double mySecondValue = 80d;
        double myTotal = (myFirstValue+mySecondValue) *25;
        System.out.println("myTotal = "+myTotal);
        double theRemainder = myTotal%40;
        System.out.println("Remainder is "+theRemainder);
        if (theRemainder<=20)
            System.out.println("Total was over the limit");

    }
}

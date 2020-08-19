package com.chiragkushwaha;

public class Main {

    public static void main(String[] args) {
        System.out.println("10,000 at 2% interest = "+ calculateInterest(10_000.0, 2.0));
        System.out.println("10,000 at 3% interest = "+ calculateInterest(10_000.0, 3.0));
        System.out.println("10,000 at 4% interest = "+ calculateInterest(10_000.0, 4.0));
        System.out.println("10,000 at 5% interest = "+ calculateInterest(10_000.0, 5.0));

        for (int i = 0; i<5;i++){
            System.out.println("Loop "+i+" hello");
        }
        for (int i = 2; i<9;i++){
            System.out.println("10,000 at "+i+"% interest = "+ String.format("%.2f",calculateInterest(10_000.0, i)));
        }
        for (int i = 8; i>0;i--){
            System.out.println("10,000 at "+i+"% interest = "+ String.format("%.2f",calculateInterest(10_000.0, i)));
        }

        int count=0;
        for (int i=10; i<=50; i++){
            if (isPrime(i)){
                count++;
                System.out.println("Number "+i+" is a prime number");
                if (count==10){
                    System.out.println("Exiting for loop");
                    break;
                }
            }
        }
    }
    public static boolean isPrime(int n){
        if ((n==1) || (n%2==0) || (n%3==0)){
            return false;
        }
        for (int i=5;i<=(long) Math.sqrt(n);i+=2){
            System.out.println("Looping "+i);
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static double calculateInterest(double amount, double interestRate){
        return (amount *(interestRate/100));
    }
}

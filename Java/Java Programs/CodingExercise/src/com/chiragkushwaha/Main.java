package com.chiragkushwaha;

public class Main {

    public static void main(String[] args) {
        System.out.println(checkNumber(3));
    }
    public static String checkNumber(int num){
        if (num>0) return "positive";
        else if (num<0) return "negative";
        else return "zero";
    }
}

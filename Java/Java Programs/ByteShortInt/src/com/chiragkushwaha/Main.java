package com.chiragkushwaha;

public class Main {

    public static void main(String[] args) {
        //variable type -- variable = literal

        //int has width of 32
        int myMinValue=-2_147_483_648;
        int myMaxValue=2_147_483_647;
        int myTotal = (myMinValue/2);
        System.out.println("myTotal = "+myTotal);

        //byte has a width of 8
        byte myMaxByteValue = 127;
        byte myMinByteValue = -128;
        byte myNewByteValue = (byte)(myMinByteValue/2);
        System.out.println("myNewByteValue = "+myNewByteValue);

        //short has a width of 16
        short myMinShortValue = -32768;
        short myMaxShortValue = 32767;
        byte myNewShortValue = (byte)(myMinShortValue/2);
        System.out.println("myNewShortValue = "+myNewShortValue);

        //long has a width of 64
        long myMinLongValue = -9_223_372_036_854_775_808L;
        long myMaxLongValue = 9_223_372_036_854_775_807L;


        byte byteValue= 10;
        short shortValue=20;
        int intValue= 50;

        long longTotal= 50000L + 10L *(byteValue + shortValue +intValue);
        short shortTotal = (short) (1000 + 10 *(byteValue + shortValue +intValue));
        System.out.println("shortTotal = "+shortTotal);
        System.out.println("longTotal = "+longTotal);

    }
}

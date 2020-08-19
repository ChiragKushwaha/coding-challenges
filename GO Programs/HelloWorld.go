package main

import (
	"fmt"
	"time"
)

// func add(x, y int) int {
// 	var out = x + y
// 	return out
// }

// func calc(x, y int) (out1, out2 int) {
// 	out1 = x + y
// 	out2 = x - y
// 	return
// }

// func calc(x, y int) (int, int) {
// 	out1 := x + y
// 	out2 := x - y
// 	return out1, out2
// }
// var a = 9

// func demo() {
// 	var a = 8
// 	fmt.Println("in demo", a)
// }

// func demo(){
// name in small letters
// can be accessed inside the package
// }
// func Demo(){
// name in capital
//can bs accessed outside the package
// }

func main() {
	/////// if else switch /////////
	fmt.Println("When's Saturday?")
	today := time.Now().Weekday()
	switch time.Saturday {
	case today + 0:
		fmt.Println("Today.")
	case today + 1:
		fmt.Println("Tomorrow.")
	case today + 2:
		fmt.Println("In two days.")
	default:
		fmt.Println("Too far away.")
	}
	// num := 2
	// switch num {
	// case 1:
	// 	fmt.Println("One")
	// case 2:
	// 	fmt.Println("Two")
	// default:
	// 	fmt.Println("None")
	// }
	// if num < 5 {
	// 	fmt.Println("HI", num)
	// } else {
	// 	fmt.Println("BYE", num)
	// }
	/////// Math package ///////
	// var num float64 = 12

	// var result = math.Sqrt(num)
	// var intResult = math.Round(result)
	// fmt.Printf("The output is %.2f", result)
	// fmt.Println(intResult)
	/////// exported names////////

	// fmt.Println("Chirag")

	////// variable scope//////
	// demo()
	// fmt.Println("in main", a)

	//////// functions ////////

	// num1 := 5
	// num2 := 4
	// res1, res2 := calc(num1, num2)
	// fmt.Println(res1, res2)
	// result := add(num1, num2)
	// fmt.Println(result)
	// fmt.Println(add(num1, num2))

	///////// loops ////////////

	// for i := 1; i <= 5; i++ {
	// 	fmt.Println("Chirag Kushwaha", i)
	// }

	// i := 1
	// for i <= 5 {
	// 	fmt.Println("Chirag Kushwaha", i)
	// 	i++
	// }
	/////////// variable declareation ///////
	// var num1 int = 2
	// var num2 int = 5
	// const num =2 //create a constant
	// var num1, num2 int
	// var num1 int   //default value 0
	// var num2 int   //default value 0
	// num1, num2 = 3, 4  //initialize on same line

	// var result int = num1 + num2

	// result := 9 //shot hand for "var result = 9" //takes care of both creation and initialization
	// fmt.Print(result)

	/////////// first program ////////
	// fmt.Println("Hello, World")
}

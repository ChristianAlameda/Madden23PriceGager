const cars = [];
function addCars(){
    // how many cars do you want to price
    var a = prompt("How many overalls do you want to price for tax: ")
    var num1 = parseInt(a)
    for(var i = 0; i<num1; i++){
        var car = prompt("What is the price of the car: ")
        var answer = parseInt(car)
        cars.push(answer)
    }

}
function taxCars(){
    for(var i = 0; i<cars.length;i++){
        let taxxed = cars[i]*.90
        console.log("Price before tax: "+ cars[i] +"/n"+ "prices after taxxes: "+taxxed)
}

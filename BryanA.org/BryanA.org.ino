void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop(){
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 serial.println(GurururBot("Good Morning"));
 delay(10000);

}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum = x + y;
  return sum;
}

//write a function that multiplies two integers and returns the total
int multiply(int b, int y){
  int product = b * y;
  return product;
}

//write a function that divides the first parameter by the second
int divide(ind r, int e){
 int quotient = r/e;
return quotient; 
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 10){
 response = "best number"    
  }
  else{
    response = "Not my favorite";
  }
  return response;
}

//chatbot

String GurururBot(String message){
  
  String
  if(message == "Good Afternoon"){ 
    response = "Leave me alone or i will come after you";){ 
  }
  else if(message == "Good Nighty"){
    response = "Go to bed, i hate you unless food is given to me";
  }
  else{
    response = "you need to look in the mirrior again because i think your face is wrong";
  }
  if(message == "who should i talk to next"){
    response = "get a life!!! you might need it.";){
  }
  else if(message == "Why cant i get friends?"){
    response = "Because you are a lonely no life that sits on the computer and talks to me!!!!!";
  }
  else{
    response = "Just go outside you need it";
  }

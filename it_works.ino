#define playerOnePin 22 // pin input for player one
#define playerTwoPin 20 //pin input for player two

#include <Bounce.h>
Bounce playerOne = Bounce(playerOnePin, 10);
Bounce playerTwo = Bounce(playerTwoPin, 10);

void setup () {
  pinMode(playerOnePin, INPUT_PULLUP);
  pinMode(playerTwoPin, INPUT_PULLUP);
}

void loop() {
  playerOne.update();
  playerTwo.update();
//  Serial.println(digitalRead(playerTwoPin));
  
    if(digitalRead(playerOnePin) == LOW) { // if toggle switch is off (LOW)
     
        if(playerOne.fallingEdge() || playerOne.risingEdge()) { // if button 1 is pressed
          
          Serial.println("S");
           Keyboard.press(KEY_S); // press S to lower
           Keyboard.release(KEY_S);
        }

      } 
      
     else{
          if(playerOne.fallingEdge() || playerOne.risingEdge()) {
            
            Serial.println("W");
             Keyboard.press(KEY_W); // press W to raise 
             Keyboard.release(KEY_W);
          }
      }

//      if(digitalRead(playerTwoPin) == LOW) { // if toggle switch is off (LOW)
//
//        // Serial.println(digitalRead(playerTwoPin));
//     
//        if(playerTwo.fallingEdge() || playerTwo.risingEdge()) { // if button 2 is pressed
//          Serial.println("L");
//          
//          
//          //Keyboard.press(KEY_L); //press L to lower
//          //Keyboard.release(KEY_L);
//        }
//
//      } 
//      
//      if(digitalRead(playerTwoPin) == HIGH){
//
//        // Serial.println(digitalRead(playerTwoPin));
//
//        
//        if(playerTwo.fallingEdge() || playerTwo.risingEdge()) {
//          
//          Serial.println("O");
//          // Keyboard.press(KEY_O); //press O to raise
//          // Keyboard.release(KEY_O);
//        }
//      }
}

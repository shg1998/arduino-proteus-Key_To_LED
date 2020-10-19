

#include <Keypad.h>

int led1 = A0;
int led2 = A1;
int led3 = A2;
int led4 = A3;
int led5 = A7;
int led6 = A6;
int led7 = A5;
int led8 = A4;
int led9 = A8;


const int ROW_NUM = 4;
const int COLUMN_NUM = 4;

char keys[ROW_NUM][COLUMN_NUM] = {
  //mapping:    A:/  B:x  C:-  D:+  #:=  *:on/c
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'1','2','3','C'},
  {'*','0','#','D'}
};

byte pin_rows[ROW_NUM] = {13,12,11,10};
byte pin_columns[COLUMN_NUM] = {9,8,7,6};

Keypad keypad = Keypad( makeKeymap(keys),pin_rows,pin_columns,ROW_NUM,COLUMN_NUM);

long Num1,Num2;
float Number;
char key,action;
boolean result = false;

void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  
}


void loop() {

key = keypad.getKey();
 if(key != NO_KEY){
     if(key == '*'){
    Number = Num1 = Num2 = 0;
    result = false;
  }

  if(key == '1'){
   
      Number = 1;
    
  }

  if(key == '2'){
  
      Number = 2;
    
  }

  if(key == '3'){
   
      Number = 3;
 
  }

  if(key == '4'){
    if(Number == 0){
      Number = 4;
    }
  }

  if(key == '5'){
   
      Number = 5;
   
  }

  if(key == '6'){
   
      Number = 6;
   
  }

  if(key == '7'){
    
      Number = 7;
  
  }

  if(key == '8'){
   
      Number = 8;
   
  }

  if(key == '9'){
   
      Number = 9;
 
  }

  if(key == '0'){
    
      Number = 0;
   
  }

  if(key == '#'){
    Num2 = Number;
    result = true;
  }

  if(key == 'A' || key == 'B' || key == 'C' || key == 'D' ){
    Num1 = Number;
    Number = 0;
    if(key == 'A'){
      action = '/';
    }
    
    if(key == 'B'){
      action = '*';
    }

    if(key == 'C'){
      action = '-';
    }

    if(key == 'D'){
      action = '+';
    }
    
    delay(100);
  }
  }
  
  if(Number==1){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
        
      }

      if(Number==2){
       digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }

      if(Number==3){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }

      if(Number==4){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }

      if(Number==5){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, HIGH);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }
      
      if(Number==6){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, HIGH);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }
      
      if(Number==7){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, HIGH);
        digitalWrite(led8, LOW);
        digitalWrite(led9, LOW);
      }

       if(Number==8){
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, HIGH);
        digitalWrite(led9, LOW);
      }

       if(Number==9){
          digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        digitalWrite(led5, LOW);
        digitalWrite(led6, LOW);
        digitalWrite(led7, LOW);
        digitalWrite(led8, LOW);
        digitalWrite(led9, HIGH);
      }
 
          
}

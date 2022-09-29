/* The goal of this is to set the led on pin 12 of arduino uno high after the push on pin 11 is pressed*/  

#define LED_ON 0b00100000
#define BUTTON 0b00010000
//void MyDelay(unsigned long mSecondsApx);

void setup() {
  // put your setup code here, to run once:
  DDRB |= LED_ON; //set output
  DDRB &= -BUTTON; //set input.
  PORTB &= -LED_ON;//set led off.
}

void loop() {
  unsigned char currentstate = 0;
  unsigned char previousstate = 0;
     
  currentstate = PINB & BUTTON;
  if (currentstate && !previousstate)
  {
    PORTB |= LED_ON;
    MyDelay(500);
    PORTB &= -LED_ON;
    MyDelay(500);
    
  }
   previousstate = currentstate;
}
/*void MyDelay(unsigned long mSecondsApx){
  volatile unsigned long i;
  unsigned long endTime = 1000*mSecondsApx;
  for(i=0;i<=endTime;i++);
}*/


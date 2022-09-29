
#define MOTOR_FORWARD 0b00000100
#define MOTOR_BACKWARD 0b00001000
#define BUTTON_FORWARD 0b00010000
#define BUTTON_BACKWARD 0b00100000

void setup() {
  // put your setup code here, to run once:
  DDRD |= MOTOR_FORWARD; //set bit 2 to output 
  DDRD |= MOTOR_BACKWARD; //set bit 3 to output
  PORTD &= -(BUTTON_FORWARD); //set bit 4 portd to input
  PORTD &= -(BUTTON_BACKWARD); //set bit 4 portd to input
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned char currentstate = 0;
  unsigned char previousstate = 0;

  
}


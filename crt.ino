const int phResistor = A0; //Analog pin A0
const int trans = 9;       //Digital pin 9
float val = 255;

void setup() {
   //Start monitor
   Serial.begin(9600);
   //Setup phResistor pin as an analog INPUT
   pinMode(phResistor, INPUT);
   pinMode(trans, OUTPUT);
}

void loop() {
  val = 10 * analogRead(phResistor); //Read photo resistor value
  Serial.println(val);  //Print photo resistor value

  if(val <= 20){
     digitalWrite(trans, HIGH);  
  }
  else{
      digitalWrite(trans, LOW);
  }
}

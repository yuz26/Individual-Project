#define led 13 // define the pin for the flashing led
#define buzzer 2 // pin where we connect the buzzer
bool b = 0; // variable that lets us know when a pulse changes from high to low.

void setup() {
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600);

}

void loop() {
int read; //variable where we store the value read from pin A0
read = analogRead(0); // analog reading of pin A0
Serial.println(read); // we send the read value to the serial plotter

// we turn on and off the buzzer and the led at the rhythm of the pulses
if(read > 500 && b==0){digitalWrite(led, HIGH); digitalWrite(buzzer, HIGH); b = 1;}

if(read < 300 && b==1){digitalWrite(led, LOW); digitalWrite(buzzer, LOW); b=0; }

delay(2);
}

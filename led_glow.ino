//this is my first iot program

#define my led 7 
// global declaration, LED pin no.7

void setup() {

 pinMode (my led, OUTPUT);

void loop() {

digitalWrite(my led, HIGH);
}

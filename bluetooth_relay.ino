int LED_PIN = 13;
int relePin1 = 2;
int relePin2 = 3;
int relePin3 = 4;
int relePin4 = 5;

int val;

void setup()
{
  pinMode(relePin1, OUTPUT);
  pinMode(relePin2, OUTPUT);
  pinMode(relePin3, OUTPUT);
  pinMode(relePin4, OUTPUT);
  Serial.begin(9600);
  delay(250); // wait half a sec
}

void loop() 
{ 
  Serial.flush();
  Serial.println();
  if(Serial.available() );   // if data is available
  {
    val = Serial.read();
  }
  if(val == '1')
  {
    digitalWrite(relePin1, HIGH);
    Serial.println("Relay1 ON");
  }
  if(val == '2')
   {
     digitalWrite(relePin1, LOW);
     Serial.println("Relay1 OFF");
   if(val == '3')
   {
     digitalWrite(relePin2, HIGH);
     Serial.println("Relay2 ON");
   if(val == '4')
   {
     digitalWrite(relePin2, LOW);
     Serial.println("Relay2 OFF");
   if(val == '5')
   {
     digitalWrite(relePin3, HIGH);
     Serial.println("Relay3 ON");
   if(val == '6')
   {
     digitalWrite(relePin3, LOW);
     Serial.println("Relay3 OFF");
   if(val == '7')
   {
     digitalWrite(relePin4, HIGH);
     Serial.println("Relay4 ON");
   if(val == '8')
   {
     digitalWrite(relePin4, LOW);
     Serial.println("Relay4 OFF");
   }
    Serial.flush();
    delay(20);
}

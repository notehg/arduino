// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
 
 
   
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);

 
  
   
  
  digitalWrite(8, HIGH);
  delay(1000); // Wait for 15000 millisecond(s)
  digitalWrite(8, LOW);
 
  


}
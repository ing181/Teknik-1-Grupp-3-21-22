void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Variabler
  // Variabler för heltal
  int heltal; // Deklareras
  heltal = 5; // Ges ett värde
  Serial.print(heltal);
  // Vilkor
  // Om det som står mellan () är sant
  // görs det som finns mellan {}
  // 
   if (heltal == 5)
   {  // Text som ska skrivas ut ska
      // ha "" (dubbelfnuttar) runt sig
      Serial.print("Sant");
      // Skriver ut en radbrytning
      // Ett enda tecken, ja \n räknas som ett tecken
      // ska ha '' enkelfnuttar runt sig
      Serial.print('\n');
   }


  
}

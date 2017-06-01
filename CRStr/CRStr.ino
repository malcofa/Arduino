#include "ObtenerString.cpp"
#include "Encryp.cpp"
ObtenerString obt;
Encryp enc;
void setup() {
  Serial.begin(57600);
}

void loop() {
  obt.readingSer();
  String strpalabras = obt.getRead();
  if ((strpalabras.length()) > 0) {
    Serial.println(strpalabras);
    Serial.println(strpalabras.length());
    obt.setRead("");
    enc.setData(strpalabras);
    Serial.println(enc.EncString());
    //Serial.println(enc.DesencString());
  }
}

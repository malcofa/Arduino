#include "ObtenerString.cpp"
#include "Encryp.cpp"
Encryp enc;
ObtenerString obt;
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
    enc.EncString();
    Serial.println(enc.DesencString());
  }
}

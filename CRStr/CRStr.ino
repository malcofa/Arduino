#include "ObtenerString.cpp"
ObtenerString obt;
void setup() {
  Serial.begin(9600);
}

void loop() {
  obt.readingSer();
  if ((obt.getRead().length()) > 0) {
    Serial.println(obt.getRead());
    obt.setRead("");
  }
}

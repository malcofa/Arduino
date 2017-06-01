#include <arduino.h>
class ObtenerString {
  private:
    String readString;
    String ret;
    char conc[];
  public:
    void readingSer() {
      while (Serial.available()) {
        delay(2);  //delay to allow byte to arrive in input buffer
        char c = Serial.read();
        readString += c;
      }
    };
    String getRead() {
      return readString;
    };
    void setRead(String str){
      readString = str;
    }
};

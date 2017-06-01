#include <AESLib.h>
#include <arduino.h>

class Encryp{
  private:
    uint8_t key[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    char data[];
  public:
    void setData(String str){
      str.toCharArray(data,5); //Corregir, es universal
    }
    char EncString(){
      aes128_enc_single(key, data);
    }
    char DesencString(){
      aes128_enc_single(key, data);
    }
};


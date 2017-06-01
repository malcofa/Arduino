#include <aes.h>
#include <aes128_dec.h>
#include <aes128_enc.h>
#include <aes192_dec.h>
#include <aes192_enc.h>
#include <aes256_dec.h>
#include <aes256_enc.h>
#include <AESLib.h>
#include <aes_dec.h>
#include <aes_enc.h>
#include <aes_invsbox.h>
#include <aes_keyschedule.h>
#include <aes_sbox.h>
#include <aes_types.h>
#include <bcal-basic.h>
#include <bcal-cbc.h>
#include <bcal-cmac.h>
#include <bcal-ofb.h>
#include <bcal_aes128.h>
#include <bcal_aes192.h>
#include <bcal_aes256.h>
#include <blockcipher_descriptor.h>
#include <gf256mul.h>
#include <keysize_descriptor.h>
#include <memxor.h>
#include <arduino.h>

class Encryp{
  private:
    uint8_t key[3] = {0, 1, 2};
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


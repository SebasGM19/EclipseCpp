#include <stdio.h>
#include <stdint.h>
#include <string>
#include "I2C.hpp"


void data_set(void){

}


int main(void){

    uint8_t My_data_get1[10] = {0};
    uint8_t My_data_get2[10] = {0};

    I2C My_I2C_OP1(I2C_alt1, 1000, Master, (uint8_t*)"static 1");

    I2C* My_I2C_OP2 = new I2C(I2C_alt2, 1000, Master, (uint8_t*)"dinamic 2");


    My_I2C_OP1.I2C_Read(0x04, My_data_get1);

    My_I2C_OP2->I2C_Read(0x45,My_data_get2);

    delete My_I2C_OP2;

    
    return 0;
}

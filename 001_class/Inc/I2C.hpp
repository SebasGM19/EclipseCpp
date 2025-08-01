

#ifndef I2C_HPP
#define I2C_HPP

#include <stdint.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>

typedef enum
{
    I2C_alt1 = 1U,
    I2C_alt2  = 2U,
    I2C_alt3 = 3U,
    
}I2C_alt_t;


typedef enum{
    Master,
    Slave

}I2C_mode_t;

class I2C{

    private:
        I2C_alt_t alternativa;
        uint32_t baudrate;
        I2C_mode_t Mode;
        uint8_t *nombre;

    
    public:


        I2C(I2C_alt_t alt, uint32_t baudRat, I2C_mode_t mode_, uint8_t * nombre_);

        ~I2C();

        uint32_t I2C_Read(uint8_t slave, uint8_t *data_get);

};

#endif

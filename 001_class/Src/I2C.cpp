#include "I2C.hpp"


I2C::I2C(I2C_alt_t alt, uint32_t baudRat, I2C_mode_t mode_, uint8_t * nombre_) : 
    alternativa(alt),
    baudrate(baudRat),
    Mode(mode_),
    nombre(nombre_){



}

I2C::~I2C() = default;


uint32_t I2C::I2C_Read(uint8_t slave, uint8_t *data_get){
    

    std::cout<<"alternativa: " << this->alternativa <<std::endl;
    strcpy((char *)data_get, (const char*)this->nombre);
    std::cout<<data_get<<std::endl;
    return 0;

}

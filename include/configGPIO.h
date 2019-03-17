#ifndef _CONFIGGPIO_H
#define _CONFIGGPIO_H

void pinMode (char * pin, char * MODE);
void digitalWrite(char * pin, char * value); 
int digitalRead(char * pin);
void blink(char * pin, int freq, int duration); 

#endif

/*

#define BANK (gpio>>5)
#define BIT  (1<<(gpio&0x1F))

int gpioRead(unsigned gpio)
{
   DBG(DBG_USER, "gpio=%d", gpio);

   CHECK_INITED;

   if (gpio > PI_MAX_GPIO)
      SOFT_ERROR(PI_BAD_GPIO, "bad gpio (%d)", gpio);

   if ((*(gpioReg + GPLEV0 + BANK) & BIT) != 0) return PI_ON;
   else                                         return PI_OFF;
}

*/
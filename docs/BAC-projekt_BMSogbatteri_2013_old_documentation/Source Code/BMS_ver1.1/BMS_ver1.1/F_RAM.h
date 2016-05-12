/*
 * ITAMS_Group4
 *
 * Created: 21-03-2013 12:36:10
 * Author: Jonas Nyborg
 */ 

//setup SPI: Master mode, MSB first, SCK idle low
//Double speed not enabled
#define FRAM_SPI_speed     SPCR = 0x50; 
#define FRAM_enable {PORTB &= ~(1<<PB0);}
#define FRAM_disable {PORTB |= (1<<PB0);}	

void FRAM_init(void);
void WriteFRAM(unsigned long address, unsigned char data);
unsigned char ReadFRAM(unsigned long address);
void FRAM_sleep (void);
#include <avr/io.h>

#define F_CPU 16000000
#define BLINK_DELAY_MS 5000

#include <util/delay.h>

int main (void)
{
  // Arduino digital pin 13 (pin 5 of PORTB) for output
  DDRB |= 0B100000; // PORTB5
  
  while(1) {
    // turn LED on
    PORTB |= 0B100000; // PORTB5
    _delay_ms(BLINK_DELAY_MS);
    
    // turn LED off
    PORTB &= ~ 0B100000; // PORTB5
    _delay_ms(BLINK_DELAY_MS);
  }
}
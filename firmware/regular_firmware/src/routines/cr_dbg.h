#ifndef __CR_DBG_H_
#define __CR_DBG_H_

#include "stm32f10x.h"
#include "FreeRTOS.h"
#include "croutine.h"
#include "queue.h"

void setRed( uint8_t val );
uint8_t red( void );
void setGreen( uint8_t val );
uint8_t green( void );

void dbgSetLow( void );
void dbgSetHigh( void );
void dbgSetPulses( uint8_t low, uint8_t high, uint32_t cnt );
void dbgStop( void );

void crDbg( xCoRoutineHandle xHandle, 
            unsigned portBASE_TYPE uxIndex );


#endif



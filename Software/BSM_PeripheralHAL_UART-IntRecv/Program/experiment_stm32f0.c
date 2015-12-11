/*=====================================================================================================*/
/*=====================================================================================================*/
#include "drivers\stm32f0_system.h"
#include "modules\module_serial.h"

#include "experiment_stm32f0.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
void System_Init( void )
{
  HAL_Init();
  Serial_Config();

  Delay_100ms(1);
  printf("\r\nHello World!\r\n\r\n");
}

int main( void )
{
  System_Init();

  while(1) {

  }
}
/*====================================================================================================*/
/*====================================================================================================*/
void Serial_evenCallBack( void )
{
  uint8_t recvData = 0;

  recvData = Serial_RecvByte();
  if(recvData == 0x0D)
    Serial_SendStr("\r\n");
  else
    Serial_SendByte(recvData);
}
/*=====================================================================================================*/
/*=====================================================================================================*/

/*=====================================================================================================*/
/*=====================================================================================================*/
#include "drivers\stm32f0_system.h"

#include "beanSproutM.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
int main( void )
{
  SystemInit();
  HAL_InitTick();

  BSM_Init();
  BSM_Loop();
}
/*=====================================================================================================*/
/*=====================================================================================================*/

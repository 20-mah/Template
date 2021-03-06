/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名  ： led
* 作者    ： 张继英
* 版本    ： V0.0.1
* 时间    ： 2020/10/20
* 描述    ： led驱动文件
********************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include "led.h"
/* 宏定义 ----------------------------------------------------------------*/
#define LED1  P1_0
#define LED2  P1_1
#define LED3  P1_4
#define LED_ON   1
#define LED_OFF  0

/* 函数 ------------------------------------------------------------------*/
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 函数名  ： LedInit
* 参数    ： void
* 返回    ： void
* 作者    ： 张继英
* 时间    ： 2020/10/20
* 描述    ： 函数说明
********************************************************************/
void LedInit(void)
{
    //D1,D2,D3 功能选择寄存器 P1SEL的0,1,4位设置为通用IO (清零)
    P1SEL &=0xEC;
    //D1,D2,D3 方向寄存器 P1DIE DE 0,1,4位设置为输出 （置1）
    P1DIR |=0x13;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 函数名  ： LedOn
* 参数    ： unsigned char ucLedNum  0:所有灯 1：D1 2: D2 3:D3
* 返回    ： void
* 作者    ： 张继英
* 时间    ： 2020/10/20
* 描述    ： 开灯
********************************************************************/
void LedOn(unsigned char ucLedNum)
{
    if( LED_ALL_E == ucLedNum )
    {
        LED1 = LED_ON;
        LED2 = LED_ON;
        LED3 = LED_ON;
    }
    else if( LED_LED1_E == ucLedNum )
    {
        LED1 = LED_ON;
    }
    else if( LED_LED2_E == ucLedNum )
    {
        LED2 = LED_ON;
    }
    else if( LED_LED3_E == ucLedNum )
    {
        LED3 = LED_ON;
    }
    else
    {
        //do thing
    }  
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 函数名  ： LedOff
* 参数    ： unsigned char ucLedNum  0:所有灯 1：D1 2: D2 3:D3
* 返回    ： void
* 作者    ： 张继英
* 时间    ： 2020/10/20
* 描述    ： 关灯
********************************************************************/
void LedOff(unsigned char ucLedNum)
{
    if( LED_ALL_E == ucLedNum )
    {
        LED1 = LED_OFF;
        LED2 = LED_OFF;
        LED3 = LED_OFF;
    }
    else if( LED_LED1_E == ucLedNum )
    {
        LED1 = LED_OFF;
    }
    else if( LED_LED2_E == ucLedNum )
    {
        LED2 = LED_OFF;
    }
    else if( LED_LED3_E == ucLedNum )
    {
        LED3 = LED_OFF;
    }
    else
    {
        //do thing
    }  
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 函数名  ： LedTaggle
* 参数    ： unsigned char ucLedNum
* 返回    ： void
* 作者    ： 张继英
* 时间    ： 2020/10/20
* 描述    ： 灯色翻转
********************************************************************/
void LedTaggle(unsigned char ucLedNum)
{
     if( LED_ALL_E == ucLedNum )
    {
        LED1 = !LED_OFF;
        LED2 = !LED_OFF;
        LED3 = !LED_OFF;
    }
    else if( LED_LED1_E == ucLedNum )
    {
        LED1 = !LED_OFF;
    }
    else if( LED_LED2_E == ucLedNum )
    {
        LED2 = !LED_OFF;
    }
    else if( LED_LED3_E == ucLedNum )
    {
        LED3 = !LED_OFF;
    }
    else
    {
        //do thing
    }  
}



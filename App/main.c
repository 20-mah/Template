/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * 文件名  ： main
 * 作者    ： 张继英
 * 版本    ： V0.0.1
 * 时间    ： 2020/10/20
 * 描述    ： 主函数文件
 ********************************************************************
 * 副本
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include <ioCC2530.h>
/* 函数 ------------------------------------------------------------------*/
#include <ioCC2530.h>  
#define LED1 P1_0     // P1_0定义为P1.0
#define LED2 P1_1     // P1_1定义为P1.1
#define LED3 P1_4     
#define LED_ON  1 
#define LED_OFF 0
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 函数名  ：delay
 * 参数    ：unsigned
 * 返回    ：void
 * 作者    ：张继英
 * 时间    ：2020/10/20
 * 描述    ：延时函数
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
unsigned int temp = 0;//1ms精确定时
void delay(unsigned int time)
{
    unsigned int i = 0;
    unsigned int j;
    for(i = 0; i < time; i++)
    {
        for(j = 0; j < 475; j++)
        {       
            asm("NOP");   
            asm("NOP");
            asm("NOP");
        }  
    } 
}
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 函数名：main
 * 参数：void
 * 返回：void
 * 描述：主函数
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void main(void)
{
    P1SEL &= ~(0x03);
    P1DIR |= 0x03 ;   
    while(1)
    {
        LED1 = LED_ON;
        LED2 = LED_OFF;
        LED3 = LED_OFF;   
        delay(1000);
        LED1 = LED_OFF;
        LED2 = LED_ON;
        LED3 = LED_OFF;   
        delay(1000);
        LED1 = LED_OFF;
        LED2 = LED_OFF;
        LED3 = LED_ON;
        delay(1000);
    }    
}

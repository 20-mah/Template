/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* �ļ���  �� led
* ����    �� �ż�Ӣ
* �汾    �� V0.0.1
* ʱ��    �� 2020/10/20
* ����    �� led�����ļ�
********************************************************************
* ����
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include "led.h"
/* �궨�� ----------------------------------------------------------------*/
#define LED1  P1_0
#define LED2  P1_1
#define LED3  P1_4
#define LED_ON   1
#define LED_OFF  0

/* ���� ------------------------------------------------------------------*/
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* ������  �� LedInit
* ����    �� void
* ����    �� void
* ����    �� �ż�Ӣ
* ʱ��    �� 2020/10/20
* ����    �� ����˵��
********************************************************************/
void LedInit(void)
{
    //D1,D2,D3 ����ѡ��Ĵ��� P1SEL��0,1,4λ����Ϊͨ��IO (����)
    P1SEL &=0xEC;
    //D1,D2,D3 ����Ĵ��� P1DIE DE 0,1,4λ����Ϊ��� ����1��
    P1DIR |=0x13;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* ������  �� LedOn
* ����    �� unsigned char ucLedNum  0:���е� 1��D1 2: D2 3:D3
* ����    �� void
* ����    �� �ż�Ӣ
* ʱ��    �� 2020/10/20
* ����    �� ����
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
* ������  �� LedOff
* ����    �� unsigned char ucLedNum  0:���е� 1��D1 2: D2 3:D3
* ����    �� void
* ����    �� �ż�Ӣ
* ʱ��    �� 2020/10/20
* ����    �� �ص�
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
* ������  �� LedTaggle
* ����    �� unsigned char ucLedNum
* ����    �� void
* ����    �� �ż�Ӣ
* ʱ��    �� 2020/10/20
* ����    �� ��ɫ��ת
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



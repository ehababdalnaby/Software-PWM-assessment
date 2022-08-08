/*****************************************************************************************************/
/*                                                                                                   */
/*                                            Author:Ehab Abdo				                         */
/*												Date:Date:8/8/2022										 */
/*												 SWC:Peripherals									 */
/*											 Version:1.0											 */
/*																									 */
/*																									 */
/*****************************************************************************************************/

#ifndef ARM_PERIPHERALS_H_
#define ARM_PERIPHERALS_H_

#define RCC_BASE_ADDRESS   0x40021000

typedef struct 
{                
	volatile uint32_t RCC_CR;
	volatile uint32_t RCC_CFGR;
	volatile uint32_t RCC_CIR;
    volatile uint32_t RCC_APB2RSTR;
    volatile uint32_t RCC_APB1RSTR;
    volatile uint32_t RCC_AHBENR;
    volatile uint32_t RCC_APB2ENR;
    volatile uint32_t RCC_APB1ENR;
    volatile uint32_t RCC_BDCR;
	volatile uint32_t RCC_CSR;
}RCC_RegDef_t;

#define RCC       ((RCC_RegDef_t*)RCC_BASE_ADDRESS)
       /*******************************************************/
#define GPIOA_BASE_ADDRESS 	0x40010800
#define GPIOB_BASE_ADDRESS 	0x40010C00
#define GPIOC_BASE_ADDRESS 	0x40011000

typedef struct 
{ 
	volatile 	uint32_t CRL;
	volatile 	uint32_t CRH;
	volatile 	uint32_t IDR;
	volatile 	uint32_t ODR;
	volatile 	uint32_t BSRR;
	volatile 	uint32_t BRR;
	volatile 	uint32_t LCKR;
}GPIO_RegDef_t;

#define GPIOA       ((GPIO_RegDef_t*)GPIOA_BASE_ADDRESS)
#define GPIOB       ((GPIO_RegDef_t*)GPIOB_BASE_ADDRESS)
#define GPIOC       ((GPIO_RegDef_t*)GPIOC_BASE_ADDRESS)
       /*******************************************************/

#define STK_BASE_ADDRESS   0xE000E010
typedef struct
{
	volatile 	uint32_t CTRL;
	volatile 	uint32_t LOAD;
	volatile 	uint32_t VAL;
	volatile 	uint32_t CALIB;
}STK_RegDef_t;

#define STK       ((STK_RegDef_t*)STK_BASE_ADDRESS)


       /*******************************************************/
#define USART1_BASE_ADDRESS   0x40013800
#define USART2_BASE_ADDRESS   0x40004400
#define USART3_BASE_ADDRESS   0x40004800

typedef struct
{
	volatile uint32_t SR   ;
	volatile uint32_t DR   ;
	volatile uint32_t BRR  ;
	volatile uint32_t CR1  ;
	volatile uint32_t CR2  ;
	volatile uint32_t CR3  ;
	volatile uint32_t GTPR ;
}USART_RegDef_t;


#define USART1       ((USART_RegDef_t*)USART1_BASE_ADDRESS)
#define USART2       ((USART_RegDef_t*)USART2_BASE_ADDRESS)
#define USART3       ((USART_RegDef_t*)USART3_BASE_ADDRESS)

       /*******************************************************/
#define NVIC_BASE_ADDRESS   0xE000E100

typedef struct
{
	volatile uint32_t ISER[8];
	volatile uint32_t RESERVED1[24];
	volatile uint32_t ICER[8];
	volatile uint32_t RESERVED2[24];
	volatile uint32_t ISPR[8];
	volatile uint32_t RESERVED3[24];
	volatile uint32_t ICPR[8];
	volatile uint32_t RESERVED4[24];
	volatile uint32_t IABR[8];
	volatile uint32_t RESERVED5[56];
	volatile uint8_t  IPR[240];
	volatile uint32_t RESERVED6[643];
	volatile uint32_t  STIR;

}NVIC_RegDef_t;

#define NVIC       ((NVIC_RegDef_t*)NVIC_BASE_ADDRESS)
       /*******************************************************/
#define DMA_BASE_ADDRESS   0x40020000
typedef struct
{
	volatile uint32_t CCR;
	volatile uint32_t CNDTR;
	volatile uint32_t CPAR;
	volatile uint32_t CMAR;
	volatile uint32_t DMA_RESERVED;
}Channel_RegDef_t;
typedef struct
{
	volatile uint32_t   	 ISR;
	volatile uint32_t 	 IFCR;
	Channel_RegDef_t CHANNEL[7];
}DMA_RegDef_t;


#define DMA       ((DMA_RegDef_t*)DMA_BASE_ADDRESS)


#endif

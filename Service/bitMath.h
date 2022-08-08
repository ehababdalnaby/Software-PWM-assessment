/*****************************************************************************************************/
/*                                                                                                   */
/*                                            Author:Ehab Abdo				                         */
/*												Date:Date:8/8/2022									 */
/*												 SWC:Peripherals									 */
/*											 Version:1.0											 */
/*																									 */
/*																									 */
/*****************************************************************************************************/


#ifndef BITMATH_H_
#define BITMATH_H_


/*For a single bit in the register*/
#define SETBit(REG,BIT_NO)	REG |= (1<<(BIT_NO))   
#define CLRBit(REG,BIT_NO)	REG &= ~(1<<(BIT_NO)) 
#define TGLBit(REG,BIT_NO)	REG ^= (1<<(BIT_NO))
#define GETBit(REG,BIT_NO)	(((REG) >> (BIT_NO))& 0x01) 

/*For custom number of bits in the register*/
#define SETBits(REG,bMsk)	REG |= (bMsk)
#define CLRBits(REG,bMsk)	REG &= (~(bMsk))
#define TGLBits(REG,bMsk)	REG ^= (bMsk)

/*For all bits in the register*/
#define SETALLBits(REG)		REG = (0xFF)
#define CLRALLBits(REG)		REG = (0x00)
#define TGLALLBits(REG)		REG ^= (0xFF)



 





#endif /* BITMATH_H_ */

/*
 * dataTypes.h
 *
 * Created: 8/18/2021 9:54:15 PM
 *  Author: Ehab Abdo
 */ 


#ifndef DATATYPES_H_
#define DATATYPES_H_

typedef unsigned char 		 uint8_t;
typedef signed char 		 sint8_t;
typedef unsigned short int 	 uint16_t;
typedef signed short int 	 sint16_t;
typedef unsigned long int	 uint32_t;
typedef signed long int		 sint32_t;
typedef float				 f32;
typedef double				 f64;
typedef long double			 f128;

#define STD_TYPE_OK		1
#define STD_TYPE_NOK	0
#define STD_TYPES_OK	1
#define STD_TYPES_NOK	0

#define	Enable			1
#define Disable			0


#define NULL                   ((void*)0)
typedef enum{FALSE,TRUE}BOOL;





#endif /* DATATYPES_H_ */

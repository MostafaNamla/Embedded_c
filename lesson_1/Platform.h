/* platform types of data type */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>



#ifndef _Bool
#define _Bool unsigned char
#endif


#define CPU_TYPE_8 			8
#define CPU_TYPE_16 		16
#define CPU_TYPE_32 		32
#define MSB_FIRST 			0
#define LSB_FIRST 			1
#define HIGH_BYTE_FIRST 	0
#define LOW_BYTE_FIRST 		1


#define CPU_TYPE            CPU_TYPE_32
#define CPU_BIT_ORDER       MSB_FIRST
#define CPU_BYTE_ORDER      HIGH_BYTE_FIRST



#ifndef False
#define False		(boolean)false
#endif
#ifndef True
#define True		(boolean)true
#endif

typedef _Bool             Boolean;

/* unsigned*/

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;

/* signed*/

typedef signed  char       sint8;
typedef signed  short      sint16;
typedef signed  int        sint32;

typedef signed  long long  sint64;


typedef uint_least8_t       uint8_least;
typedef uint_least16_t      uint16_least;
typedef uint_least32_t      uint32_least;
typedef int_least8_t        sint8_least;
typedef int_least16_t       sint16_least;
typedef int_least32_t       sint32_least;

/*REAL NUMBER*/

typedef float 	float32;
typedef double 	float64;

/*volatile types*/

typedef volatile int8_t		 vint8_t;
typedef volatile uint8_t 	 vuint8_t;
typedef volatile int16_t 	 vint16_t;
typedef volatile uint16_t	 vuint16_t;
typedef volatile int32_t 	 vint32_t;
typedef volatile uint32_t 	 vuint32_t;
typedef volatile int64_t 	 vint64_t;
typedef volatile uint64_t 	 vuint64_t;


#endif

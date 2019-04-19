#ifndef BITMAIPULATION_H_
#define BITMANIPULATION_H_
#define SETBIT(reg, bit_number) (reg)|=(1<<(bit_number))
#define CLRBIT(reg, bit_number) (reg)&=(~(1<<(bit_number)))
#define TOGGLEBIT(reg,bit_number) (reg)^=(1<<(bit_number))
#define GETBIT(reg,bit_number) (reg)=((reg &(1<<(bit_number)))>>bit_number)

#endif
#ifndef _ASM_SEGMENT_H
#define _ASM_SEGMENT_H
//内核代码段和数据段寄存器RPL均为0，index为2，3，TI为0，即使用GDT里面2，3个段描述符
#define __KERNEL_CS	0x10
#define __KERNEL_DS	0x18
//用户代码段和数据段寄存器RPL均为3，index为4，5，TI为0，即使用GDT里面第4，5个段描述符
#define __USER_CS	0x23
#define __USER_DS	0x2B

#endif

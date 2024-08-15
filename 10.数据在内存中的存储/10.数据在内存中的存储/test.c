#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//一、整数在内存中的存储
//整数的2进制表示方法有三种：原码、反码、补码
//有符号的整数，三种表示方法均有符号位和数值位两部分，符号位0表示正，1表示负，最高的一位表示符号位，剩余都是数值位
//正整数的原反补都相同
//负整数的三种表示方法各不同
//原码：直接将数值按正负数的形式翻译成二进制得到的就是原码
//反码：将原码符号位不变，其他位依次按位取反
//补码：反码+1
//对于整数来说，内存中存放的是补码
//计算使用的是内存中的二进制，计算使用的就是补码




//二、大小端字节序和字节序判断
//1.什么是大小端
//大端存储：是指数据的低位字节内容保存在内存的高地址处，而数据的高位字节内容保存在内存的低地址处
//小端存储：是指数据的低位字节内容保存在内存的低地址处，而数据的高位字节内容保存在内存的高地址处
int main()
{
	int n = 0x11223344;
	return 0;
}
//在VS环境下，是小端存储




//三、浮点数在内存中的存储

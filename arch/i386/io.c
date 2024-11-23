/* $Id$ */

#include <arch/io.h>
#include <arch/types.h>

uint8_t inb(uint16_t port){
	uint8_t ret;
	asm volatile("inb %1, %0" : "=a"(ret) : "Nd"(port) : "memory");
	return ret;
}

void outb(uint16_t port, uint8_t val){
	asm volatile("outb %0, %1" : : "a"(val), "Nd"(port) : "memory");
}

uint16_t inw(uint16_t port){
	uint16_t ret;
	asm volatile("inw %1, %0" : "=a"(ret) : "Nd"(port) : "memory");
	return ret;
}

void outw(uint16_t port, uint16_t val){
	asm volatile("outw %0, %1" : : "a"(val), "Nd"(port) : "memory");
}

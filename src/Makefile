#
# Makefile of the n-boot
#
# Copyright (c) 2005-2008  Ingenic Semiconductor Inc.
#

OBJS	:= head.o nand_boot.o cpu.o jz_serial.o \
	   jz4730.o jz4730_nand.o jz4730_board.o \
	   jz4740.o jz4740_nand.o jz4740_board.o

CROSS	:= mipsel-linux-

CFLAGS	:= -O2 -G 0 -mno-abicalls -fno-pic -mips32 -I../include -I../
AFLAGS	= -D__ASSEMBLY__ $(CFLAGS)
LDFLAGS	:= -T ld.script -nostdlib -EL

.c.o:
	$(CROSS)gcc $(CFLAGS) -c $< -o $@
.S.o:
	$(CROSS)gcc $(AFLAGS) -c $< -o $@

n-boot.bin: n-boot
	$(CROSS)objdump -D n-boot $< > n-boot.dump
	$(CROSS)objcopy -O binary $< $@

n-boot: $(OBJS)
	$(CROSS)ld $(LDFLAGS) $^ -o $@

clean:
	rm -fr *.o n-boot n-boot.bin n-boot.dump


/*
 * jz4730_board.h
 *
 * JZ4730 board definitions.
 *
 * Copyright (c) 2005-2008 Ingenic Semiconductor Inc.
 *
 */
#ifndef __JZ4730_BOARD_H__
#define __JZ4730_BOARD_H__

/*-------------------------------------------------------------------
 * Frequency of the external OSC in Hz.
 */
#define CFG_EXTAL		12000000

/*-------------------------------------------------------------------
 * CPU speed.
 */
#define CFG_CPU_SPEED		336000000

/*-------------------------------------------------------------------
 * Serial console.
 */
#define CFG_UART_BASE		UART3_BASE

#define CONFIG_BAUDRATE		9600

/*-------------------------------------------------------------------
 * SDRAM info.
 */

// SDRAM paramters
#define CFG_SDRAM_BW16		0	/* Data bus width: 0-32bit, 1-16bit */
#define CFG_SDRAM_BANK4		1	/* Banks each chip: 0-2bank, 1-4bank */
#define CFG_SDRAM_ROW		13	/* Row address: 11 to 13 */
#define CFG_SDRAM_COL		9	/* Column address: 8 to 12 */
#define CFG_SDRAM_CASL		2	/* CAS latency: 2 or 3 */

// SDRAM Timings, unit: ns
#define CFG_SDRAM_TRAS		45	/* RAS# Active Time */
#define CFG_SDRAM_RCD		20	/* RAS# to CAS# Delay */
#define CFG_SDRAM_TPC		20	/* RAS# Precharge Time */
#define CFG_SDRAM_TRWL		7	/* Write Latency Time */
#define CFG_SDRAM_TREF		7812	/* Refresh period: 8192 refresh cycles/64ms */

/*-------------------------------------------------------------------
 * Linux kernel command line.
 */
#define CFG_CMDLINE		"mem=64M console=ttyS3,9600n8 ip=dhcp nfsroot=192.168.1.20:/stdev/development/nfsroot/pmp-root rw ethaddr=00:12:11:21:00:01"

#endif /* __JZ4730_BOARD_H__ */

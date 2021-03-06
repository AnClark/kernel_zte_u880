/*
 *  linux/arch/arm/mach-mmp/clock.h
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef __MACH_CLOCK_H
#define __MACH_CLOCK_H

#include <asm/clkdev.h>

struct clkops {
	void			(*enable)(struct clk *);
	void			(*disable)(struct clk *);
	unsigned long		(*getrate)(struct clk *);
	int			(*setrate)(struct clk *, unsigned long);
};

struct clk {
	const struct clkops	*ops;
	void __iomem		*clk_rst; /* clock/reset register */
	int			fnclksel; /* functional clock select (APBC) */
	uint32_t		enable_val; /* register value to enable (APMU) */
	unsigned long		rate;
	int			enabled;
};

extern struct clkops apbc_clk_ops;
extern struct clkops apbc_pwm_clk_ops;
extern struct clkops apbc_uart_clk_ops;
extern struct clkops apmu_clk_ops;
extern struct clkops pseudo_clk_ops;
extern struct clkops u2o_clk_ops;
extern struct clkops nand_clk_ops;
extern struct clkops u2h_clk_ops;
extern struct clkops smc_clk_ops;
extern struct clkops cf_clk_ops;
extern struct clkops gc500_clk_ops;
extern struct clkops gc300_clk_ops;
extern struct clkops sdh_clk_ops;

#define APBC_CLK(_name, _reg, _fnclksel, _rate)			\
struct clk clk_##_name = {					\
		.clk_rst	= (void __iomem *)APBC_##_reg,	\
		.fnclksel	= _fnclksel,			\
		.rate		= _rate,			\
		.ops		= &apbc_clk_ops,		\
	}

#define APBC_UART_CLK(_name, _reg, _rate)			\
struct clk clk_##_name = {					\
		.clk_rst	= (void __iomem *)APBC_##_reg,	\
		.fnclksel	= 1,				\
		.rate		= _rate,			\
		.ops		= &apbc_uart_clk_ops,		\
	}

#define APBC_PWM_CLK(_name, _reg, _fnclksel, _rate)		\
struct clk clk_##_name = {					\
		.clk_rst	= (void __iomem *)APBC_##_reg,	\
		.fnclksel	= _fnclksel,			\
		.rate		= _rate,			\
		.ops		= &apbc_pwm_clk_ops ,		\
	}

#define APMU_CLK(_name, _reg, _eval, _rate)			\
struct clk clk_##_name = {					\
		.clk_rst	= (void __iomem *)APMU_##_reg,	\
		.rate		= _rate,			\
		.enable_val	= _eval,			\
		.ops		= &apmu_clk_ops,		\
	}

#define PSEUDO_CLK(_name, _reg, _eval, _rate)			\
struct clk clk_##_name = {					\
		.rate		= _rate,			\
		.enable_val	= _eval,			\
		.ops		= &pseudo_clk_ops,		\
	}

#define APMU_CLK_OPS(_name, _reg, _rate, _ops)			\
struct clk clk_##_name = {					\
		.clk_rst	= (void __iomem *)APMU_##_reg,	\
		.rate		= _rate,			\
		.ops		= _ops,				\
	}

#define INIT_CLKREG(_clk, _devname, _conname)			\
	{							\
		.clk		= _clk,				\
		.dev_id		= _devname,			\
		.con_id		= _conname,			\
	}

extern void clks_register(struct clk_lookup *, size_t);
extern struct clk clk_pxa168_gpio;
extern struct clk clk_pxa168_timers;
#endif /* __MACH_CLOCK_H */

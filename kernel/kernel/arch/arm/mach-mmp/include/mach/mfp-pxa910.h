#ifndef __ASM_MACH_MFP_PXA910_H
#define __ASM_MACH_MFP_PXA910_H

#include <mach/mfp.h>

#define MFP_DRIVE_VERY_SLOW	(0x0 << 13)
#define MFP_DRIVE_SLOW		(0x2 << 13)
#define MFP_DRIVE_MEDIUM	(0x4 << 13)
#define MFP_DRIVE_FAST		(0x6 << 13)


#define GPIO43_UART1_RXD	MFP_CFG(GPIO43, AF7)
#define GPIO44_UART1_TXD	MFP_CFG(GPIO44, AF7)
#define GPIO51_UART1_RXD	MFP_CFG(GPIO51, AF1)
#define GPIO52_UART1_TXD	MFP_CFG(GPIO52, AF1)


#define GPIO47_UART2_RXD	MFP_CFG_PULL(GPIO47, AF6, HIGH)
#define GPIO48_UART2_TXD	MFP_CFG_PULL(GPIO48, AF6, HIGH)


#define GPIO29_UART3_CTS	MFP_CFG(GPIO29, AF0)
#define GPIO30_UART3_RTS	MFP_CFG(GPIO30, AF0)
#define GPIO31_UART3_TXD	MFP_CFG(GPIO31, AF0)
#define GPIO32_UART3_RXD	MFP_CFG(GPIO32, AF0)


#define GPIO51_IRDA_SHDN	MFP_CFG(GPIO51, AF0)


#define GPIO44_USB_ID		MFP_CFG(GPIO44, AF0)


#define SM_nCS0_nCS0		MFP_CFG(SM_nCS0, AF0)
#define SM_ADV_SM_ADV		MFP_CFG(SM_ADV, AF0)
#define SM_SCLK_SM_SCLK		MFP_CFG(SM_SCLK, AF0)
#define SM_SCLK_SM_SCLK		MFP_CFG(SM_SCLK, AF0)
#define SM_BE0_SM_BE0		MFP_CFG(SM_BE0, AF1)
#define SM_BE1_SM_BE1		MFP_CFG(SM_BE1, AF1)


#define GPIO53_CI2C_SCL		MFP_CFG(GPIO53, AF2)
#define GPIO54_CI2C_SDA		MFP_CFG(GPIO54, AF2)


#define GPIO24_SSP1_SDATA_IN	MFP_CFG_DRV(GPIO24, AF1, MEDIUM)
#define GPIO21_SSP1_BITCLK	MFP_CFG_DRV(GPIO21, AF1, MEDIUM)
#define GPIO20_SSP1_SYSCLK	MFP_CFG_DRV(GPIO20, AF1, MEDIUM)
#define GPIO22_SSP1_SYNC	MFP_CFG_DRV(GPIO22, AF1, MEDIUM)
#define GPIO23_SSP1_DATA_OUT	MFP_CFG_DRV(GPIO23, AF1, MEDIUM)
#define GPIO124_MN_CLK_OUT	MFP_CFG_DRV(GPIO124, AF1, MEDIUM)
#define GPIO123_CLK_REQ		MFP_CFG_DRV(GPIO123, AF0, MEDIUM)


#define DF_IO0_ND_IO0		MFP_CFG(DF_IO0, AF0)
#define DF_IO1_ND_IO1		MFP_CFG(DF_IO1, AF0)
#define DF_IO2_ND_IO2		MFP_CFG(DF_IO2, AF0)
#define DF_IO3_ND_IO3		MFP_CFG(DF_IO3, AF0)
#define DF_IO4_ND_IO4		MFP_CFG(DF_IO4, AF0)
#define DF_IO5_ND_IO5		MFP_CFG(DF_IO5, AF0)
#define DF_IO6_ND_IO6		MFP_CFG(DF_IO6, AF0)
#define DF_IO7_ND_IO7		MFP_CFG(DF_IO7, AF0)
#define DF_IO8_ND_IO8		MFP_CFG(DF_IO8, AF0)
#define DF_IO9_ND_IO9		MFP_CFG(DF_IO9, AF0)
#define DF_IO10_ND_IO10		MFP_CFG(DF_IO10, AF0)
#define DF_IO11_ND_IO11		MFP_CFG(DF_IO11, AF0)
#define DF_IO12_ND_IO12		MFP_CFG(DF_IO12, AF0)
#define DF_IO13_ND_IO13		MFP_CFG(DF_IO13, AF0)
#define DF_IO14_ND_IO14		MFP_CFG(DF_IO14, AF0)
#define DF_IO15_ND_IO15		MFP_CFG(DF_IO15, AF0)
#define DF_nCS0_SM_nCS2_nCS0	MFP_CFG(DF_nCS0_SM_nCS2, AF0)
#define DF_ALE_SM_WEn_ND_ALE	MFP_CFG(DF_ALE_SM_WEn, AF1)
#define DF_CLE_SM_OEn_ND_CLE	MFP_CFG(DF_CLE_SM_OEn, AF0)
#define DF_WEn_DF_WEn		MFP_CFG(DF_WEn, AF1)
#define DF_REn_DF_REn		MFP_CFG(DF_REn, AF1)
#define DF_RDY0_DF_RDY0		MFP_CFG(DF_RDY0, AF0)
#define DF_nCS1_SM_nCS3_nCS1	MFP_CFG(DF_nCS1_SM_nCS3, AF1)


#define GPIO00_KP_MKIN0		MFP_CFG(GPIO0, AF1)
#define GPIO01_KP_MKOUT0	MFP_CFG(GPIO1, AF1)
#define GPIO02_KP_MKIN1		MFP_CFG(GPIO2, AF1)
#define GPIO03_KP_MKOUT1	MFP_CFG(GPIO3, AF1)
#define GPIO04_KP_MKIN2		MFP_CFG(GPIO4, AF1)
#define GPIO05_KP_MKOUT2	MFP_CFG(GPIO5, AF1)
#define GPIO06_KP_MKIN3		MFP_CFG(GPIO6, AF1)
#define GPIO07_KP_MKOUT3	MFP_CFG(GPIO7, AF1)
#define GPIO08_KP_MKIN4		MFP_CFG(GPIO8, AF1)
#define GPIO09_KP_MKOUT4	MFP_CFG(GPIO9, AF1)
#define GPIO10_KP_MKIN5		MFP_CFG(GPIO10, AF1)
#define GPIO11_KP_MKOUT5	MFP_CFG(GPIO11, AF1)
#define GPIO12_KP_MKIN6		MFP_CFG(GPIO12, AF1)
#define GPIO13_KP_MKOUT6	MFP_CFG(GPIO13, AF1)
#define GPIO14_KP_MKIN7		MFP_CFG(GPIO14, AF1)
#define GPIO15_KP_MKOUT7	MFP_CFG(GPIO15, AF1)
#define GPIO16_KP_DKIN0		MFP_CFG(GPIO16, AF1)
#define GPIO17_KP_DKIN1		MFP_CFG(GPIO17, AF1)
#define GPIO18_KP_DKIN2		MFP_CFG(GPIO18, AF1)
#define GPIO19_KP_DKIN3		MFP_CFG(GPIO19, AF1)


#define GPIO81_LCD_RDB		MFP_CFG(GPIO81, AF1)
#define GPIO82_LCD_A0		MFP_CFG(GPIO82, AF1)
#define GPIO83_LCD_WRB		MFP_CFG(GPIO83, AF1)
#define GPIO84_LCD_NA		MFP_CFG(GPIO84, AF0)
#define GPIO104_LCD_CS		MFP_CFG(GPIO104, AF0)
#define GPIO105_LCD_NA		MFP_CFG(GPIO105, AF0)
#define GPIO106_LCD_RST	MFP_CFG(GPIO106, AF0)
#define GPIO107_LCD_NA		MFP_CFG(GPIO107, AF0)
#define GPIO108_LCD_NA		MFP_CFG(GPIO108, AF0)
#define GPIO109_LCD_NA		MFP_CFG(GPIO109, AF0)


#define GPIO81_LCD_FCLK		MFP_CFG(GPIO81, AF1)
#define GPIO82_LCD_LCLK		MFP_CFG(GPIO82, AF1)
#define GPIO83_LCD_PCLK		MFP_CFG(GPIO83, AF1)
#define GPIO84_LCD_DENA		MFP_CFG(GPIO84, AF1)
#define GPIO104_LCD_DD18	MFP_CFG(GPIO104, AF1)
#define GPIO105_LCD_DD19	MFP_CFG(GPIO105, AF1)
#define GPIO106_LCD_DD20	MFP_CFG(GPIO106, AF1)
#define GPIO107_LCD_DD21	MFP_CFG(GPIO107, AF1)
#define GPIO108_LCD_DD22	MFP_CFG(GPIO108, AF1)
#define GPIO109_LCD_DD23	MFP_CFG(GPIO109, AF1)


#define GPIO85_LCD_DD0		MFP_CFG(GPIO85, AF1)
#define GPIO86_LCD_DD1		MFP_CFG(GPIO86, AF1)
#define GPIO87_LCD_DD2		MFP_CFG(GPIO87, AF1)
#define GPIO88_LCD_DD3		MFP_CFG(GPIO88, AF1)
#define GPIO89_LCD_DD4		MFP_CFG(GPIO89, AF1)
#define GPIO90_LCD_DD5		MFP_CFG(GPIO90, AF1)
#define GPIO91_LCD_DD6		MFP_CFG(GPIO91, AF1)
#define GPIO92_LCD_DD7		MFP_CFG(GPIO92, AF1)
#define GPIO93_LCD_DD8		MFP_CFG(GPIO93, AF1)
#define GPIO94_LCD_DD9		MFP_CFG(GPIO94, AF1)
#define GPIO95_LCD_DD10	MFP_CFG(GPIO95, AF1)
#define GPIO96_LCD_DD11	MFP_CFG(GPIO96, AF1)
#define GPIO97_LCD_DD12	MFP_CFG(GPIO97, AF1)
#define GPIO98_LCD_DD13	MFP_CFG(GPIO98, AF1)
#define GPIO100_LCD_DD14	MFP_CFG(GPIO100, AF1)
#define GPIO101_LCD_DD15	MFP_CFG(GPIO101, AF1)
#define GPIO102_LCD_DD16	MFP_CFG(GPIO102, AF1)
#define GPIO103_LCD_DD17	MFP_CFG(GPIO103, AF1)

#define	GPIO43_LCD_SCL		MFP_CFG(GPIO43, AF6)
#define	GPIO44_LCD_CS1		MFP_CFG(GPIO44, AF6)	
#define	GPIO45_LCD_SDI		MFP_CFG(GPIO45, AF6)
#define	GPIO46_LCD_SDO		MFP_CFG(GPIO46, AF6)
#define	GPIO105_LCD_SDO		MFP_CFG(GPIO105, AF3)

#define GPIO104_LCD_SPIDOUT	MFP_CFG(GPIO104, AF3)
#define GPIO105_LCD_SPIDIN	MFP_CFG(GPIO105, AF3)
#define GPIO107_LCD_CS1 	MFP_CFG(GPIO107, AF3)
#define GPIO108_LCD_DCLK	MFP_CFG(GPIO108, AF3)

#define GPIO106_LCD_RESET	MFP_CFG(GPIO106, AF0)


#define GPIO83_LCD_WR		MFP_CFG(GPIO83, AF0)
#define GPIO103_LCD_CS		MFP_CFG(GPIO103, AF0)


#define GPIO106_1WIRE		MFP_CFG(GPIO106, AF3)


#define GPIO67_CCIC_IN7		MFP_CFG_DRV(GPIO67, AF1, MEDIUM)
#define GPIO68_CCIC_IN6		MFP_CFG_DRV(GPIO68, AF1, MEDIUM)
#define GPIO69_CCIC_IN5		MFP_CFG_DRV(GPIO69, AF1, MEDIUM)
#define GPIO70_CCIC_IN4		MFP_CFG_DRV(GPIO70, AF1, MEDIUM)
#define GPIO71_CCIC_IN3		MFP_CFG_DRV(GPIO71, AF1, MEDIUM)
#define GPIO72_CCIC_IN2		MFP_CFG_DRV(GPIO72, AF1, MEDIUM)
#define GPIO73_CCIC_IN1		MFP_CFG_DRV(GPIO73, AF1, MEDIUM)
#define GPIO74_CCIC_IN0		MFP_CFG_DRV(GPIO74, AF1, MEDIUM)
#define GPIO75_CAM_HSYNC	MFP_CFG_DRV(GPIO75, AF1, MEDIUM)
#define GPIO76_CAM_VSYNC        MFP_CFG_DRV(GPIO76, AF1, MEDIUM)
#define GPIO77_CAM_MCLK         MFP_CFG_DRV(GPIO77, AF1, MEDIUM)
#define GPIO78_CAM_PCLK         MFP_CFG_DRV(GPIO78, AF1, MEDIUM)
#define GPIO16_CAM_PWR_MAIN      MFP_CFG_DRV(GPIO16, AF0, MEDIUM)
#define GPIO50_CAM_RESET_SUB    MFP_CFG_DRV(GPIO50, AF0, MEDIUM)
#define GPIO15_CAM_PWR_MAIN     MFP_CFG_DRV(GPIO15, AF0, MEDIUM)
#define GPIO17_CAM_RESET_MAIN   MFP_CFG_DRV(GPIO17, AF0, MEDIUM)
#define GPIO49_CAM_AFEN         MFP_CFG_DRV(GPIO49, AF0, MEDIUM)

#if defined (CONFIG_PXA_U830)
#define GPIO5_CAM_EN				MFP_CFG(GPIO5, AF0)
#define GPIO51_CAM_CIF_FLASH		MFP_CFG(GPIO51, AF0)
#define GPIO109_CAM_FLASH_EN		MFP_CFG(GPIO109, AF0)
#define GPIO29_CAM_AAM_PWREN		MFP_CFG(GPIO29, AF0)
#endif	


#define MMC1_DAT7_MMC1_DAT7	MFP_CFG_DRV(MMC1_DAT7, AF0, MEDIUM)
#define MMC1_DAT6_MMC1_DAT6	MFP_CFG_DRV(MMC1_DAT6, AF0, MEDIUM)
#define MMC1_DAT5_MMC1_DAT5	MFP_CFG_DRV(MMC1_DAT5, AF0, MEDIUM)
#define MMC1_DAT4_MMC1_DAT4	MFP_CFG_DRV(MMC1_DAT4, AF0, MEDIUM)
#define MMC1_DAT3_MMC1_DAT3	MFP_CFG_DRV(MMC1_DAT3, AF0, FAST)
#define MMC1_DAT2_MMC1_DAT2	MFP_CFG_DRV(MMC1_DAT2, AF0, FAST)
#define MMC1_DAT1_MMC1_DAT1	MFP_CFG_DRV(MMC1_DAT1, AF0, FAST)
#define MMC1_DAT0_MMC1_DAT0	MFP_CFG_DRV(MMC1_DAT0, AF0, FAST)
#define MMC1_CMD_MMC1_CMD	MFP_CFG_DRV(MMC1_CMD, AF0, FAST)
#define MMC1_CLK_MMC1_CLK	MFP_CFG_DRV(MMC1_CLK, AF0, FAST)
#define MMC1_CD_MMC1_CD		MFP_CFG_PULL(MMC1_CD, AF0, HIGH)
#define MMC1_WP_MMC1_WP		MFP_CFG_DRV(MMC1_WP, AF0, MEDIUM)



#define MMC2_DAT3_GPIO_37	MFP_CFG_DRV(GPIO37, AF1, MEDIUM)
#define MMC2_DAT2_GPIO_38	MFP_CFG_DRV(GPIO38, AF1, MEDIUM)
#define MMC2_DAT1_GPIO_39	MFP_CFG_DRV(GPIO39, AF1, MEDIUM)
#define MMC2_DAT1_IRQ_GPIO_39	MFP_CFG_PULL_HIGH(GPIO39, AF0)
#define MMC2_DAT0_GPIO_40	MFP_CFG_DRV(GPIO40, AF1, MEDIUM)
#define MMC2_CMD_GPIO_41	MFP_CFG_DRV(GPIO41, AF1, MEDIUM)
#define MMC2_CLK_GPIO_42	MFP_CFG_DRV(GPIO42, AF1, VERY_SLOW)


#define WLAN_PD_GPIO_14			MFP_CFG(GPIO14, AF0)
#define WLAN_RESET_GPIO_20		MFP_CFG(GPIO20, AF0)
#define WIB_EN_GPIO_33			MFP_CFG(GPIO33, AF0)
#define WLAN_BT_RESET_GPIO_34		MFP_CFG(GPIO34, AF0)
#define WLAN_MAC_WAKEUP_GPIO_35		MFP_CFG(GPIO35, AF0)
#define WLAN_LHC_GPIO_36		MFP_CFG(GPIO36, AF0)


#define GPIO55_TDS_LNACTRL		MFP_CFG(GPIO55, AF0)
#define GPIO56_TDS_MIXCTRL		MFP_CFG(GPIO56, AF0)
#define GPIO57_TDS_TRXSW		MFP_CFG(GPIO57, AF0)
#define GPIO58_TDS_RXREV                MFP_CFG(GPIO58, AF0)
#define GPIO59_TDS_TXREV                MFP_CFG(GPIO59, AF0)




#define GPIO0_GPIO0                     MFP_CFG(GPIO0, AF0)
#define GPIO1_GPIO1                     MFP_CFG(GPIO1, AF0)
#define GPIO2_GPIO2			MFP_CFG(GPIO2, AF0)
#define GPIO3_GPIO3			MFP_CFG(GPIO3, AF0)
#define GPIO4_GPIO4			MFP_CFG(GPIO4, AF0)
#define GPIO5_GPIO5			MFP_CFG(GPIO5, AF0)
#define GPIO6_GPIO6			MFP_CFG(GPIO6, AF0)
#define GPIO7_GPIO7			MFP_CFG(GPIO7, AF0)
#define GPIO8_GPIO8			MFP_CFG(GPIO8, AF0)
#define GPIO9_GPIO9			MFP_CFG(GPIO9, AF0)
#define GPIO13_GPIO13			MFP_CFG(GPIO13, AF0)
#define GPIO15_GPIO15			MFP_CFG(GPIO15, AF0)
#define GPIO16_GPIO16			MFP_CFG(GPIO16, AF0)
#define GPIO19_GPIO19			MFP_CFG(GPIO19, AF0)
#define GPIO20_GPIO20			MFP_CFG(GPIO20, AF0)
#define GPIO43_GPIO43			MFP_CFG(GPIO43, AF0)
#define GPIO44_GPIO44			MFP_CFG(GPIO44, AF0)
#define GPIO45_GPIO45			MFP_CFG(GPIO45, AF0)
#define GPIO46_GPIO46			MFP_CFG(GPIO46, AF0)
#define	GPIO49_GPIO49			MFP_CFG(GPIO49, AF0)
#define	GPIO50_GPIO50			MFP_CFG(GPIO50, AF0)
#define GPIO53_GPIO53			MFP_CFG(GPIO53, AF0)
#define GPIO54_GPIO54			MFP_CFG(GPIO54, AF0)
#define GPIO60_GPIO60			MFP_CFG(GPIO60, AF0)
#define GPIO79_GPIO79			MFP_CFG(GPIO79, AF0)
#define GPIO81_GPIO81			MFP_CFG(GPIO81, AF0)
#define GPIO82_GPIO82			MFP_CFG(GPIO82, AF0)
#define GPIO84_GPIO84			MFP_CFG(GPIO84, AF0)
#define GPIO104_GPIO104			MFP_CFG(GPIO104, AF0)
#define GPIO105_GPIO105			MFP_CFG(GPIO105, AF0)
#define	GPIO106_GPIO106			MFP_CFG(GPIO106, AF0)	
#define	GPIO107_GPIO107			MFP_CFG(GPIO107, AF0)
#define	GPIO108_GPIO108			MFP_CFG(GPIO108, AF0)	
#define	GPIO109_GPIO109			MFP_CFG(GPIO109, AF0)	
#define	GPIO124_GPIO124			MFP_CFG(GPIO124, AF0)	

#define SM_BE0_GPIO126                  MFP_CFG(SM_BE0, AF0)


#define GPIO9_GYRO_INT		MFP_CFG(GPIO9, AF0)
#define GPIO20_GYRO_READY		MFP_CFG(GPIO20, AF0)


#define GPIO30_GPS_ON_OFF		MFP_CFG(GPIO30, AF0)
#define GPIO31_GPS_RESET		MFP_CFG(GPIO31, AF0)
#define GPIO32_GPS_PWREN		MFP_CFG(GPIO32, AF0)


#define GPIO10_G_INT1           MFP_CFG(GPIO10, AF0)
#if defined(CONFIG_PXA_U880) 
#define GPIO11_WLAN_RESET              MFP_CFG(GPIO11, AF0)
#elif defined(CONFIG_PXA_U830)
#define GPIO80_G_INT2           MFP_CFG(GPIO80, AF0)
#else
#define GPIO11_G_INT2           MFP_CFG(GPIO11, AF0)
#endif


#if defined(CONFIG_PXA_U830)
#define GPIO11_ALS_INT			MFP_CFG(GPIO11, AF0)
#endif


#define GPIO15_CMMB_PWR    MFP_CFG_DRV(GPIO15, AF0, MEDIUM)   
#define GPIO14_CMMB_IRQ	   MFP_CFG_DRV(GPIO14, AF0, MEDIUM)
#if defined(CONFIG_PXA_U830)
#define GPIO4_CMMB_PD	MFP_CFG(GPIO4, AF0) 
#endif


#define GPIO05_BtCodec_SW          MFP_CFG(GPIO5, AF0)
#define GPIO51_CHG_STATE           MFP_CFG(GPIO51, AF0)
#define GPIO109_CHG_WAKEUP      MFP_CFG(GPIO109, AF0)
#if defined(CONFIG_PXA_U830)||defined(CONFIG_PXA_U812)
#define GPIO79_WLAN_RESET                   MFP_CFG(GPIO79, AF0)
#else
#define GPIO79_BT_CLK                   MFP_CFG(GPIO79, AF0)
#endif
#define GPIO80_HEADSET_DET              MFP_CFG(GPIO80, AF0)
#define GPIO52_GPS_WAKEUP               MFP_CFG(GPIO52, AF0)
#define GPIO49_CHGIN_DET                MFP_CFG(GPIO49, AF0)

#define GPIO45_BT_WAKEUP           MFP_CFG(GPIO45, AF0)  
#define GPIO46_FM_WAKEUP          MFP_CFG(GPIO46, AF0) 

#define GPIO33_SPI_CLK		MFP_CFG_DRV(GPIO33, AF2, MEDIUM)
#define GPIO34_SPI_CS		MFP_CFG_DRV(GPIO34, AF2, MEDIUM)
#define GPIO35_SPI_DOUT		MFP_CFG_DRV(GPIO35, AF2, MEDIUM)
#define GPIO36_SPI_DIN		MFP_CFG_DRV(GPIO36, AF2, MEDIUM)

#define GPIO25_PCM_CLK          MFP_CFG_DRV(GPIO25, AF1, MEDIUM)
#define GPIO26_PCM_SYN          MFP_CFG_DRV(GPIO26, AF1, MEDIUM)
#define GPIO27_PCM_TXD          MFP_CFG_DRV(GPIO27, AF1, MEDIUM)
#define GPIO28_PCM_RXD          MFP_CFG_DRV(GPIO28, AF1, MEDIUM)
#define GPIO20_USBUART_SW               MFP_CFG_PULL_LOW(GPIO20, AF0)
#define GPIO12_WB_HPWR          MFP_CFG(GPIO12, AF0)
#define GPIO13_WB_WAKEUP                MFP_CFG(GPIO13, AF0)
#define GPIO18_I2C_SCL          MFP_CFG(GPIO18, AF0)
#define GPIO19_I2C_SDA          MFP_CFG(GPIO19, AF0)
#define GPIO04_ECHO_PER         MFP_CFG(GPIO4, AF0)
#define GPIO06_AUDIO_PA_EN              MFP_CFG(GPIO6, AF0)
#if defined(CONFIG_PXA_U880) || defined (CONFIG_PXA_U830) || defined (CONFIG_PXA_U812)
#define GPIO07_WLAN_PD                MFP_CFG(GPIO7, AF0)
#else
#define GPIO07_EGPIO_RST                MFP_CFG(GPIO7, AF0)
#endif
#ifdef CONFIG_PXA_U880 
#define GPIO80_ALS2AP_INT                   MFP_CFG(GPIO80, AF0)
#endif
#define  GPIO08_AXIS_INT                MFP_CFG(GPIO8, AF0)
#define  GPIO09_ECHO_RST                MFP_CFG(GPIO9, AF0)

#endif 

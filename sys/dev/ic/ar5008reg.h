/*	$OpenBSD: ar5008reg.h,v 1.6 2019/07/24 07:53:57 stsp Exp $	*/

/*-
 * Copyright (c) 2009 Damien Bergamini <damien.bergamini@free.fr>
 * Copyright (c) 2008-2009 Atheros Communications Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * MAC registers.
 */
#define AR_ISR_S2_S			0x00cc
#define AR_ISR_S3_S			0x00d0
#define AR_ISR_S4_S			0x00d4
#define AR_ISR_S5_S			0x00d8
#define AR_GPIO_IN_OUT			0x4048
#define AR_GPIO_OE_OUT			0x404c
#define AR_GPIO_INTR_POL		0x4050
#define AR_GPIO_INPUT_EN_VAL		0x4054
#define AR_GPIO_INPUT_MUX1		0x4058
#define AR_GPIO_INPUT_MUX2		0x405c
#define AR_GPIO_OUTPUT_MUX(i)		(0x4060 + (i) * 4)
#define AR_INPUT_STATE			0x406c
#define AR_EEPROM_STATUS_DATA		0x407c
#define AR_OBS				0x4080
#define AR_GPIO_PDPU			0x4088
#define AR_PCIE_MSI			0x4094

/*
 * Analog registers.
 */
#define AR_IS_ANALOG_REG(reg)		((reg) >= 0x7800 && (reg) <= 0x78b4)
#define AR_AN_RF2G1_CH0			0x7810
#define AR_AN_RF5G1_CH0			0x7818
#define AR_AN_RF2G1_CH1			0x7834
#define AR_AN_RF5G1_CH1			0x783c
#define AR_AN_SYNTH9			0x7868
#define AR_AN_TOP1			0x7890
#define AR_AN_TOP2			0x7894

/*
 * PHY registers.
 */
#define AR_PHY_BASE			0x9800
#define AR_PHY(i)			(AR_PHY_BASE + (i) * 4)
#define AR_PHY_TEST			0x9800
#define AR_PHY_TURBO			0x9804
#define AR_PHY_TEST2			0x9808
#define AR_PHY_TIMING2			0x9810
#define AR_PHY_TIMING3			0x9814
#define AR_PHY_CHIP_ID			0x9818
#define AR_PHY_ACTIVE			0x981c
#define AR_PHY_RF_CTL2			0x9824
#define AR_PHY_RF_CTL3			0x9828
#define AR_PHY_ADC_CTL			0x982c
#define AR_PHY_ADC_SERIAL_CTL		0x9830
#define AR_PHY_RF_CTL4			0x9834
#define AR_PHY_TSTDAC_CONST		0x983c
#define AR_PHY_SETTLING			0x9844
#define AR_PHY_RXGAIN			0x9848
#define AR_PHY_DESIRED_SZ		0x9850
#define AR_PHY_FIND_SIG			0x9858
#define AR_PHY_AGC_CTL1			0x985c
#define AR_PHY_AGC_CONTROL		0x9860
#define AR_PHY_CCA(i)			(0x9864 + (i) * 0x1000)
#define AR_PHY_SFCORR			0x9868
#define AR_PHY_SFCORR_LOW		0x986c
#define AR_PHY_SLEEP_CTR_CONTROL	0x9870
#define AR_PHY_SLEEP_CTR_LIMIT		0x9874
#define AR_PHY_SLEEP_SCAL		0x9878
#define AR_PHY_PLL_CTL			0x987c
#define AR_PHY_BIN_MASK_1		0x9900
#define AR_PHY_BIN_MASK_2		0x9904
#define AR_PHY_BIN_MASK_3		0x9908
#define AR_PHY_MASK_CTL			0x990c
#define AR_PHY_RX_DELAY			0x9914
#define AR_PHY_SEARCH_START_DELAY	0x9918
#define AR_PHY_TIMING_CTRL4_0		0x9920
#define AR_PHY_TIMING_CTRL4(i)		(0x9920 + (i) * 0x1000)
#define AR_PHY_TIMING5			0x9924
#define AR_PHY_POWER_TX_RATE1		0x9934
#define AR_PHY_POWER_TX_RATE2		0x9938
#define AR_PHY_POWER_TX_RATE_MAX	0x993c
#define AR_PHY_RADAR_EXT		0x9940
#define AR_PHY_FRAME_CTL		0x9944
#define AR_PHY_SPUR_REG			0x994c
#define AR_PHY_RADAR_0			0x9954
#define AR_PHY_RADAR_1			0x9958
#define AR_PHY_SWITCH_CHAIN_0		0x9960
#define AR_PHY_SWITCH_COM		0x9964
#define AR_PHY_SIGMA_DELTA		0x996c
#define AR_PHY_RESTART			0x9970
#define AR_PHY_RFBUS_REQ		0x997c
#define AR_PHY_TIMING7			0x9980
#define AR_PHY_TIMING8			0x9984
#define AR_PHY_BIN_MASK2_1		0x9988
#define AR_PHY_BIN_MASK2_2		0x998c
#define AR_PHY_BIN_MASK2_3		0x9990
#define AR_PHY_BIN_MASK2_4		0x9994
#define AR_PHY_TIMING9			0x9998
#define AR_PHY_TIMING10			0x999c
#define AR_PHY_TIMING11			0x99a0
#define AR_PHY_RX_CHAINMASK		0x99a4
#define AR_PHY_MULTICHAIN_GAIN_CTL	0x99ac
#define AR_PHY_NEW_ADC_DC_GAIN_CORR(i)	(0x99b4 + (i) * 0x1000)
#define AR_PHY_EXT_CCA0			0x99b8
#define AR_PHY_EXT_CCA(i)		(0x99bc + (i) * 0x1000)
#define AR_PHY_SFCORR_EXT		0x99c0
#define AR_PHY_HALFGI			0x99d0
#define AR_PHY_CHANNEL_MASK_01_30	0x99d4
#define AR_PHY_CHANNEL_MASK_31_60	0x99d8
#define AR_PHY_CHAN_INFO_MEMORY		0x99dc
#define AR_PHY_HEAVY_CLIP_ENABLE	0x99e0
#define AR_PHY_HEAVY_CLIP_FACTOR_RIFS	0x99ec
#define AR_PHY_CALMODE			0x99f0
#define AR_PHY_REFCLKDLY		0x99f4
#define AR_PHY_REFCLKPD			0x99f8
#define AR_PHY_BB_RFGAIN(i)		(0x9a00 + (i) * 4)
#define AR_PHY_CAL_MEAS_0(i)		(0x9c10 + (i) * 0x1000)
#define AR_PHY_CAL_MEAS_1(i)		(0x9c14 + (i) * 0x1000)
#define AR_PHY_CAL_MEAS_2(i)		(0x9c18 + (i) * 0x1000)
#define AR_PHY_CAL_MEAS_3(i)		(0x9c1c + (i) * 0x1000)
#define AR_PHY_CURRENT_RSSI		0x9c1c
#define AR_PHY_RFBUS_GRANT		0x9c20
#define AR9280_PHY_CURRENT_RSSI		0x9c3c
#define AR_PHY_CHAN_INFO_GAIN_DIFF	0x9cf4
#define AR_PHY_CHAN_INFO_GAIN		0x9cfc
#define AR_PHY_MODE			0xa200
#define AR_PHY_CCK_TX_CTRL		0xa204
#define AR_PHY_CCK_DETECT		0xa208
#define AR_PHY_GAIN_2GHZ		0xa20c
#define AR_PHY_CCK_RXCTRL4		0xa21c
#define AR_PHY_DAG_CTRLCCK		0xa228
#define AR_PHY_FORCE_CLKEN_CCK		0xa22c
#define AR_PHY_POWER_TX_RATE3		0xa234
#define AR_PHY_POWER_TX_RATE4		0xa238
#define AR_PHY_SCRM_SEQ_XR		0xa23c
#define AR_PHY_HEADER_DETECT_XR		0xa240
#define AR_PHY_CHIRP_DETECTED_XR	0xa244
#define AR_PHY_BLUETOOTH		0xa254
#define AR_PHY_TPCRG1			0xa258
#define AR_PHY_TX_PWRCTRL4		0xa264
#define AR_PHY_ANALOG_SWAP		0xa268
#define AR_PHY_TPCRG5			0xa26c
#define AR_PHY_TX_PWRCTRL6_0		0xa270
#define AR_PHY_TX_PWRCTRL7		0xa274
#define AR_PHY_TX_PWRCTRL9		0xa27c
#define AR_PHY_PDADC_TBL_BASE		0xa280
#define AR_PHY_TX_GAIN_TBL(i)		(0xa300 + (i) * 4)
#define AR_PHY_CL_CAL_CTL		0xa358
#define AR_PHY_CLC_TBL(i)		(0xa35c + (i) * 4)
#define AR_PHY_POWER_TX_RATE5		0xa38c
#define AR_PHY_POWER_TX_RATE6		0xa390
#define AR_PHY_CH0_TX_PWRCTRL11		0xa398
#define AR_PHY_CAL_CHAINMASK		0xa39c
#define AR_PHY_VIT_MASK2_M_46_61	0xa3a0
#define AR_PHY_VIT_MASK2_M_31_45	0xa3a4
#define AR_PHY_VIT_MASK2_M_16_30	0xa3a8
#define AR_PHY_VIT_MASK2_M_00_15	0xa3ac
#define AR_PHY_PILOT_MASK_01_30		0xa3b0
#define AR_PHY_PILOT_MASK_31_60		0xa3b4
#define AR_PHY_VIT_MASK2_P_15_01	0xa3b8
#define AR_PHY_VIT_MASK2_P_30_16	0xa3bc
#define AR_PHY_VIT_MASK2_P_45_31	0xa3c0
#define AR_PHY_VIT_MASK2_P_61_46	0xa3c4
#define AR_PHY_POWER_TX_SUB		0xa3c8
#define AR_PHY_POWER_TX_RATE7		0xa3cc
#define AR_PHY_POWER_TX_RATE8		0xa3d0
#define AR_PHY_POWER_TX_RATE9		0xa3d4
#define AR_PHY_XPA_CFG			0xa3d8
#define AR_PHY_TX_PWRCTRL6_1		0xb270
#define AR_PHY_CH1_TX_PWRCTRL11		0xb398

/*
 * AR7010 registers.
 */
#define AR7010_GPIO_OE			0x52000
#define AR7010_GPIO_IN			0x52004
#define AR7010_GPIO_OUT			0x52008


/* Bits for AR_AN_RF2G1_CH0. */
#define AR_AN_RF2G1_CH0_OB_M	0x03800000
#define AR_AN_RF2G1_CH0_OB_S	23
#define AR_AN_RF2G1_CH0_DB_M	0x1c000000
#define AR_AN_RF2G1_CH0_DB_S	26

/* Bits for AR_AN_RF5G1_CH0. */
#define AR_AN_RF5G1_CH0_OB5_M	0x00070000
#define AR_AN_RF5G1_CH0_OB5_S	16
#define AR_AN_RF5G1_CH0_DB5_M	0x00380000
#define AR_AN_RF5G1_CH0_DB5_S	19

/* Bits for AR_AN_RF2G1_CH1. */
#define AR_AN_RF2G1_CH1_OB_M	0x03800000
#define AR_AN_RF2G1_CH1_OB_S	23
#define AR_AN_RF2G1_CH1_DB_M	0x1c000000
#define AR_AN_RF2G1_CH1_DB_S	26

/* Bits for AR_AN_RF5G1_CH1. */
#define AR_AN_RF5G1_CH1_OB5_M	0x00070000
#define AR_AN_RF5G1_CH1_OB5_S	16
#define AR_AN_RF5G1_CH1_DB5_M	0x00380000
#define AR_AN_RF5G1_CH1_DB5_S	19

/* Bits for AR_AN_SYNTH9. */
#define AR_AN_SYNTH9_REFDIVA_M	0xf8000000
#define AR_AN_SYNTH9_REFDIVA_S	27

/* Bits for AR_AN_TOP1. */
#define AR_AN_TOP1_DACLPMODE	0x00040000

/* Bits for AR_AN_TOP2. */
#define AR_AN_TOP2_XPABIAS_LVL_M	0xc0000000
#define AR_AN_TOP2_XPABIAS_LVL_S	30
#define AR_AN_TOP2_LOCALBIAS		0x00200000
#define AR_AN_TOP2_PWDCLKIND		0x00400000

/* Bits for AR_PHY_TEST. */
#define AR_PHY_TEST_RFSILENT_BB	0x00002000
#define AR_PHY_TEST_AGC_CLR	0x10000000

/* Bits for AR_PHY_TURBO. */
#define AR_PHY_FC_TURBO_MODE		0x00000001
#define AR_PHY_FC_TURBO_SHORT		0x00000002
#define AR_PHY_FC_DYN2040_EN		0x00000004
#define AR_PHY_FC_DYN2040_PRI_ONLY	0x00000008
#define AR_PHY_FC_DYN2040_PRI_CH	0x00000010
#define AR_PHY_FC_DYN2040_EXT_CH	0x00000020
#define AR_PHY_FC_HT_EN			0x00000040
#define AR_PHY_FC_SHORT_GI_40		0x00000080
#define AR_PHY_FC_WALSH			0x00000100
#define AR_PHY_FC_SINGLE_HT_LTF1	0x00000200
#define AR_PHY_FC_ENABLE_DAC_FIFO	0x00000800

/* Bits for AR_PHY_TIMING3. */
#define AR_PHY_TIMING3_DSC_MAN_M	0xfffe0000
#define AR_PHY_TIMING3_DSC_MAN_S	17
#define AR_PHY_TIMING3_DSC_EXP_M	0x0001e000
#define AR_PHY_TIMING3_DSC_EXP_S	13

/* Bits for AR_PHY_CHIP_ID. */
#define AR_PHY_CHIP_ID_REV_0		0x00000080
#define AR_PHY_CHIP_ID_REV_1		0x00000081
#define AR_PHY_CHIP_ID_9160_REV_0	0x000000b0

/* Bits for AR_PHY_ACTIVE. */
#define AR_PHY_ACTIVE_EN	0x00000001
#define AR_PHY_ACTIVE_DIS	0x00000000

/* Bits for AR_PHY_RF_CTL2. */
#define AR_PHY_TX_END_DATA_START_M	0x000000ff
#define AR_PHY_TX_END_DATA_START_S	0
#define AR_PHY_TX_END_PA_ON_M		0x0000ff00
#define AR_PHY_TX_END_PA_ON_S		8

/* Bits for AR_PHY_RF_CTL3. */
#define AR_PHY_TX_END_TO_A2_RX_ON_M	0x00ff0000
#define AR_PHY_TX_END_TO_A2_RX_ON_S	16

/* Bits for AR_PHY_ADC_CTL. */
#define AR_PHY_ADC_CTL_OFF_INBUFGAIN_M	0x00000003
#define AR_PHY_ADC_CTL_OFF_INBUFGAIN_S	0
#define AR_PHY_ADC_CTL_OFF_PWDDAC	0x00002000
#define AR_PHY_ADC_CTL_OFF_PWDBANDGAP	0x00004000
#define AR_PHY_ADC_CTL_OFF_PWDADC	0x00008000
#define AR_PHY_ADC_CTL_ON_INBUFGAIN_M	0x00030000
#define AR_PHY_ADC_CTL_ON_INBUFGAIN_S	16

/* Bits for AR_PHY_ADC_SERIAL_CTL. */
#define AR_PHY_SEL_INTERNAL_ADDAC	0x00000000
#define AR_PHY_SEL_EXTERNAL_RADIO	0x00000001

/* Bits for AR_PHY_RF_CTL4. */
#define AR_PHY_RF_CTL4_TX_END_XPAB_OFF_M	0xff000000
#define AR_PHY_RF_CTL4_TX_END_XPAB_OFF_S	24
#define AR_PHY_RF_CTL4_TX_END_XPAA_OFF_M	0x00ff0000
#define AR_PHY_RF_CTL4_TX_END_XPAA_OFF_S	16
#define AR_PHY_RF_CTL4_FRAME_XPAB_ON_M		0x0000ff00
#define AR_PHY_RF_CTL4_FRAME_XPAB_ON_S		8
#define AR_PHY_RF_CTL4_FRAME_XPAA_ON_M		0x000000ff
#define AR_PHY_RF_CTL4_FRAME_XPAA_ON_S		0

/* Bits for AR_PHY_SETTLING. */
#define AR_PHY_SETTLING_SWITCH_M	0x00003f80
#define AR_PHY_SETTLING_SWITCH_S	7

/* Bits for AR_PHY_RXGAIN. */
#define AR_PHY_RXGAIN_TXRX_ATTEN_M	0x0003f000
#define AR_PHY_RXGAIN_TXRX_ATTEN_S	12
#define AR_PHY_RXGAIN_TXRX_RF_MAX_M	0x007c0000
#define AR_PHY_RXGAIN_TXRX_RF_MAX_S	18
#define AR9280_PHY_RXGAIN_TXRX_ATTEN_M	0x00003f80
#define AR9280_PHY_RXGAIN_TXRX_ATTEN_S	7
#define AR9280_PHY_RXGAIN_TXRX_MARGIN_M	0x001fc000
#define AR9280_PHY_RXGAIN_TXRX_MARGIN_S	14

/* Bits for AR_PHY_DESIRED_SZ. */
#define AR_PHY_DESIRED_SZ_ADC_M		0x000000ff
#define AR_PHY_DESIRED_SZ_ADC_S		0
#define AR_PHY_DESIRED_SZ_PGA_M		0x0000ff00
#define AR_PHY_DESIRED_SZ_PGA_S		8
#define AR_PHY_DESIRED_SZ_TOT_DES_M	0x0ff00000
#define AR_PHY_DESIRED_SZ_TOT_DES_S	20

/* Bits for AR_PHY_FIND_SIG. */
#define AR_PHY_FIND_SIG_FIRSTEP_M	0x0003f000
#define AR_PHY_FIND_SIG_FIRSTEP_S	12
#define AR_PHY_FIND_SIG_FIRPWR_M	0x03fc0000
#define AR_PHY_FIND_SIG_FIRPWR_S	18

/* Bits for AR_PHY_AGC_CTL1. */
#define AR_PHY_AGC_CTL1_COARSE_LOW_M	0x00007f80
#define AR_PHY_AGC_CTL1_COARSE_LOW_S	7
#define AR_PHY_AGC_CTL1_COARSE_HIGH_M	0x003f8000
#define AR_PHY_AGC_CTL1_COARSE_HIGH_S	15

/* Bits for AR_PHY_AGC_CONTROL. */
#define AR_PHY_AGC_CONTROL_CAL		0x00000001
#define AR_PHY_AGC_CONTROL_NF		0x00000002
#define AR_PHY_AGC_CONTROL_ENABLE_NF	0x00008000
#define AR_PHY_AGC_CONTROL_FLTR_CAL	0x00010000
#define AR_PHY_AGC_CONTROL_NO_UPDATE_NF	0x00020000

/* Bits for AR_PHY_CCA. */
#define AR_PHY_MAXCCA_PWR_M		0x000001ff
#define AR_PHY_MAXCCA_PWR_S		0
#define AR_PHY_CCA_THRESH62_M		0x0007f000
#define AR_PHY_CCA_THRESH62_S		12
#define AR_PHY_MINCCA_PWR_M		0x0ff80000
#define AR_PHY_MINCCA_PWR_S		19
#define AR9280_PHY_CCA_THRESH62_M	0x000ff000
#define AR9280_PHY_CCA_THRESH62_S	12
#define AR9280_PHY_MINCCA_PWR_M		0x1ff00000
#define AR9280_PHY_MINCCA_PWR_S		20

/* Bits for AR_PHY_SFCORR_LOW. */
#define AR_PHY_SFCORR_LOW_USE_SELF_CORR_LOW	0x00000001
#define AR_PHY_SFCORR_LOW_M2COUNT_THR_LOW_M	0x00003f00
#define AR_PHY_SFCORR_LOW_M2COUNT_THR_LOW_S	8
#define AR_PHY_SFCORR_LOW_M1_THRESH_LOW_M	0x001fc000
#define AR_PHY_SFCORR_LOW_M1_THRESH_LOW_S	14
#define AR_PHY_SFCORR_LOW_M2_THRESH_LOW_M	0x0fe00000
#define AR_PHY_SFCORR_LOW_M2_THRESH_LOW_S	21

/* Bits for AR_PHY_SFCORR. */
#define AR_PHY_SFCORR_M2COUNT_THR_M	0x0000001f
#define AR_PHY_SFCORR_M2COUNT_THR_S	0
#define AR_PHY_SFCORR_M1_THRESH_M	0x00fe0000
#define AR_PHY_SFCORR_M1_THRESH_S	17
#define AR_PHY_SFCORR_M2_THRESH_M	0x7f000000
#define AR_PHY_SFCORR_M2_THRESH_S	24

/* Bits for AR_PHY_RX_DELAY. */
#define AR_PHY_RX_DELAY_DELAY_M	0x00003fff
#define AR_PHY_RX_DELAY_DELAY_S	0

/* Bits for AR_PHY_TIMING_CTRL4_0. */
#define AR_PHY_TIMING_CTRL4_IQCORR_Q_Q_COFF_M		0x0000001f
#define AR_PHY_TIMING_CTRL4_IQCORR_Q_Q_COFF_S		0
#define AR_PHY_TIMING_CTRL4_IQCORR_Q_I_COFF_M		0x000007e0
#define AR_PHY_TIMING_CTRL4_IQCORR_Q_I_COFF_S		5
#define AR_PHY_TIMING_CTRL4_IQCORR_ENABLE		0x00000800
#define AR_PHY_TIMING_CTRL4_IQCAL_LOG_COUNT_MAX_M	0x0000f000
#define AR_PHY_TIMING_CTRL4_IQCAL_LOG_COUNT_MAX_S	12
#define AR_PHY_TIMING_CTRL4_DO_CAL			0x00010000
#define AR_PHY_TIMING_CTRL4_ENABLE_PILOT_MASK		0x10000000
#define AR_PHY_TIMING_CTRL4_ENABLE_CHAN_MASK		0x20000000
#define AR_PHY_TIMING_CTRL4_ENABLE_SPUR_FILTER		0x40000000
#define AR_PHY_TIMING_CTRL4_ENABLE_SPUR_RSSI		0x80000000

/* Bits for AR_PHY_TIMING5. */
#define AR_PHY_TIMING5_CYCPWR_THR1_M	0x000000fe
#define AR_PHY_TIMING5_CYCPWR_THR1_S	1

/* Bits for AR_PHY_POWER_TX_RATE_MAX. */
#define AR_PHY_POWER_TX_RATE_MAX_TPC_ENABLE	0x00000040

/* Bits for AR_PHY_FRAME_CTL. */
#define AR_PHY_FRAME_CTL_TX_CLIP_M	0x00000038
#define AR_PHY_FRAME_CTL_TX_CLIP_S	3

/* Bits for AR_PHY_TXPWRADJ. */
#define AR_PHY_TXPWRADJ_CCK_GAIN_DELTA_M	0x00000fc0
#define AR_PHY_TXPWRADJ_CCK_GAIN_DELTA_S	6
#define AR_PHY_TXPWRADJ_CCK_PCDAC_INDEX_M	0x00fc0000
#define AR_PHY_TXPWRADJ_CCK_PCDAC_INDEX_S	18

/* Bits for AR_PHY_RADAR_EXT. */
#define AR_PHY_RADAR_EXT_ENA		0x00004000

/* Bits for AR_PHY_RADAR_0. */
#define AR_PHY_RADAR_0_ENA		0x00000001
#define AR_PHY_RADAR_0_INBAND_M		0x0000003e
#define AR_PHY_RADAR_0_INBAND_S		1
#define AR_PHY_RADAR_0_PRSSI_M		0x00000fc0
#define AR_PHY_RADAR_0_PRSSI_S		6
#define AR_PHY_RADAR_0_HEIGHT_M		0x0003f000
#define AR_PHY_RADAR_0_HEIGHT_S		12
#define AR_PHY_RADAR_0_RRSSI_M		0x00fc0000
#define AR_PHY_RADAR_0_RRSSI_S		18
#define AR_PHY_RADAR_0_FIRPWR_M		0x7f000000
#define AR_PHY_RADAR_0_FIRPWR_S		24
#define AR_PHY_RADAR_0_FFT_ENA		0x80000000

/* Bits for AR_PHY_RADAR_1. */
#define AR_PHY_RADAR_1_MAXLEN_M		0x000000ff
#define AR_PHY_RADAR_1_MAXLEN_S		0
#define AR_PHY_RADAR_1_RELSTEP_THRESH_M	0x00001f00
#define AR_PHY_RADAR_1_RELSTEP_THRESH_S	8
#define AR_PHY_RADAR_1_RELSTEP_CHECK	0x00002000
#define AR_PHY_RADAR_1_MAX_RRSSI	0x00004000
#define AR_PHY_RADAR_1_BLOCK_CHECK	0x00008000
#define AR_PHY_RADAR_1_RELPWR_THRESH_M	0x003f0000
#define AR_PHY_RADAR_1_RELPWR_THRESH_S	16
#define AR_PHY_RADAR_1_USE_FIR128	0x00400000
#define AR_PHY_RADAR_1_RELPWR_ENA	0x00800000

/* Bits for AR_PHY_SIGMA_DELTA. */
#define AR_PHY_SIGMA_DELTA_ADC_SEL_M	0x00000003
#define AR_PHY_SIGMA_DELTA_ADC_SEL_S	0
#define AR_PHY_SIGMA_DELTA_FILT2_M	0x000000f8
#define AR_PHY_SIGMA_DELTA_FILT2_S	3
#define AR_PHY_SIGMA_DELTA_FILT1_M	0x00001f00
#define AR_PHY_SIGMA_DELTA_FILT1_S	8
#define AR_PHY_SIGMA_DELTA_ADC_CLIP_M	0x01ffe000
#define AR_PHY_SIGMA_DELTA_ADC_CLIP_S	13

/* Bits for AR_PHY_RESTART. */
#define AR_PHY_RESTART_DIV_GC_M	0x001c0000
#define AR_PHY_RESTART_DIV_GC_S	18

/* Bits for AR_PHY_RFBUS_REQ. */
#define AR_PHY_RFBUS_REQ_EN	0x00000001

/* Bits for AR_PHY_TIMING11. */
#define AR_PHY_TIMING11_SPUR_DELTA_PHASE_M	0x000fffff
#define AR_PHY_TIMING11_SPUR_DELTA_PHASE_S	0
#define AR_PHY_TIMING11_SPUR_FREQ_SD_M		0x3ff00000
#define AR_PHY_TIMING11_SPUR_FREQ_SD_S		20
#define AR_PHY_TIMING11_USE_SPUR_IN_AGC		0x40000000
#define AR_PHY_TIMING11_USE_SPUR_IN_SELFCOR	0x80000000

/* Bits for AR_PHY_NEW_ADC_DC_GAIN_CORR(). */
#define AR_PHY_NEW_ADC_GAIN_CORR_ENABLE		0x40000000
#define AR_PHY_NEW_ADC_DC_OFFSET_CORR_ENABLE	0x80000000

/* Bits for AR_PHY_EXT_CCA0. */
#define AR_PHY_EXT_CCA0_THRESH62_M	0x000000ff
#define AR_PHY_EXT_CCA0_THRESH62_S	0

/* Bits for AR_PHY_EXT_CCA. */
#define AR_PHY_EXT_MAXCCA_PWR_M		0x000001ff
#define AR_PHY_EXT_MAXCCA_PWR_S		0
#define AR_PHY_EXT_CCA_CYCPWR_THR1_M	0x0000fe00
#define AR_PHY_EXT_CCA_CYCPWR_THR1_S	9
#define AR_PHY_EXT_CCA_THRESH62_M	0x007f0000
#define AR_PHY_EXT_CCA_THRESH62_S	16
#define AR_PHY_EXT_MINCCA_PWR_M		0xff800000
#define AR_PHY_EXT_MINCCA_PWR_S		23
#define AR9280_PHY_EXT_MINCCA_PWR_M	0x01ff0000
#define AR9280_PHY_EXT_MINCCA_PWR_S	16

/* Bits for AR_PHY_SFCORR_EXT. */
#define AR_PHY_SFCORR_EXT_M1_THRESH_M		0x0000007f
#define AR_PHY_SFCORR_EXT_M1_THRESH_S		0
#define AR_PHY_SFCORR_EXT_M2_THRESH_M		0x00003f80
#define AR_PHY_SFCORR_EXT_M2_THRESH_S		7
#define AR_PHY_SFCORR_EXT_M1_THRESH_LOW_M	0x001fc000
#define AR_PHY_SFCORR_EXT_M1_THRESH_LOW_S	14
#define AR_PHY_SFCORR_EXT_M2_THRESH_LOW_M	0x0fe00000
#define AR_PHY_SFCORR_EXT_M2_THRESH_LOW_S	21
#define AR_PHY_SFCORR_SPUR_SUBCHNL_SD_M		0xf0000000
#define AR_PHY_SFCORR_SPUR_SUBCHNL_SD_S		28

/* Bits for AR_PHY_HALFGI. */
#define AR_PHY_HALFGI_DSC_EXP_M	0x0000000f
#define AR_PHY_HALFGI_DSC_EXP_S	0
#define AR_PHY_HALFGI_DSC_MAN_M	0x0007fff0
#define AR_PHY_HALFGI_DSC_MAN_S	4

/* Bits for AR_PHY_CHAN_INFO_MEMORY. */
#define AR_PHY_CHAN_INFO_MEMORY_CAPTURE_MASK	0x00000001

/* Bits for AR_PHY_HEAVY_CLIP_FACTOR_RIFS. */
#define AR_PHY_RIFS_INIT_DELAY_M	0x03ff0000
#define AR_PHY_RIFS_INIT_DELAY_S	16

/* Bits for AR_PHY_CALMODE. */
#define AR_PHY_CALMODE_IQ		0x00000000
#define AR_PHY_CALMODE_ADC_GAIN		0x00000001
#define AR_PHY_CALMODE_ADC_DC_PER	0x00000002
#define AR_PHY_CALMODE_ADC_DC_INIT	0x00000003

/* Bits for AR_PHY_RFBUS_GRANT. */
#define AR_PHY_RFBUS_GRANT_EN	0x00000001

/* Bits for AR_PHY_CHAN_INFO_GAIN_DIFF. */
#define AR_PHY_CHAN_INFO_GAIN_DIFF_UPPER_LIMIT	320

/* Bits for AR_PHY_MODE. */
#define AR_PHY_MODE_ASYNCFIFO		0x00000080
#define AR_PHY_MODE_AR2133		0x00000008
#define AR_PHY_MODE_AR5111		0x00000000
#define AR_PHY_MODE_AR5112		0x00000008
#define AR_PHY_MODE_DYNAMIC		0x00000004
#define AR_PHY_MODE_RF2GHZ		0x00000002
#define AR_PHY_MODE_RF5GHZ		0x00000000
#define AR_PHY_MODE_CCK			0x00000001
#define AR_PHY_MODE_OFDM		0x00000000
#define AR_PHY_MODE_DYN_CCK_DISABLE	0x00000100

/* Bits for AR_PHY_CCK_TX_CTRL. */
#define AR_PHY_CCK_TX_CTRL_TX_DAC_SCALE_CCK_M	0x0000000c
#define AR_PHY_CCK_TX_CTRL_TX_DAC_SCALE_CCK_S	2
#define AR_PHY_CCK_TX_CTRL_JAPAN		0x00000010

/* Bits for AR_PHY_CCK_DETECT. */
#define AR_PHY_CCK_DETECT_WEAK_SIG_THR_CCK_M		0x0000003f
#define AR_PHY_CCK_DETECT_WEAK_SIG_THR_CCK_S		0
#define AR_PHY_CCK_DETECT_ANT_SWITCH_TIME_M		0x00001fc0
#define AR_PHY_CCK_DETECT_ANT_SWITCH_TIME_S		6
#define AR_PHY_CCK_DETECT_BB_ENABLE_ANT_FAST_DIV	0x00002000

/* Bits for AR_PHY_GAIN_2GHZ. */
#define AR_PHY_GAIN_2GHZ_XATTEN1_DB_M		0x0000003f
#define AR_PHY_GAIN_2GHZ_XATTEN1_DB_S		0
#define AR_PHY_GAIN_2GHZ_BSW_ATTEN_M		0x0000001f
#define AR_PHY_GAIN_2GHZ_BSW_ATTEN_S		0
#define AR_PHY_GAIN_2GHZ_XATTEN2_DB_M		0x00000fc0
#define AR_PHY_GAIN_2GHZ_XATTEN2_DB_S		6
#define AR_PHY_GAIN_2GHZ_BSW_MARGIN_M		0x00003c00
#define AR_PHY_GAIN_2GHZ_BSW_MARGIN_S		10
#define AR_PHY_GAIN_2GHZ_XATTEN1_MARGIN_M	0x0001f000
#define AR_PHY_GAIN_2GHZ_XATTEN1_MARGIN_S	12
#define AR_PHY_GAIN_2GHZ_XATTEN2_MARGIN_M	0x003e0000
#define AR_PHY_GAIN_2GHZ_XATTEN2_MARGIN_S	17
#define AR_PHY_GAIN_2GHZ_RXTX_MARGIN_M		0x00fc0000
#define AR_PHY_GAIN_2GHZ_RXTX_MARGIN_S		18

/* Bit for AR_PHY_CCK_RXCTRL4. */
#define AR_PHY_CCK_RXCTRL4_FREQ_EST_SHORT_M	0x01f80000
#define AR_PHY_CCK_RXCTRL4_FREQ_EST_SHORT_S	19

/* Bits for AR_PHY_DAG_CTRLCCK. */
#define AR_PHY_DAG_CTRLCCK_EN_RSSI_THR	0x00000200
#define AR_PHY_DAG_CTRLCCK_RSSI_THR_M	0x0001fc00
#define AR_PHY_DAG_CTRLCCK_RSSI_THR_S	10

/* Bits for AR_PHY_FORCE_CLKEN_CCK. */
#define AR_PHY_FORCE_CLKEN_CCK_MRC_MUX	0x00000040

/* Bits for AR_PHY_TPCRG1. */
#define AR_PHY_TPCRG1_NUM_PD_GAIN_M	0x0000c000
#define AR_PHY_TPCRG1_NUM_PD_GAIN_S	14
#define AR_PHY_TPCRG1_PD_GAIN_1_M	0x00030000
#define AR_PHY_TPCRG1_PD_GAIN_1_S	16
#define AR_PHY_TPCRG1_PD_GAIN_2_M	0x000c0000
#define AR_PHY_TPCRG1_PD_GAIN_2_S	18
#define AR_PHY_TPCRG1_PD_GAIN_3_M	0x00300000
#define AR_PHY_TPCRG1_PD_GAIN_3_S	20
#define AR_PHY_TPCRG1_PD_CAL_ENABLE	0x00400000

/* Bits for AR_PHY_TX_PWRCTRL4. */
#define AR_PHY_TX_PWRCTRL_PD_AVG_VALID	0x00000001
#define AR_PHY_TX_PWRCTRL_PD_AVG_OUT_M	0x000001fe
#define AR_PHY_TX_PWRCTRL_PD_AVG_OUT_S	1

/* Bits for AR_PHY_TX_PWRCTRL6_[01]. */
#define AR_PHY_TX_PWRCTRL_ERR_EST_MODE_M	0x03000000
#define AR_PHY_TX_PWRCTRL_ERR_EST_MODE_S	24

/* Bits for AR_PHY_TX_PWRCTRL7. */
#define AR_PHY_TX_PWRCTRL_TX_GAIN_TAB_MAX_M	0x0007e000
#define AR_PHY_TX_PWRCTRL_TX_GAIN_TAB_MAX_S	13
#define AR_PHY_TX_PWRCTRL_INIT_TX_GAIN_M	0x01f80000
#define AR_PHY_TX_PWRCTRL_INIT_TX_GAIN_S	19

/* Bits for AR_PHY_TX_PWRCTRL9. */
#define AR_PHY_TX_DESIRED_SCALE_CCK_M		0x00007c00
#define AR_PHY_TX_DESIRED_SCALE_CCK_S		10	/* XXX should be 9? */
#define AR_PHY_TX_PWRCTRL9_RES_DC_REMOVAL	0x80000000

/* Bits for AR_PHY_TX_GAIN_TBL. */
#define AR_PHY_TX_GAIN_CLC_M	0x0000001e
#define AR_PHY_TX_GAIN_CLC_S	1
#define AR_PHY_TX_GAIN_M	0x0007f000
#define AR_PHY_TX_GAIN_S	12

/* Bits for AR_PHY_SPUR_REG. */
#define AR_PHY_SPUR_REG_SPUR_RSSI_THRESH_M	0x0000007f
#define AR_PHY_SPUR_REG_SPUR_RSSI_THRESH_S	0
#define AR_SPUR_RSSI_THRESH			40
#define AR_PHY_SPUR_REG_ENABLE_VIT_SPUR_RSSI	0x00000100
#define AR_PHY_SPUR_REG_MASK_RATE_SELECT	0x0001fe00
#define AR_PHY_SPUR_REG_ENABLE_MASK_PPM		0x00020000
#define AR_PHY_SPUR_REG_MASK_RATE_CNTL		0x03fc0000

/* Bits for AR_PHY_ANALOG_SWAP. */
#define AR_PHY_SWAP_ALT_CHAIN	0x00000040

/* Bits for AR_PHY_TPCRG5. */
#define AR_PHY_TPCRG5_PD_GAIN_OVERLAP_M		0x0000000f
#define AR_PHY_TPCRG5_PD_GAIN_OVERLAP_S		0
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_1_M	0x000003f0
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_1_S	4
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_2_M	0x0000fc00
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_2_S	10
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_3_M	0x003f0000
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_3_S	16
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_4_M	0x0fc00000
#define AR_PHY_TPCRG5_PD_GAIN_BOUNDARY_4_S	22

/* Bits for AR_PHY_CL_CAL_CTL. */
#define AR_PHY_PARALLEL_CAL_ENABLE	0x00000001
#define AR_PHY_CL_CAL_ENABLE		0x00000002

/* Bits for AR_PHY_CLC_TBL. */
#define AR_PHY_CLC_Q0_M		0x0000ffd0
#define AR_PHY_CLC_Q0_S		5
#define AR_PHY_CLC_I0_M		0x07ff0000
#define AR_PHY_CLC_I0_S		16

/* Bits for AR_PHY_XPA_CFG. */
#define AR_PHY_FORCE_XPA_CFG	0x000000001

/* Bits for AR_PHY_CH[01]_TX_PWRCTRL11. */
#define AR_PHY_TX_PWRCTRL_OLPC_TEMP_COMP_M	0x0000fc00
#define AR_PHY_TX_PWRCTRL_OLPC_TEMP_COMP_S	10
#define AR_PHY_TX_PWRCTRL_OLPC_PWR_M		0x00ff0000
#define AR_PHY_TX_PWRCTRL_OLPC_PWR_S		16

/* Bits for AR_PHY_NEW_ADC_DC_GAIN_CORR. */
#define AR_PHY_NEW_ADC_DC_GAIN_QGAIN_M	0x0000003f
#define AR_PHY_NEW_ADC_DC_GAIN_QGAIN_S	0
#define AR_PHY_NEW_ADC_DC_GAIN_IGAIN_M	0x00000fc0
#define AR_PHY_NEW_ADC_DC_GAIN_IGAIN_S	6
#define AR_PHY_NEW_ADC_DC_GAIN_QDC_M	0x001ff000
#define AR_PHY_NEW_ADC_DC_GAIN_QDC_S	12
#define AR_PHY_NEW_ADC_DC_GAIN_IDC_M	0x3fe00000
#define AR_PHY_NEW_ADC_DC_GAIN_IDC_S	21

/* Bits for AR_PHY(0x37). */
#define AR5416_BMODE_SYNTH	0x00000002
#define AR5416_AMODE_REFSEL_M	0x0000000c
#define AR5416_AMODE_REFSEL_S	2


#define AR5008_MAX_SCATTER	16	/* NB: not a hardware limit. */

/*
 * Tx DMA descriptor.
 */
struct ar_tx_desc {
	uint32_t	ds_link;
	uint32_t	ds_data;
	uint32_t	ds_ctl0;
	uint32_t	ds_ctl1;
	uint32_t	ds_ctl2;
	uint32_t	ds_ctl3;
	uint32_t	ds_ctl4;
	uint32_t	ds_ctl5;
	uint32_t	ds_ctl6;
	uint32_t	ds_ctl7;
	uint32_t	ds_ctl8;
	uint32_t	ds_ctl9;
	uint32_t	ds_ctl10;
	uint32_t	ds_ctl11;
	uint32_t	ds_status0;
	uint32_t	ds_status1;
	uint32_t	ds_tstamp;
	uint32_t	ds_ba_bitmap_lo;
	uint32_t	ds_ba_bitmap_hi;
	uint32_t	ds_evm0;
	uint32_t	ds_evm1;
	uint32_t	ds_evm2;
	uint32_t	ds_status8;
	uint32_t	ds_status9;
	/*
	 * Padding to make Tx descriptors 128 bytes such that they will
	 * not cross a 4KB boundary.
	 */
	uint32_t	pad[8];
} __packed __attribute__((aligned(4)));

/* Bits for ds_ctl0. */
#define AR_TXC0_FRAME_LEN_M		0x00000fff
#define AR_TXC0_FRAME_LEN_S		0
#define AR_TXC0_VIRT_MORE_FRAG		0x00001000
#define AR_TXC0_XMIT_POWER_M		0x003f0000
#define AR_TXC0_XMIT_POWER_S		16
#define AR_TXC0_RTS_ENABLE		0x00400000
#define AR_TXC0_VEOL			0x00800000
#define AR_TXC0_CLR_DEST_MASK		0x01000000
#define AR_TXC0_INTR_REQ		0x20000000
#define AR_TXC0_DEST_IDX_VALID		0x40000000
#define AR_TXC0_CTS_ENABLE		0x80000000

/* Bits for ds_ctl1. */
#define AR_TXC1_BUF_LEN_M		0x00000fff
#define AR_TXC1_BUF_LEN_S		0
#define AR_TXC1_MORE			0x00001000
#define AR_TXC1_DEST_IDX_M		0x000fe000
#define AR_TXC1_DEST_IDX_S		13
#define AR_TXC1_FRAME_TYPE_M		0x00f00000
#define AR_TXC1_FRAME_TYPE_S		20
#define AR_FRAME_TYPE_NORMAL		0
#define AR_FRAME_TYPE_ATIM		1
#define AR_FRAME_TYPE_PSPOLL		2
#define AR_FRAME_TYPE_BEACON		3
#define AR_FRAME_TYPE_PROBE_RESP	4
#define AR_TXC1_NO_ACK			0x01000000
#define AR_TXC1_INSERT_TS		0x02000000
#define AR_TXC1_EXT_ONLY		0x08000000
#define AR_TXC1_EXT_AND_CTL		0x10000000
#define AR_TXC1_MORE_AGGR		0x20000000
#define AR_TXC1_IS_AGGR			0x40000000

/* Bits for ds_ctl2. */
#define AR_TXC2_BURST_DUR_M		0x00007fff
#define AR_TXC2_BURST_DUR_S		0
#define AR_TXC2_DUR_UPDATE_ENA		0x00008000
#define AR_TXC2_XMIT_DATA_TRIES0_M	0x000f0000
#define AR_TXC2_XMIT_DATA_TRIES0_S	16
#define AR_TXC2_XMIT_DATA_TRIES1_M	0x00f00000
#define AR_TXC2_XMIT_DATA_TRIES1_S	20
#define AR_TXC2_XMIT_DATA_TRIES2_M	0x0f000000
#define AR_TXC2_XMIT_DATA_TRIES2_S	24
#define AR_TXC2_XMIT_DATA_TRIES3_M	0xf0000000
#define AR_TXC2_XMIT_DATA_TRIES3_S	28

/* Bits for ds_ctl3. */
#define AR_TXC3_XMIT_RATE0_M		0x000000ff
#define AR_TXC3_XMIT_RATE0_S		0
#define AR_TXC3_XMIT_RATE1_M		0x0000ff00
#define AR_TXC3_XMIT_RATE1_S		8
#define AR_TXC3_XMIT_RATE2_M		0x00ff0000
#define AR_TXC3_XMIT_RATE2_S		16
#define AR_TXC3_XMIT_RATE3_M		0xff000000
#define AR_TXC3_XMIT_RATE3_S		24

/* Bits for ds_ctl4. */
#define AR_TXC4_PACKET_DUR0_M		0x00007fff
#define AR_TXC4_PACKET_DUR0_S		0
#define AR_TXC4_RTSCTS_QUAL0		0x00008000
#define AR_TXC4_PACKET_DUR1_M		0x7fff0000
#define AR_TXC4_PACKET_DUR1_S		16
#define AR_TXC4_RTSCTS_QUAL1		0x80000000
/* Shortcut. */
#define AR_TXC4_RTSCTS_QUAL01	\
	(AR_TXC4_RTSCTS_QUAL0 | AR_TXC4_RTSCTS_QUAL1)

/* Bits for ds_ctl5. */
#define AR_TXC5_PACKET_DUR2_M		0x00007fff
#define AR_TXC5_PACKET_DUR2_S		0
#define AR_TXC5_RTSCTS_QUAL2		0x00008000
#define AR_TXC5_PACKET_DUR3_M		0x7fff0000
#define AR_TXC5_PACKET_DUR3_S		16
#define AR_TXC5_RTSCTS_QUAL3		0x80000000
/* Shortcut. */
#define AR_TXC5_RTSCTS_QUAL23	\
	(AR_TXC5_RTSCTS_QUAL2 | AR_TXC5_RTSCTS_QUAL3)

/* Bits for ds_ctl6. */
#define AR_TXC6_AGGR_LEN_M		0x0000ffff
#define AR_TXC6_AGGR_LEN_S		0
#define AR_TXC6_PAD_DELIM_M		0x03fc0000
#define AR_TXC6_PAD_DELIM_S		18
#define AR_TXC6_ENCR_TYPE_M		0x0c000000
#define AR_TXC6_ENCR_TYPE_S		26
#define AR_ENCR_TYPE_CLEAR		0
#define AR_ENCR_TYPE_WEP		1
#define AR_ENCR_TYPE_AES		2
#define AR_ENCR_TYPE_TKIP		3

/* Bits for ds_ctl7. */
#define AR_TXC7_2040_0			0x00000001
#define AR_TXC7_GI0			0x00000002
#define AR_TXC7_CHAIN_SEL0_M		0x0000001c
#define AR_TXC7_CHAIN_SEL0_S		2
#define AR_TXC7_2040_1			0x00000020
#define AR_TXC7_GI1			0x00000040
#define AR_TXC7_CHAIN_SEL1_M		0x00000380
#define AR_TXC7_CHAIN_SEL1_S		7
#define AR_TXC7_2040_2			0x00000400
#define AR_TXC7_GI2			0x00000800
#define AR_TXC7_CHAIN_SEL2_M		0x00007000
#define AR_TXC7_CHAIN_SEL2_S		12
#define AR_TXC7_2040_3			0x00008000
#define AR_TXC7_GI3			0x00010000
#define AR_TXC7_CHAIN_SEL3_M		0x000e0000
#define AR_TXC7_CHAIN_SEL3_S		17
#define AR_TXC7_RTSCTS_RATE_M		0x0ff00000
#define AR_TXC7_RTSCTS_RATE_S		20
/* Shortcuts. */
#define AR_TXC7_2040_0123	\
	(AR_TXC7_2040_0 | AR_TXC7_2040_1 | AR_TXC7_2040_2 | AR_TXC7_2040_3)
#define AR_TXC7_GI0123		\
	(AR_TXC7_GI0 | AR_TXC7_GI1 | AR_TXC7_GI2 | AR_TXC7_GI3)

/* Bits for ds_ctl9. */
#define AR_TXC9_XMIT_POWER1_M		0x3f000000
#define AR_TXC9_XMIT_POWER1_S		24

/* Bits for ds_ctl10. */
#define AR_TXC10_XMIT_POWER2_M		0x3f000000
#define AR_TXC10_XMIT_POWER2_S		24

/* Bits for ds_ctl11. */
#define AR_TXC11_XMIT_POWER3_M		0x3f000000
#define AR_TXC11_XMIT_POWER3_S		24

/* Bits for ds_status0. */
#define AR_TXS0_RSSI_ANT0(i)		(((x) >> ((i) * 8)) & 0xff)
#define AR_TXS0_BA_STATUS		0x40000000

/* Bits for ds_status1. */
#define AR_TXS1_FRM_XMIT_OK		0x00000001
#define AR_TXS1_EXCESSIVE_RETRIES	0x00000002
#define AR_TXS1_FIFO_UNDERRUN		0x00000004
#define AR_TXS1_FILTERED		0x00000008
#define AR_TXS1_RTS_FAIL_CNT_M		0x000000f0
#define AR_TXS1_RTS_FAIL_CNT_S		4
#define AR_TXS1_DATA_FAIL_CNT_M		0x00000f00
#define AR_TXS1_DATA_FAIL_CNT_S		8
#define AR_TXS1_VIRT_RETRY_CNT_M	0x0000f000
#define AR_TXS1_VIRT_RETRY_CNT_S	12
#define AR_TXS1_TX_DELIM_UNDERRUN	0x00010000
#define AR_TXS1_TX_DATA_UNDERRUN	0x00020000
#define AR_TXS1_DESC_CFG_ERR		0x00040000
#define AR_TXS1_TX_TIMER_EXPIRED	0x00080000
/* Shortcut. */
#define AR_TXS1_UNDERRUN		\
	(AR_TXS1_FIFO_UNDERRUN |	\
	 AR_TXS1_TX_DELIM_UNDERRUN |	\
	 AR_TXS1_TX_DATA_UNDERRUN)

/* Bits for ds_status9. */
#define AR_TXS9_DONE			0x00000001
#define AR_TXS9_SEQNUM_M		0x00001ffe
#define AR_TXS9_SEQNUM_S		1
#define AR_TXS9_TXOP_EXCEEDED		0x00020000
#define AR_TXS9_FINAL_IDX_M		0x00600000
#define AR_TXS9_FINAL_IDX_S		21
#define AR_TXS9_POWER_MGMT		0x02000000

/*
 * Rx DMA descriptor.
 */
struct ar_rx_desc {
	uint32_t	ds_link;
	uint32_t	ds_data;
	uint32_t	ds_ctl0;
	uint32_t	ds_ctl1;
	uint32_t	ds_status0;
	uint32_t	ds_status1;
	uint32_t	ds_status2;
	uint32_t	ds_status3;
	uint32_t	ds_status4;
	uint32_t	ds_status5;
	uint32_t	ds_status6;
	uint32_t	ds_status7;
	uint32_t	ds_status8;
	/*
	 * Padding to make Rx descriptors 64 bytes such that they will
	 * not cross a 4KB boundary.
	 */
	uint32_t	pad[3];
} __packed  __attribute__((aligned(4)));

/* Bits for ds_ctl1. */
#define AR_RXC1_BUF_LEN_M		0x00000fff
#define AR_RXC1_BUF_LEN_S		0
#define AR_RXC1_INTR_REQ		0x00002000

/* Bits for ds_status0. */
#define AR_RXS0_RSSI_ANT00(x)		(((x) >>  0) & 0xff)
#define AR_RXS0_RSSI_ANT01(x)		(((x) >>  8) & 0xff)
#define AR_RXS0_RSSI_ANT02(x)		(((x) >> 16) & 0xff)
#define AR_RXS0_RATE_M			0xff000000
#define AR_RXS0_RATE_S			24

/* Bits for ds_status1. */
#define AR_RXS1_DATA_LEN_M		0x00000fff
#define AR_RXS1_DATA_LEN_S		0
#define AR_RXS1_MORE			0x00001000

/* Bits for ds_status3. */
#define AR_RXS3_GI			0x00000001
#define AR_RXS3_2040			0x00000002
#define AR_RXS3_PARALLEL_40		0x00000004
#define AR_RXS3_ANTENNA_M		0xffffff00
#define AR_RXS3_ANTENNA_S		8
#define AR_RXS3_RATE_M			0x000003fc
#define AR_RXS3_RATE_S			2

/* Bits for ds_status4. */
#define AR_RXS0_RSSI_ANT10(x)		(((x) >>  0) & 0xff)
#define AR_RXS0_RSSI_ANT11(x)		(((x) >>  8) & 0xff)
#define AR_RXS0_RSSI_ANT12(x)		(((x) >> 16) & 0xff)
#define AR_RXS4_RSSI_COMBINED_M		0xff000000
#define AR_RXS4_RSSI_COMBINED_S		24

/* Bits for ds_status8. */
#define AR_RXS8_DONE			0x00000001
#define AR_RXS8_FRAME_OK		0x00000002
#define AR_RXS8_CRC_ERR			0x00000004
#define AR_RXS8_DECRYPT_CRC_ERR		0x00000008
#define AR_RXS8_PHY_ERR			0x00000010
#define AR_RXS8_MICHAEL_ERR		0x00000020
#define AR_RXS8_PRE_DELIM_CRC_ERR	0x00000040
#define AR_RXS8_PHY_ERR_CODE_M		0x0000ff00
#define AR_RXS8_PHY_ERR_CODE_S		8
#define AR_RXS8_KEY_IDX_VALID		0x00000100
#define AR_RXS8_KEY_IDX_M		0x0000fe00
#define AR_RXS8_KEY_IDX_S		9
#define AR_RXS8_POST_DELIM_CRC_ERR	0x00040000
#define AR_RXS8_DECRYPT_BUSY_ERR	0x40000000

#define AR_MAX_PWR_RANGE_IN_HALF_DB	64
#define AR9285_PD_GAIN_BOUNDARY_DEFAULT	58

/*
 * AR5008 family common ROM header.
 */
#define AR_EEPROM_MAGIC_OFFSET	0x0000
#if BYTE_ORDER == BIG_ENDIAN
#define AR_EEPROM_MAGIC		0x5aa5
#else
#define AR_EEPROM_MAGIC		0xa55a
#endif

#define AR_NO_SPUR		0x8000
#define AR_NUM_PDADC_VALUES	128

struct ar_base_eep_header {
	uint16_t	length;
	uint16_t	checksum;
	uint16_t	version;
#define AR_EEP_VER			0xe
#define AR_EEP_VER_MINOR_MASK		0x0fff
#define AR_EEP_MINOR_VER_2		2
#define AR_EEP_MINOR_VER_3		3
#define AR_EEP_MINOR_VER_7		7
#define AR_EEP_MINOR_VER_9		9
#define AR_EEP_MINOR_VER_10		10
#define AR_EEP_MINOR_VER_16		16
#define AR_EEP_MINOR_VER_17		17
#define AR_EEP_MINOR_VER_19		19
#define AR_EEP_MINOR_VER_20		20
#define AR_EEP_MINOR_VER_21		21
#define AR_EEP_MINOR_VER_22		22

	uint8_t		opCapFlags;
#define AR_OPFLAGS_11A			0x01
#define AR_OPFLAGS_11G			0x02
/* NB: If set, 11n is _disabled_ in the corresponding mode: */
#define AR_OPFLAGS_11N_5G40		0x04
#define AR_OPFLAGS_11N_2G40		0x08
#define AR_OPFLAGS_11N_5G20		0x10
#define AR_OPFLAGS_11N_2G20		0x20

	uint8_t		eepMisc;
	uint16_t	regDmn[2];
	uint8_t		macAddr[6];
	uint8_t		rxMask;
	uint8_t		txMask;
	uint16_t	rfSilent;
#define AR_EEP_RFSILENT_ENABLED		0x0001
#define AR_EEP_RFSILENT_GPIO_SEL_M	0x001c
#define AR_EEP_RFSILENT_GPIO_SEL_S	2
#define AR_EEP_RFSILENT_POLARITY	0x0002

	uint16_t	blueToothOptions;
	uint16_t	deviceCap;
#define AR_EEP_DEVCAP_COMPRESS_DIS	0x0001
#define AR_EEP_DEVCAP_AES_DIS		0x0002
#define AR_EEP_DEVCAP_FASTFRAME_DIS	0x0004
#define AR_EEP_DEVCAP_BURST_DIS		0x0008
#define AR_EEP_DEVCAP_MAXQCU_M		0x01f0
#define AR_EEP_DEVCAP_MAXQCU_S		4
#define AR_EEP_DEVCAP_HEAVY_CLIP_EN	0x0200
#define AR_EEP_DEVCAP_KC_ENTRIES_M	0xf000
#define AR_EEP_DEVCAP_KC_ENTRIES_S	12

	uint32_t	binBuildNumber;
	uint8_t		deviceType;
} __packed;

#define AR_EEP_TXGAIN_ORIGINAL		0
#define AR_EEP_TXGAIN_HIGH_POWER	1

#define AR_EEPROM_MODAL_SPURS		5

struct ar_spur_chan {
	uint16_t	spurChan;
	uint8_t		spurRangeLow;
	uint8_t		spurRangeHigh;
} __packed;

struct ar_cal_data_per_freq_olpc {
	uint8_t	pwrPdg[2][5];
	uint8_t	vpdPdg[2][5];
	uint8_t	pcdac[2][5];
	uint8_t	empty[2][5];
} __packed;

struct ar_cal_target_power_leg {
	uint8_t	bChannel;
	uint8_t	tPow2x[4];
} __packed;

struct ar_cal_target_power_ht {
	uint8_t	bChannel;
	uint8_t	tPow2x[8];
} __packed;

struct ar_cal_ctl_edges {
	uint8_t	bChannel;
	uint8_t	tPowerFlag;
#define AR_CAL_CTL_EDGES_POWER_M	0x3f
#define AR_CAL_CTL_EDGES_POWER_S	0
#define AR_CAL_CTL_EDGES_FLAG_M		0xc0
#define AR_CAL_CTL_EDGES_FLAG_S		6
} __packed;

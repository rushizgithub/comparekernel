/* Copyright (c) 2008-2019, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef DIAGCHAR_SHARED
#define DIAGCHAR_SHARED

#define MSG_MASKS_TYPE		0x00000001
#define LOG_MASKS_TYPE		0x00000002
#define EVENT_MASKS_TYPE	0x00000004
#define PKT_TYPE		0x00000008
#define DEINIT_TYPE		0x00000010
#define USER_SPACE_DATA_TYPE	0x00000020
#define DCI_DATA_TYPE		0x00000040
#define USER_SPACE_RAW_DATA_TYPE	0x00000080
#define DCI_LOG_MASKS_TYPE	0x00000100
#define DCI_EVENT_MASKS_TYPE	0x00000200
#define DCI_PKT_TYPE		0x00000400
#define HDLC_SUPPORT_TYPE	0x00001000

#define USB_MODE			1
#define MEMORY_DEVICE_MODE		2
#define NO_LOGGING_MODE			3
#define UART_MODE			4
#define SOCKET_MODE			5
#define CALLBACK_MODE			6

/* different values that go in for diag_data_type */

#define DATA_TYPE_EVENT         	0
#define DATA_TYPE_F3            	1
#define DATA_TYPE_LOG           	2
#define DATA_TYPE_RESPONSE      	3
#define DATA_TYPE_DELAYED_RESPONSE	4
#define DATA_TYPE_DCI_LOG		0x00000100
#define DATA_TYPE_DCI_EVENT		0x00000200

/* Different IOCTL values */
#define DIAG_IOCTL_COMMAND_REG  	0
#define DIAG_IOCTL_COMMAND_DEREG	1
#define DIAG_IOCTL_SWITCH_LOGGING	7
#define DIAG_IOCTL_GET_DELAYED_RSP_ID 	8
#define DIAG_IOCTL_LSM_DEINIT		9
#define DIAG_IOCTL_DCI_INIT		20
#define DIAG_IOCTL_DCI_DEINIT		21
#define DIAG_IOCTL_DCI_SUPPORT		22
#define DIAG_IOCTL_DCI_REG		23
#define DIAG_IOCTL_DCI_STREAM_INIT	24
#define DIAG_IOCTL_DCI_HEALTH_STATS	25
#define DIAG_IOCTL_DCI_LOG_STATUS	26
#define DIAG_IOCTL_DCI_EVENT_STATUS	27
#define DIAG_IOCTL_DCI_CLEAR_LOGS	28
#define DIAG_IOCTL_DCI_CLEAR_EVENTS	29
#define DIAG_IOCTL_REMOTE_DEV		32
#define DIAG_IOCTL_VOTE_REAL_TIME	33
#define DIAG_IOCTL_GET_REAL_TIME	34
#define DIAG_IOCTL_PERIPHERAL_BUF_CONFIG	35
#define DIAG_IOCTL_PERIPHERAL_BUF_DRAIN		36
#define DIAG_IOCTL_REGISTER_CALLBACK	37
#define DIAG_IOCTL_HDLC_TOGGLE	38
#define DIAG_IOCTL_QUERY_PD_LOGGING	39
#define DIAG_IOCTL_MD_SUPPORT_LIST 42

/* PC Tools IDs */
#define APQ8060_TOOLS_ID	4062
#define AO8960_TOOLS_ID		4064
#define APQ8064_TOOLS_ID	4072
#define MSM8625_TOOLS_ID	4075
#define MSM8930_TOOLS_ID	4076
#define MSM8630_TOOLS_ID	4077
#define MSM8230_TOOLS_ID	4078
#define APQ8030_TOOLS_ID	4079
#define MSM8627_TOOLS_ID	4080
#define MSM8227_TOOLS_ID	4081
#define MSM8974_TOOLS_ID	4083
#define APQ8074_TOOLS_ID	4090
#define MSM8916_TOOLS_ID	4094
#define APQ8084_TOOLS_ID	4095
#define MSM8994_TOOLS_ID	4097
#define MSM8939_TOOLS_ID	4103
#define APQ8026_TOOLS_ID	4104
#define MSM8909_TOOLS_ID	4108
#define MSM8992_TOOLS_ID	4111
#define MSM8952_TOOLS_ID	4110
#define MSM_8996_TOOLS_ID	4112

#define MSG_MASK_0			(0x00000001)
#define MSG_MASK_1			(0x00000002)
#define MSG_MASK_2			(0x00000004)
#define MSG_MASK_3			(0x00000008)
#define MSG_MASK_4			(0x00000010)
#define MSG_MASK_5			(0x00000020)
#define MSG_MASK_6			(0x00000040)
#define MSG_MASK_7			(0x00000080)
#define MSG_MASK_8			(0x00000100)
#define MSG_MASK_9			(0x00000200)
#define MSG_MASK_10			(0x00000400)
#define MSG_MASK_11			(0x00000800)
#define MSG_MASK_12			(0x00001000)
#define MSG_MASK_13			(0x00002000)
#define MSG_MASK_14			(0x00004000)
#define MSG_MASK_15			(0x00008000)
#define MSG_MASK_16			(0x00010000)
#define MSG_MASK_17			(0x00020000)
#define MSG_MASK_18			(0x00040000)
#define MSG_MASK_19			(0x00080000)
#define MSG_MASK_20			(0x00100000)
#define MSG_MASK_21			(0x00200000)
#define MSG_MASK_22			(0x00400000)
#define MSG_MASK_23			(0x00800000)
#define MSG_MASK_24			(0x01000000)
#define MSG_MASK_25			(0x02000000)
#define MSG_MASK_26			(0x04000000)
#define MSG_MASK_27			(0x08000000)
#define MSG_MASK_28			(0x10000000)
#define MSG_MASK_29			(0x20000000)
#define MSG_MASK_30			(0x40000000)
#define MSG_MASK_31			(0x80000000)

/*  These masks are to be used for support of all legacy messages in the sw.
The user does not need to remember the names as they will be embedded in
the appropriate macros. */
#define MSG_LEGACY_LOW			MSG_MASK_0
#define MSG_LEGACY_MED			MSG_MASK_1
#define MSG_LEGACY_HIGH			MSG_MASK_2
#define MSG_LEGACY_ERROR		MSG_MASK_3
#define MSG_LEGACY_FATAL		MSG_MASK_4

/* Legacy Message Priorities */
#define MSG_LVL_FATAL			(MSG_LEGACY_FATAL)
#define MSG_LVL_ERROR			(MSG_LEGACY_ERROR | MSG_LVL_FATAL)
#define MSG_LVL_HIGH			(MSG_LEGACY_HIGH | MSG_LVL_ERROR)
#define MSG_LVL_MED			(MSG_LEGACY_MED | MSG_LVL_HIGH)
#define MSG_LVL_LOW			(MSG_LEGACY_LOW | MSG_LVL_MED)

#define MSG_LVL_NONE			0

/* This needs to be modified manually now, when we add
 a new RANGE of SSIDs to the msg_mask_tbl */
#define MSG_MASK_TBL_CNT		26
#define APPS_EVENT_LAST_ID		0xCAA

#define MSG_SSID_0			0
#define MSG_SSID_0_LAST			130
#define MSG_SSID_1			500
#define MSG_SSID_1_LAST			506
#define MSG_SSID_2			1000
#define MSG_SSID_2_LAST			1007
#define MSG_SSID_3			2000
#define MSG_SSID_3_LAST			2008
#define MSG_SSID_4			3000
#define MSG_SSID_4_LAST			3014
#define MSG_SSID_5			4000
#define MSG_SSID_5_LAST			4010
#define MSG_SSID_6			4500
#define MSG_SSID_6_LAST			4584
#define MSG_SSID_7			4600
#define MSG_SSID_7_LAST			4616
#define MSG_SSID_8			5000
#define MSG_SSID_8_LAST			5036
#define MSG_SSID_9			5500
#define MSG_SSID_9_LAST			5517
#define MSG_SSID_10			6000
#define MSG_SSID_10_LAST		6081
#define MSG_SSID_11			6500
#define MSG_SSID_11_LAST		6521
#define MSG_SSID_12			7000
#define MSG_SSID_12_LAST		7003
#define MSG_SSID_13			7100
#define MSG_SSID_13_LAST		7111
#define MSG_SSID_14			7200
#define MSG_SSID_14_LAST		7201
#define MSG_SSID_15			8000
#define MSG_SSID_15_LAST		8000
#define MSG_SSID_16			8500
#define MSG_SSID_16_LAST		8532
#define MSG_SSID_17			9000
#define MSG_SSID_17_LAST		9008
#define MSG_SSID_18			9500
#define MSG_SSID_18_LAST		9521
#define MSG_SSID_19			10200
#define MSG_SSID_19_LAST		10210
#define MSG_SSID_20			10251
#define MSG_SSID_20_LAST		10255
#define MSG_SSID_21			10300
#define MSG_SSID_21_LAST		10300
#define MSG_SSID_22			10350
#define MSG_SSID_22_LAST		10377
#define MSG_SSID_23			10400
#define MSG_SSID_23_LAST		10416
#define MSG_SSID_24			10500
#define MSG_SSID_24_LAST		10505
#define MSG_SSID_25			0xC000
#define MSG_SSID_25_LAST		0xC063

static const uint32_t msg_bld_masks_0[] = {
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_ERROR,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_ERROR,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_ERROR,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_MED | MSG_MASK_5 | MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8,
	MSG_LVL_LOW,
	MSG_LVL_ERROR,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_MASK_7 | \
		MSG_MASK_8|MSG_MASK_9|MSG_MASK_10|MSG_MASK_11|MSG_MASK_12 | \
		MSG_MASK_13|MSG_MASK_14|MSG_MASK_15|MSG_MASK_16 | \
		MSG_MASK_17|MSG_MASK_18|MSG_MASK_19|MSG_MASK_20|MSG_MASK_21,
	MSG_LVL_MED|MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8|MSG_MASK_9|MSG_MASK_10| \
		MSG_MASK_11|MSG_MASK_12|MSG_MASK_13|MSG_MASK_14| \
		MSG_MASK_15|MSG_MASK_16|MSG_MASK_17,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8|MSG_MASK_9|MSG_MASK_10| \
		MSG_MASK_11|MSG_MASK_12|MSG_MASK_13|MSG_MASK_14|MSG_MASK_15| \
		MSG_MASK_16|MSG_MASK_17|MSG_MASK_18|MSG_MASK_19|MSG_MASK_20| \
		MSG_MASK_21|MSG_MASK_22|MSG_MASK_23|MSG_MASK_24|MSG_MASK_25,
	MSG_LVL_MED|MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8|MSG_MASK_9|MSG_MASK_10,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW | MSG_MASK_5 | \
		MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8,
	MSG_LVL_LOW | MSG_MASK_5 | \
		MSG_MASK_6,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_MED | MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8|MSG_MASK_9|MSG_MASK_10| \
		MSG_MASK_11|MSG_MASK_12|MSG_MASK_13|MSG_MASK_14|MSG_MASK_15 | \
		MSG_MASK_16|MSG_MASK_17|MSG_MASK_18|MSG_MASK_19|MSG_MASK_20,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_HIGH | MSG_MASK_21,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR,
	MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR,
	MSG_LVL_MED|MSG_LVL_HIGH,
	MSG_LVL_MED|MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_HIGH,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_MED,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_LVL_MED|MSG_LVL_HIGH|MSG_LVL_ERROR|MSG_LVL_FATAL,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH
};

static const uint32_t msg_bld_masks_1[] = {
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH
};

static const uint32_t msg_bld_masks_2[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_MASK_5,
	MSG_LVL_MED,
	MSG_LVL_MED
};

static const uint32_t msg_bld_masks_3[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_MASK_5|MSG_MASK_6|MSG_MASK_7|
			MSG_MASK_8|MSG_MASK_9|MSG_MASK_10,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED
};

static const uint32_t msg_bld_masks_4[] = {
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_5[] = {
	MSG_LVL_HIGH,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED|MSG_LVL_MED|MSG_MASK_5|MSG_MASK_6|MSG_MASK_7| \
		MSG_MASK_8|MSG_MASK_9,
	MSG_LVL_MED
};

static const uint32_t msg_bld_masks_6[] = {
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
	MSG_LVL_LOW | MSG_MASK_5,
};

static const uint32_t msg_bld_masks_7[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
	MSG_LVL_FATAL,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_8[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_HIGH
};

static const uint32_t msg_bld_masks_9[] = {
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_10[] =  {
	MSG_LVL_MED,
	MSG_LVL_ERROR,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_MASK_5 | \
		MSG_MASK_6|MSG_MASK_7|MSG_MASK_8|MSG_MASK_9|MSG_MASK_10| \
		MSG_MASK_11|MSG_MASK_12|MSG_MASK_13|MSG_MASK_14|MSG_MASK_15| \
		MSG_MASK_16|MSG_MASK_17|MSG_MASK_18|MSG_MASK_19|MSG_MASK_20| \
		MSG_MASK_21|MSG_MASK_22,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW|MSG_MASK_5,
	MSG_LVL_LOW|MSG_MASK_0 | MSG_MASK_1 | MSG_MASK_2 | \
		MSG_MASK_3 | MSG_MASK_4 | MSG_MASK_5 | MSG_MASK_6,
	MSG_LVL_HIGH,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED
};

static const uint32_t msg_bld_masks_11[] = {
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
};

static const uint32_t msg_bld_masks_12[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
};

static const uint32_t msg_bld_masks_13[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
};

static const uint32_t msg_bld_masks_14[] = {
	MSG_LVL_MED,
	MSG_LVL_MED,
};

static const uint32_t msg_bld_masks_15[] = {
	MSG_LVL_MED
};

static const uint32_t msg_bld_masks_16[] = {
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
		MSG_LVL_FATAL,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
		MSG_LVL_FATAL,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
		MSG_LVL_FATAL,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
		MSG_LVL_FATAL,
	MSG_LVL_LOW | MSG_LVL_MED | MSG_LVL_HIGH | MSG_LVL_ERROR |
		MSG_LVL_FATAL,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_17[] =  {
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED,
	MSG_LVL_MED | MSG_MASK_6 | \
		MSG_MASK_7 | MSG_MASK_8 | MSG_MASK_9,
	MSG_LVL_MED | MSG_MASK_5 | \
		MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8 | MSG_MASK_9 | \
		MSG_MASK_10 | MSG_MASK_11 | MSG_MASK_12 | MSG_MASK_13 | \
		MSG_MASK_14 | MSG_MASK_15 | MSG_MASK_16 | MSG_MASK_17,
	MSG_LVL_MED,
	MSG_LVL_MED | MSG_MASK_5 | \
		MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8 | MSG_MASK_9 | \
		MSG_MASK_10 | MSG_MASK_11 | MSG_MASK_12 | MSG_MASK_13 | \
		MSG_MASK_14 | MSG_MASK_15 | MSG_MASK_16 | MSG_MASK_17 | \
		MSG_MASK_18 | MSG_MASK_19 | MSG_MASK_20 | MSG_MASK_21 | \
		MSG_MASK_22,
	MSG_LVL_MED,
	MSG_LVL_MED,
};

static const uint32_t msg_bld_masks_18[] = {
	MSG_LVL_LOW,
	MSG_LVL_MED | MSG_MASK_8 | MSG_MASK_9 | MSG_MASK_10 | MSG_MASK_11 |
		MSG_MASK_12 | MSG_MASK_13 | MSG_MASK_14 | MSG_MASK_15 |
		MSG_MASK_16 | MSG_MASK_17 | MSG_MASK_18 | MSG_MASK_19 |
		MSG_MASK_20,
	MSG_LVL_MED | MSG_MASK_5 | MSG_MASK_6,
	MSG_LVL_MED | MSG_MASK_5,
	MSG_LVL_MED | MSG_MASK_5 | MSG_MASK_6,
	MSG_LVL_LOW,
	MSG_LVL_MED | MSG_MASK_5 | MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8 |
		MSG_MASK_9,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_MED | MSG_MASK_5 | MSG_MASK_6 | MSG_MASK_7 | MSG_MASK_8 |
		MSG_MASK_9 | MSG_MASK_10 | MSG_MASK_11 | MSG_MASK_12 |
		MSG_MASK_13 | MSG_MASK_14 | MSG_MASK_15 | MSG_MASK_16 |
		MSG_MASK_20 | MSG_MASK_21 | MSG_MASK_22,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_19[] = {
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_20[] = {
	MSG_LVL_LOW | MSG_MASK_5 | MSG_MASK_6 | MSG_MASK_7 |
	MSG_MASK_8 | MSG_MASK_9 | MSG_MASK_10 | MSG_MASK_11 |
	MSG_MASK_12,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_21[] = {
	MSG_LVL_HIGH
};

static const uint32_t msg_bld_masks_22[] = {
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_23[] = {
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW,
	MSG_LVL_LOW
};

static const uint32_t msg_bld_masks_24[] = {
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH,
	MSG_LVL_HIGH
};

static const uint32_t msg_bld_masks_25[] = {
	MSG_LVL_LOW
};

/* LOG CODES */
static const uint32_t log_code_last_tbl[] = {
	0x0,	/* EQUIP ID 0 */
	0x1C9A,	/* EQUIP ID 1 */
	0x0,	/* EQUIP ID 2 */
	0x0,	/* EQUIP ID 3 */
	0x4910,	/* EQUIP ID 4 */
	0x5420,	/* EQUIP ID 5 */
	0x0,	/* EQUIP ID 6 */
	0x74FF,	/* EQUIP ID 7 */
	0x0,	/* EQUIP ID 8 */
	0x0,	/* EQUIP ID 9 */
	0xA38A,	/* EQUIP ID 10 */
	0xB9FF,	/* EQUIP ID 11 */
	0x0,	/* EQUIP ID 12 */
	0xD1FF,	/* EQUIP ID 13 */
	0x0,	/* EQUIP ID 14 */
	0x0,	/* EQUIP ID 15 */
};

#define LOG_GET_ITEM_NUM(xx_code)	(xx_code & 0x0FFF)
#define LOG_GET_EQUIP_ID(xx_code)	((xx_code & 0xF000) >> 12)
#define LOG_ITEMS_TO_SIZE(num_items)	((num_items+7)/8)
#define LOG_SIZE_TO_ITEMS(size)		((8*size) - 7)
#define EVENT_COUNT_TO_BYTES(count)	((count/8) + 1)

#endif

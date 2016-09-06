/*
 * Copyright (C) 2011 Samsung Electronics. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef _SHTC1_DATA_H_
#define _SHTC1_DATA_H_

#define CP_THM_CHANNEL_NUM		3

/**
 * struct thm_adc_table - adc to temperature table for thermistors
 * driver
 * @adc: adc value
 * @temperature: temperature(C) * 10
 */
struct thm_adc_table {
	unsigned int adc;
	int temperature;
};

/* {adc, temp*10}, -20 to +70 */
static struct thm_adc_table temp_table_cp[] = {
	{240, 700}, {247, 690}, {254, 680}, {261, 670}, {268, 660},
	{275, 650}, {283, 640}, {291, 630}, {299, 620}, {307, 610},
	{315, 600}, {327, 590}, {339, 580}, {351, 570}, {363, 560},
	{375, 550}, {387, 540}, {399, 530}, {411, 520}, {423, 510},
	{435, 500}, {449, 490}, {463, 480}, {477, 470}, {491, 460},
	{505, 450}, {527, 440}, {549, 430}, {571, 420}, {593, 410},
	{615, 400}, {635, 390}, {655, 380}, {675, 370}, {695, 360},
	{715, 350}, {736, 340}, {757, 330}, {778, 320}, {799, 310},
	{820, 300}, {842, 290}, {864, 280}, {886, 270}, {908, 260},
	{953, 250}, {953, 240}, {976, 230}, {999, 220}, {1022, 210},
	{1045, 200}, {1067, 190}, {1089, 180}, {1111, 170}, {1133, 160},
	{1155, 150}, {1178, 140}, {1201, 130}, {1224, 120}, {1247, 110},
	{1270, 100}, {1291, 90}, {1291, 80}, {1333, 70}, {1354, 60},
	{1375, 50}, {1384, 40}, {1393, 30}, {1402, 20}, {1411, 10},
	{1420, 0},
	{1432, -10}, {1444, -20}, {1456, -30}, {1468, -40}, {1480, -50},
	{1490, -60}, {1500, -70}, {1510, -80}, {1520, -90}, {1530, -100},
	{1544, -110}, {1558, -120}, {1572, -130}, {1586, -140},{1600, -150},
	{1615, -160}, {1630, -170}, {1645, -180}, {1660, -190}, {1675, -200},
 };
/* {adc, temp*10}, -20 to +60 */
static struct thm_adc_table temp_table_batt[] = {
	{636, 600}, {659, 590}, {683, 580}, {707, 570}, {730, 560},
	{754, 550}, {782, 540}, {810, 530}, {838, 520}, {866, 510},
	{894, 500}, {924, 490}, {953, 480}, {982, 470}, {1011, 460},
	{1040, 450}, {1077, 440}, {1114, 430}, {1152, 420}, {1189, 410},
	{1227, 400}, {1259, 390}, {1293, 380}, {1326, 370}, {1360, 360},
	{1394, 350}, {1435, 340}, {1476, 330}, {1516, 320}, {1557, 310},
	{1598, 300}, {1642, 290}, {1687, 280}, {1731, 270}, {1776, 260},
	{1820, 250}, {1866, 240}, {1913, 230}, {1961, 220}, {2008, 210},
	{2055, 200}, {2111, 190}, {2166, 180}, {2222, 170}, {2277, 160},
	{2333, 150}, {2382, 140}, {2431, 130}, {2480, 120}, {2529, 110},
	{2578, 100}, {2624, 90}, {2670, 80}, {2717, 70}, {2763, 60},
	{2810, 50}, {2851, 40}, {2892, 30}, {2933, 20}, {2973, 10},
	{3014, 0}, {3056, -10}, {3099, -20}, {3142, -30}, {3185, -40},
	{3229, -50}, {3320, -60}, {3336, -70}, {3352, -80}, {3368, -90},
	{3385, -100}, {3494, -110}, {3509, -120}, {3524, -130}, {3539, -140},
	{3554, -150}, {3614, -160}, {3629, -170}, {3644, -180},{3659, -190},
	{3674, -200}
 };
/* {adc, temp*10}, -20 to +60 */
static struct thm_adc_table temp_table_chg[] = {
	{636, 600}, {659, 590}, {682, 580}, {705, 570}, {728, 560},
	{751, 550}, {779, 540}, {808, 530}, {837, 520}, {866, 510},
	{895, 500}, {924, 490}, {953, 480}, {982, 470}, {1011, 460},
	{1040, 450}, {1077, 440}, {1115, 430}, {1152, 420}, {1189, 410},
	{1227, 400}, {1260, 390}, {1293, 380}, {1326, 370}, {1360, 360},
	{1393, 350}, {1435, 340}, {1477, 330}, {1520, 320}, {1562, 310},
	{1604, 300}, {1648, 290}, {1691, 280}, {1735, 270}, {1778, 260},
	{1822, 250}, {1869, 240}, {1915, 230}, {1962, 220}, {2009, 210},
	{2056, 200}, {2110, 190}, {2164, 180}, {2219, 170}, {2273, 160},
	{2328, 150}, {2379, 140}, {2430, 130}, {2481, 120}, {2532, 110},
	{2584, 100}, {2629, 90}, {2674, 80}, {2719, 70}, {2764, 60},
	{2810, 50}, {2852, 40}, {2895, 30}, {2937, 20}, {2980, 10},
	{3022, 0}, {3063, -10}, {3103, -20}, {3144, -30}, {3184, -40},
	{3225, -50}, {3257, -60}, {3290, -70}, {3322, -80}, {3355, -90},
	{3387, -100}, {3523, -110}, {3532, -120}, {3540, -130}, {3549, -140},
	{3558, -150}, {3654, -160}, {3658, -170}, {3661, -180}, {3664, -190},
	{3667, -200}
};

#endif

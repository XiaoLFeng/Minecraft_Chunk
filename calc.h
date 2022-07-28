#include<math.h>

int calc_qkjs(int mc_x, int mc_y, int mc_z) {
	int x, y, z;
	int result;
	// 计算函数
	if (mc_x >= 0) {
		x = ceil(mc_x / 16);
	} else {
		x = floor(mc_x / 16);
	}
	if (mc_y >= 0) {
		y = ceil(mc_y / 16);
	} else {
		y = floor(mc_y / 16);
	}
	if (mc_y >= 0) {
		z = ceil(mc_z / 16);
	} else {
		z = floor(mc_z / 16)-1;
	}
	result = printf("%d ,%d ,%d\n", x, y, z);
	return result;
}

int calc_qkwjjs(int mc_x, int mc_z) {
	int x = 0, z = 0;
	int result;
	// 计算函数
	if (mc_x >= 0) {
		x = ceil(mc_x / 512);
	} else {
		x = floor(mc_x / 512);
	}
	if (mc_z >= 0) {
		z = ceil(mc_z / 512);
	} else {
		z = floor(mc_z / 512)-1;
	}
	result = printf("r.%d.%d.mca", x, z);
	return result;
}
#pragma once

const static int BLOCK_SIZE = 4096/sizeof(bool);

class FAT {
public:

	bool DiskBlock[BLOCK_SIZE];//��Ǵ��̿��Ƿ�ռ��
	void init();//��ʼ������
	int  getBlock();//��ȡһ���յĴ��̿�

};
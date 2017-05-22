#pragma once

#include<stack>
#include<algorithm>

const static int BLOCK_SIZE = 4096/sizeof(bool);

using namespace std;

class FAT {
public:

	stack<int>freeDiskBlock;//�մ��̿�ջ

	stack<int>fullDiskBlock;//ռ�ô��̿�



	void init(char blocks[][BLOCK_SIZE]);

	void init(string * blocks);

	int  getBlock();

	void addBlock(int block, string * blocks);

	void addBlock(int block, char blocks[][BLOCK_SIZE]);
	//��ȡһ���յĴ��̿�

};
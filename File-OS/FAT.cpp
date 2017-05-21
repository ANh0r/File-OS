#include<cstring>
#include "FAT.h"


void FAT::init(char blocks[][BLOCK_SIZE])//��ʼ������
{
	for (int i = 0; i < BLOCK_SIZE; i++) {
		this->freeDiskBlock.push(i);
	}
	memset(blocks, '\0', sizeof(blocks));
}

int FAT::getBlock()//��ȡ�մ���
{
	if (this->freeDiskBlock.size() > 0) {
		int blockId = this->freeDiskBlock.top();
		this->freeDiskBlock.pop();
		this->fullDiskBlock.push(blockId);
		return blockId;
	}
	return -1;
}

void FAT::addBlock(int block,char blocks[][BLOCK_SIZE])//���մ��̿�
{
	this->freeDiskBlock.push(block);
	memset(blocks[block], '\0', sizeof(blocks[block]));
}


#pragma once

#include "PCB.H"
#include "File.h"

class Folder:public PCB
{
public:
	//�ļ��а�����������
	map<PCB*, PCB*> child;

	//����ļ����ļ���
	void addChild(PCB* file);

};

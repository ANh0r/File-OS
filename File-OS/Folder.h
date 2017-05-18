#pragma once

#include "PCB.H"
#include "File.h"
#include <vector>
#include<string>
using namespace std;



class Folder:public PCB
{
public:
	//�ļ��а�����������
	vector<PCB *>child;
	

	//����ļ����ļ���
	void addChild(PCB* file);

	Folder(string _name, FileType _type);


	bool count(PCB *file);

	PCB* find(PCB *file);
	void erase(PCB* file);
};

#pragma once

#include "PCB.H"
#include<string>

class File:public PCB
{
public:
	//���캯��
	File();

	File::File(string _name, FileType _type);
	//��������
	~File();
	
	//���л�
	void Serialization();
	
	//�����л�
	void Deserialization();

	
	//�ļ�����
	char content[N];
	
	//��һ���ļ���
	PCB* father;


};






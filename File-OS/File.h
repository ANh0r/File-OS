#pragma once

#include "FCB.H"
#include<string>

class File:public FCB
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
	char *index[N];
	
	//��һ���ļ���
	FCB* father;


};






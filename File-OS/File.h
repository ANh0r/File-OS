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
	bool addContent(const char * content, string * blocks);//����ļ�����
	//�ļ�����
	int index[N];
	//��һ���ļ���
	FCB* father;

	void release(FAT & fat, string* blocks);//�ͷŴ��̿�




};

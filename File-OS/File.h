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
	int index[N];
	//��һ���ļ���
	FCB* father;


	//����ļ�����
	bool addContent(const char *content);

	void release(FAT & fat, char blocks[][N]);

	void release(FAT & fat, char ** blocks);//�ͷŴ��̿�




};

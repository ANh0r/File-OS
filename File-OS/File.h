#pragma once
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>
#include<map>
#include "PCB.H"
using namespace std;

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

	//�ļ��Ƿ���ͬ
	bool operator<(const File &t)const;

	//����ļ����ļ���
	void addChild(File file);

	

	
	//�ļ�����
	string content;
	//�ļ�����
	FileType type;
	//�ļ��а�����������
	map<File,File> child;
	//��һ���ļ���
	File* father;
	//�ļ�·��
	string path;

};






#include "DiskMannger.h"

DiskMannger::DiskMannger()
{
	root =new File();
	//���ô��̸�ΪĿ¼
	root->type = File::FOLDER;
	//���ø��ڵ�ĸ��ڵ�Ϊ����
	root->father = root;

	string cmd;
	while (cin >> cmd) 
	{

	}
}

DiskMannger::~DiskMannger()
{
}

void DiskMannger::format()
{
}

void DiskMannger::mkdir()
{
}

void DiskMannger::rmdir()
{
}

void DiskMannger::ls()
{
}

void DiskMannger::cd()
{
}

void DiskMannger::create()
{
}

void DiskMannger::open()
{
}

void DiskMannger::close()
{
}

void DiskMannger::write()
{
}

void DiskMannger::read()
{
}

void DiskMannger::rm()
{
}

#include "DiskMannger.h"

DiskMannger::DiskMannger()
{
	root =new File();
	//���ô��̸�ΪĿ¼
	root->type = File::FOLDER;
	//���ø��ڵ�ĸ��ڵ�Ϊ����
	root->father = root;
	cout << "��ӭ����~-----------��������help��ð���------------" << endl<< "\n[root@localhost ~]# ";
	string opear,cmd;
	while (cin >> cmd) 
	{
		 if (cmd == "format") {
			this->format();
		}
		else if (cmd == "mkdir") {
			this->mkdir();
		}
		else if (cmd == "rmdir") {
			this->rmdir();
		}
		else if (cmd == "ls") {
			this->ls();
		}
		else if (cmd == "cd") {
			this->cd();
		}
		else if (cmd == "create") {
			this->create();
		}
		else if (cmd == "open") {
			this->open();
		}
		else if (cmd == "close") {
			this->close();
		}
		else if (cmd == "write") {
			this->write();
		}
		else if (cmd == "read") {
			this->read();
		}
		else if (cmd == "rm") {
			this->rm();
		}else if(cmd=="help"){
			cout << "\n��format:���ļ��洢�����и�ʽ�����������ļ�ϵͳ�Ľṹ��������̿ռ���в��֣��������ϴ�����Ŀ¼�Լ����ڹ����ļ��洢�ռ�ȵ����ݽṹ��\n"<<
				"��mkdir:���ڴ�����Ŀ¼\n" <<
				"��rmdir : ����ɾ����Ŀ¼\n" <<
				"��ls : ������ʾĿ¼\n" <<
				"��cd : ���ڸ��ĵ�ǰĿ¼\n" <<
				"��create : ���ڴ����ļ�\n" <<
				"��open : ���ڴ��ļ�\n" <<
				"��close : ���ڹر��ļ�\n" <<
				"��write : ����д�ļ�\n" <<
				"��read : ���ڶ��ļ�\n" <<
				"��rm : ����ɾ���ļ�\n" << endl;
		}
		else {
			cout << "����ָ��������������룡��" << endl;
		}
		cout << "\n[root@localhost ~]# ";

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

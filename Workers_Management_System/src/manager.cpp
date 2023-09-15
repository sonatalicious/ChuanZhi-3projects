#include<iostream>
#include"manager.h"

Manager::Manager(int id, std::string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptID = dId;
}

void Manager::showInfo()
{
	std::cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并下发任务给员工" << std::endl;
}

std::string Manager::getDeptName()
{
	return std::string("经理");
}


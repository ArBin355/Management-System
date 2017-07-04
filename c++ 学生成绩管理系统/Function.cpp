#include "ClassHead.h"
#include <iostream>
using namespace std;


Mation::Mation(){

}

Mation::Mation(int num,string nam){
	number = num;
	name = nam;
}

int Mation::GetNumber(){
	return number;
}

string Mation::GetName(){
	return name;
}

Mation::~Mation(){

}


Grade::Grade(){

}

Grade::Grade(int c,int m,int e,int w,int h,int s,int p){
	chinese = c;
	math = m;
	english=e;
	wuli=w;
	huaxue=h;
	shengwu=s;
	PE = p;
}

int Grade::GetChinese(){
	return chinese;
}

int Grade::GetMath(){
	return math;
}

int Grade::GetEnglish(){
	return english;
}

int Grade::GetWuli(){
	return wuli;
}

int Grade::GetHuaxue(){
	return huaxue;
}

int Grade::GetShengwu(){
	return shengwu;
}

int Grade::GetPE(){
	return PE;
}

Grade::~Grade(){

}


Student::Student(){

}

Student::Student(int num,string nam,int c,int m,int e,int w,int h,int s,int p):Mation(num,nam),Grade(c,m,e,w,h,s,p)
{

}

Student::~Student(){

}


Operation::Operation(){

}

int Operation::Add(){
	return 0;
}

int Operation::Check(){
	return 0;
}

int Operation::Find(){
	return 0;
}

Operation::~Operation(){

}


System::System(){
	
}


int System::Add(int num,string nam,int c,int m,int e,int w,int h,int s,int p){
	student[currentnum] = Student(num,nam,c,m,e,w,h,s,p);
	++currentnum;
	return 0;
}

int System::Check(int i,int fin){
	cout << "学号\t姓名\t语文\t数学\t英语\t物理\t化学\t生物\t体育" << endl;
	for(;i < fin;++i){
		cout << student[i].GetNumber() << "\t";
		cout << student[i].GetName() << "\t";
		cout << student[i].GetChinese() << "\t";
		cout << student[i].GetMath() << "\t";
		cout << student[i].GetEnglish() << "\t";
        cout << student[i].GetWuli() << "\t";
		cout << student[i].GetHuaxue() << "\t";
		cout << student[i].GetShengwu() << "\t";
		cout << student[i].GetPE() << "\t";
		cout << endl;
	}
	return 0;
}

int System::Find(string str){
	int i = 0;
	for(i = 0;i < currentnum;++i){
		if(student[i].GetName() == str)
			return i;
		else
			continue;
	}
	return -1;
}

int System::Delete(int num){
	for(;num < currentnum;++num){
		student[num] = student[num + 1];
	}
	--currentnum;
	cout << "删除成功！" << endl;
	return 0;
}

System::~System(){

}
#ifndef ClassHead
#define ClassHead

#include <iostream>
#include <string>
using namespace std;

class Mation{
public:
	Mation();
	Mation(int num,string nam);
	int GetNumber();
	string GetName();
	~Mation();
private:
	int number;
	string name;
};

class Grade{
public:
	Grade();
	Grade(int c,int m,int e,int w,int h,int s,int p);
	int GetChinese();
	int GetMath();
	int GetEnglish();
	int GetWuli();
	int GetHuaxue();
	int GetShengwu();
	int GetPE();
	~Grade();
private:
	int chinese;
	int math;
	int english;
	int wuli;
	int huaxue;
	int shengwu;
	int PE;
};

class Student:public Mation,public Grade{
public:
	Student();
	Student(int num,string nam,int c,int m,int e,int w,int h,int s,int p);
	~Student();
private:
};

class Operation{
public:
	Operation();
	int Add();
	int Check();
	int Find();
	int Delete();
	~Operation();
private:
};

class System:public Student,public Operation{
public:
	System();
	int Add(int num,string nam,int c,int m,int e,int w,int h,int s,int p);
	int Check(int i = 0,int fin = currentnum);
	int Find(string str);
	int Delete(int num);
	~System();
private:
	Student student[100];
	static int currentnum;
};

#endif
#include "ClassHead.h"
#include <iostream>
using namespace std;

int System::currentnum = 0;

int main(){
	System sys;
	int choose = 0;
	while(1){
		cout << "        +---------------------- 学生成绩管理系统 --------------------+       " << endl;
        cout << "                                       +                                     " << endl;
        cout << "                                       +                                     " << endl;
        cout << "                                       +                                     " << endl;
        cout << "        +------------------------------------------------------------+       " << endl;
		cout << "        | 1.检查学生列表                                             |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 2.增加学生信息                                             |       " << endl;
        cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 3.通过姓名查找学生信息                                     |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 4.删除学生信息                                             |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 5.退出                                                     |       " << endl;
		cout << "        +------------------------------------------------------------+       " << endl;
		cout << "请输入你的选择：" << endl;
		cin >> choose;
		switch(choose){
		case 1:{
			sys.Check();
			cout << "检查完成" << endl;
			cout << "请输入任意键继续。。。" << endl;
			getchar();
			getchar();
			break;
			   }
		case 2:{
			char flag = 'Y';
			string name;
			long int number;
			int chinese;
			int math;
			int english;
			int wuli;
			int huaxue;
			int shengwu;
			int PE;
			while(flag == 'Y' || flag == 'y'){
				cout << "请输入学生的信息" << endl;
				cout << "学号\t姓名\t语文\t数学\t英语\t物理\t化学\t生物\t体育 " << endl;
				cin >> number >> name >> chinese >> math >> english >> wuli >> huaxue >> shengwu >> PE;
				sys.Add(number,name,chinese,math,english,wuli,huaxue,shengwu,PE);
				cout << "是否继续？请输入Y或N" << endl;
				cin >> flag;
			}
			cout << "增加成功！" << endl;
			cout << "请输入任意键继续。。。" << endl;
			getchar();
			getchar();
			break;
			   }
		case 3:{
			string str;
			int flag = 0;
			cout << "请输入你想要查找的学生姓名：" << endl;
			cin >> str;
			flag = sys.Find(str);
			if(flag == -1)
				cout << "此学生不存在！" << endl;
			else{
				cout << "查找成功！" << endl;
				sys.Check(flag,flag+1);
			}
			cout << "请输入任意键继续。。。" << endl;
			getchar();
			getchar();
			break;
			   }
		case 4:{
			string str;
			int flag = 0;
			cout << "请输入你想要删除的学生姓名：" << endl;
			cin >> str;
			flag = sys.Find(str);
			if(flag == -1)
				cout << "此学生不存在！" << endl;
			else{
				char comfirm = 'N';
				cout << "查找成功" << endl;
				sys.Check(flag,flag+1);
				cout << "确认删除请按Y否则按N" << endl;
				cin >> comfirm;
				if(comfirm == 'Y' || comfirm == 'y')
					sys.Delete(flag);
			}
			cout << "请输入任意键继续。。。" << endl;
			getchar();
			getchar();
			break;
			   }
		case 5:{
			exit(0);
			break;
			   }
		}
		system("cls");
	}
	return 0;
}
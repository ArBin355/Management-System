#include "ClassHead.h"
#include <iostream>
using namespace std;

int System::currentnum = 0;

int main(){
	System sys;
	int choose = 0;
	while(1){
		cout << "        +---------------------- ѧ���ɼ�����ϵͳ --------------------+       " << endl;
        cout << "                                       +                                     " << endl;
        cout << "                                       +                                     " << endl;
        cout << "                                       +                                     " << endl;
        cout << "        +------------------------------------------------------------+       " << endl;
		cout << "        | 1.���ѧ���б�                                             |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 2.����ѧ����Ϣ                                             |       " << endl;
        cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 3.ͨ����������ѧ����Ϣ                                     |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 4.ɾ��ѧ����Ϣ                                             |       " << endl;
		cout << "         ------------------------------------------------------------        " << endl;
		cout << "        | 5.�˳�                                                     |       " << endl;
		cout << "        +------------------------------------------------------------+       " << endl;
		cout << "���������ѡ��" << endl;
		cin >> choose;
		switch(choose){
		case 1:{
			sys.Check();
			cout << "������" << endl;
			cout << "���������������������" << endl;
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
				cout << "������ѧ������Ϣ" << endl;
				cout << "ѧ��\t����\t����\t��ѧ\tӢ��\t����\t��ѧ\t����\t���� " << endl;
				cin >> number >> name >> chinese >> math >> english >> wuli >> huaxue >> shengwu >> PE;
				sys.Add(number,name,chinese,math,english,wuli,huaxue,shengwu,PE);
				cout << "�Ƿ������������Y��N" << endl;
				cin >> flag;
			}
			cout << "���ӳɹ���" << endl;
			cout << "���������������������" << endl;
			getchar();
			getchar();
			break;
			   }
		case 3:{
			string str;
			int flag = 0;
			cout << "����������Ҫ���ҵ�ѧ��������" << endl;
			cin >> str;
			flag = sys.Find(str);
			if(flag == -1)
				cout << "��ѧ�������ڣ�" << endl;
			else{
				cout << "���ҳɹ���" << endl;
				sys.Check(flag,flag+1);
			}
			cout << "���������������������" << endl;
			getchar();
			getchar();
			break;
			   }
		case 4:{
			string str;
			int flag = 0;
			cout << "����������Ҫɾ����ѧ��������" << endl;
			cin >> str;
			flag = sys.Find(str);
			if(flag == -1)
				cout << "��ѧ�������ڣ�" << endl;
			else{
				char comfirm = 'N';
				cout << "���ҳɹ�" << endl;
				sys.Check(flag,flag+1);
				cout << "ȷ��ɾ���밴Y����N" << endl;
				cin >> comfirm;
				if(comfirm == 'Y' || comfirm == 'y')
					sys.Delete(flag);
			}
			cout << "���������������������" << endl;
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
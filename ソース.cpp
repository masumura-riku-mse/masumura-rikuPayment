#include<iostream>
#include<vector>
using namespace std;

//�����v�Z�̊֐��̒�`
auto Pay (int n){
	if (n == 0)
		return 0;
	//1�R�}1520�~������4��
	else return n * 1520 * 4 ;
	}


int main() {
	//vector�̒�`
	vector<int> v;

	//class�̒�`

	class Payment {
	public:
		//date(�j��),lesson(�R�}��),money(����)���琬��class���\��
		string date;
		int lesson;
		int money;

		//�����o�֐����`
		void show() {
			cout << "�������̗j����" << money << "�~�҂��܂�.\n";
		}

	};
	cout << "���w����1�J�����̋������v�Z���܂�.\n";

	//���j���̋���
	cout << "\n" << "���j���̃R�}������͂���Enter�������Ă�������\n";
		int a;
		cin >> a;
		v.push_back(Pay (a));
		Payment monday { "���j��",a ,Pay(a)};
		monday.show();

	//�Ηj���̋���
	cout << "\n" << "�Ηj���̃R�}������͂���Enter�������Ă�������\n";
	    int b;
		cin >> b;
		v.push_back(Pay (b));
		Payment tuesday{ "�Ηj��",b ,Pay(b)};
		tuesday.show();

	//���j���̋���
    cout << "\n" << "���j���̃R�}������͂���Enter�������Ă�������\n";
        int c;
	    cin >> c;
		v.push_back(Pay(c));
		Payment wednesday{ "���j��",c ,Pay(c) };
		wednesday.show();

	//�ؗj���̋���
	cout << "\n" << "�ؗj���̃R�}������͂���Enter�������Ă�������\n";
	    int d;
	    cin >> d;
		v.push_back(Pay(d));
		Payment thursday{ "�ؗj��",d ,Pay(d) };
		thursday.show();

	//���j���̋���
	cout << "\n" << "���j���̃R�}������͂���Enter�������Ă�������\n";
	    int e;
	    cin >> e;
		v.push_back(Pay(e));
		Payment friday{ "���j��",e ,Pay(e) };
		friday.show();

	//�y�j���̋���
	cout << "\n" << "�y�j���̃R�}������͂���Enter�������Ă�������\n";
	    int f;
	    cin >> f;
		v.push_back(Pay(f));
		Payment saturday{ "�y�j��",f ,Pay(f) };
		saturday.show();

	    //vector�̃T�C�Y������
		size_t s = v.size();

        //total�̏����l������
		int total = 0;

	    //���̋����̍��v���v�Z
		for (size_t j = 0;j < s;++j) {
	
			//���v�ɗ[��̋��������Z
			total += v[j] + 4 * 75;
		}
		//�����̍��v��\��
		cout << "\n" << "�����͍��v��" << total << "�~�҂��܂�." << endl;
}

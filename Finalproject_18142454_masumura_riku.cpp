#include<iostream>
#include<vector>
using namespace std;

//給料計算の関数の定義
auto Pay (int n){
	if (n == 0)
		return 0;
	//1コマ1520円が月に4回
	else return n * 1520 * 4 ;
	}


int main() {
	//vectorの定義
	vector<int> v;

	//classの定義

	class Payment {
	public:
		//date(曜日),lesson(コマ数),money(給料)から成るclassを構成
		string date;
		int lesson;
		int money;

		//メンバ関数を定義
		void show() {
			cout << "今月この曜日は" << money << "円稼げます.\n";
		}

	};
	cout << "今学期の1カ月分の給料を計算します.\n";

	//月曜日の給料
	cout << "\n" << "月曜日のコマ数を入力してEnterを押してください\n";
		int a;
		cin >> a;
		v.push_back(Pay (a));
		Payment monday { "月曜日",a ,Pay(a)};
		monday.show();

	//火曜日の給料
	cout << "\n" << "火曜日のコマ数を入力してEnterを押してください\n";
	    int b;
		cin >> b;
		v.push_back(Pay (b));
		Payment tuesday{ "火曜日",b ,Pay(b)};
		tuesday.show();

	//水曜日の給料
    cout << "\n" << "水曜日のコマ数を入力してEnterを押してください\n";
        int c;
	    cin >> c;
		v.push_back(Pay(c));
		Payment wednesday{ "水曜日",c ,Pay(c) };
		wednesday.show();

	//木曜日の給料
	cout << "\n" << "木曜日のコマ数を入力してEnterを押してください\n";
	    int d;
	    cin >> d;
		v.push_back(Pay(d));
		Payment thursday{ "木曜日",d ,Pay(d) };
		thursday.show();

	//金曜日の給料
	cout << "\n" << "金曜日のコマ数を入力してEnterを押してください\n";
	    int e;
	    cin >> e;
		v.push_back(Pay(e));
		Payment friday{ "金曜日",e ,Pay(e) };
		friday.show();

	//土曜日の給料
	cout << "\n" << "土曜日のコマ数を入力してEnterを押してください\n";
	    int f;
	    cin >> f;
		v.push_back(Pay(f));
		Payment saturday{ "土曜日",f ,Pay(f) };
		saturday.show();

	    //vectorのサイズを決定
		size_t s = v.size();

        //totalの初期値を決定
		int total = 0;

	    //月の給料の合計を計算
		for (size_t j = 0;j < s;++j) {
	
			//合計に夕礼の給料を加算
			total += v[j] + 4 * 75;
		}
		//給料の合計を表示
		cout << "\n" << "今月は合計で" << total << "円稼げます." << endl;
}

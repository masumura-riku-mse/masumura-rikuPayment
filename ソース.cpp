#include<iostream>
#include<vector>
using namespace std;

//‹‹—¿ŒvZ‚ÌŠÖ”‚Ì’è‹`
auto Pay (int n){
	if (n == 0)
		return 0;
	//1ƒRƒ}1520‰~‚ªŒ‚É4‰ñ
	else return n * 1520 * 4 ;
	}


int main() {
	//vector‚Ì’è‹`
	vector<int> v;

	//class‚Ì’è‹`

	class Payment {
	public:
		//date(—j“ú),lesson(ƒRƒ}”),money(‹‹—¿)‚©‚ç¬‚éclass‚ğ\¬
		string date;
		int lesson;
		int money;

		//ƒƒ“ƒoŠÖ”‚ğ’è‹`
		void show() {
			cout << "¡Œ‚±‚Ì—j“ú‚Í" << money << "‰~‰Ò‚°‚Ü‚·.\n";
		}

	};
	cout << "¡ŠwŠú‚Ì1ƒJŒ•ª‚Ì‹‹—¿‚ğŒvZ‚µ‚Ü‚·.\n";

	//Œ—j“ú‚Ì‹‹—¿
	cout << "\n" << "Œ—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
		int a;
		cin >> a;
		v.push_back(Pay (a));
		Payment monday { "Œ—j“ú",a ,Pay(a)};
		monday.show();

	//‰Î—j“ú‚Ì‹‹—¿
	cout << "\n" << "‰Î—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
	    int b;
		cin >> b;
		v.push_back(Pay (b));
		Payment tuesday{ "‰Î—j“ú",b ,Pay(b)};
		tuesday.show();

	//…—j“ú‚Ì‹‹—¿
    cout << "\n" << "…—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
        int c;
	    cin >> c;
		v.push_back(Pay(c));
		Payment wednesday{ "…—j“ú",c ,Pay(c) };
		wednesday.show();

	//–Ø—j“ú‚Ì‹‹—¿
	cout << "\n" << "–Ø—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
	    int d;
	    cin >> d;
		v.push_back(Pay(d));
		Payment thursday{ "–Ø—j“ú",d ,Pay(d) };
		thursday.show();

	//‹à—j“ú‚Ì‹‹—¿
	cout << "\n" << "‹à—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
	    int e;
	    cin >> e;
		v.push_back(Pay(e));
		Payment friday{ "‹à—j“ú",e ,Pay(e) };
		friday.show();

	//“y—j“ú‚Ì‹‹—¿
	cout << "\n" << "“y—j“ú‚ÌƒRƒ}”‚ğ“ü—Í‚µ‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n";
	    int f;
	    cin >> f;
		v.push_back(Pay(f));
		Payment saturday{ "“y—j“ú",f ,Pay(f) };
		saturday.show();

	    //vector‚ÌƒTƒCƒY‚ğŒˆ’è
		size_t s = v.size();

        //total‚Ì‰Šú’l‚ğŒˆ’è
		int total = 0;

	    //Œ‚Ì‹‹—¿‚Ì‡Œv‚ğŒvZ
		for (size_t j = 0;j < s;++j) {
	
			//‡Œv‚É—[—ç‚Ì‹‹—¿‚ğ‰ÁZ
			total += v[j] + 4 * 75;
		}
		//‹‹—¿‚Ì‡Œv‚ğ•\¦
		cout << "\n" << "¡Œ‚Í‡Œv‚Å" << total << "‰~‰Ò‚°‚Ü‚·." << endl;
}

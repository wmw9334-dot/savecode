#include <iostream>
#include <string>
using namespace std;

int main(){
	string S1 = "My Name is Mohammed Abu-Hadhoud, I Love Programming.";
	//هي عبارة عن جملة تحتوي على 56 حرفا بما فيهم المسافات والنقاط

		cout << S1.length() << endl;

		// يُعيد الحرف الموجود في الموضع 3
	cout << S1.at(3) << endl;

	//يضيف @ProgrammingAdvices إلى نهاية السلسلة
	S1.append(" @ProgrammingAdvices");
	cout << S1 << endl;

	//يضيف Ali في الموضع 7
	S1.insert(7, " Ali ");
	cout << S1 << endl;

	//يطبع جميع الأحرف التالية 8 من الموضع 16.
	cout << S1.substr(16, 8) << endl;

	//يضيف حرفًا واحدًا إلى نهاية السلسلة
	S1.push_back('X');
	cout << S1 << endl;

	// يزيل حرفًا واحدًا من نهاية السلسلة
	S1.pop_back();
	cout << S1 << endl;

	// يعثر على Ali يبحث عن السلسلة
	cout << S1.find("Ali") << endl;

	// يعثر على ali يبحث عن السلسلة
	cout << S1.find("ali") << endl;

	if (S1.find("ali") == S1.npos){
		cout << "ali is not found";
	}

	//يمسح جميع أحرف السلسلة النصية.
	S1.clear();
	cout << S1 << endl;

	return 0;
}


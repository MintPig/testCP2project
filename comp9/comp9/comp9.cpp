#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<map>

using namespace std;

/*
void dump(list<string> &l) {
list<string>::iterator iter = l.begin();

while (iter != l.end()) {
cout << *iter << endl;
iter++;
}
}
*/

class Word {
private :
	string word;
public:
	Word(string word) {
		this->word = word;
	}
	string getWord() {
		return this->word;
	}
};
void main() {
	map<char, list<Word>>m;
	list<Word> aList;
	list<Word> bList;
	aList.push_back(Word("apple"));
	aList.push_back(Word("avoid"));
	aList.push_back(Word("appear"));

	bList.push_back(Word("bread"));
	bList.push_back(Word("bring"));
	bList.push_back(Word("bow"));

	m['a'] = aList;
	m['b'] = bList;

	map<char, list<Word>>::const_iterator iter = m.begin();

	while (iter != m.end()) {
		cout << iter->first << ":" << endl;

		list<Word> temp = iter->second;
		list<Word>::const_iterator iter_list = temp.begin();

		while (iter_list != temp.end()) {
			Word word = *iter_list;
			cout << word.getWord() << ",";
			iter_list++;
		}
		cout << "\n===" << endl;
		iter++;
	}




	/*
	map<string, int> m;
	m["seoul"] = 100;
	m["daegu"] = 120;
	m["busan"] = 200;

	cout << "Train to Seoul = " << m["seoul"] << "$" << endl;
	cout << "Train to Daegu = " << m["daegu"] << "$" << endl;
	cout << "Train to Busan = " << m["busan"] << "$" << endl;

	*/
	

	/*
	list <string> names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "university");
	names.insert(names.end(), "sclab");
	names.insert(names.end(), "csy");
	dump(names);
	cout << "====" << endl;
	names.reverse();
	dump(names);

	*/
	


	/*
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "access index at 1 : " << v.at(1) << endl;

	v.erase(v.begin());
	v.erase(v.end() - 1);

	vector<int>::iterator iter = v.begin();

	cout << "access index at 1 with iterator :" << iter[1] << endl;

	while (iter != v.end()) {
		cout << *iter << endl;
		iter++;
	}
	*/
	
}
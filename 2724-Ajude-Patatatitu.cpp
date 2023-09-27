#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N, T, I, U, TRUEFALSE = 0, TF, IND;
	cin >> N;
	while (N--) {
		if (TRUEFALSE == 1) {
			cout << endl;
		}
		TRUEFALSE = 1;
		cin >> T;
		vector<string> v(T);
		for (I = 0; I < T; I++) {
			cin >> v[I];
		}
		cin >> U;
		string STR;
		while (U--) {
			cin >> STR;
			TF = 0;
			size_t found;
			for (I = 0; I < T; I++) {
				found = STR.find(v[I]);
				if (found != string::npos) {
					IND = found;
					IND += v[I].length();
					if (STR.length() >= IND && ((STR[IND] >= 97 && STR[IND] <= 122) || (isdigit(STR[IND])))) {
						continue;
					}
					cout << "Abortar" << endl;
					TF = 1;
					break;
				}
			}
			if (TF == 0) {
				cout << "Prossiga" << endl;
			}
		}
	}
	return 0;
}
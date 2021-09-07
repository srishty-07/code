#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'stringConstruction' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */
string removeDuplicatesFromString(string str)
{

	// keeps track of visited characters
	int counter = 0;

	int i = 0;
	int size = str.size();

	// gets character value
	int x;

	// keeps track of length of resultant string
	int length = 0;

	while (i < size) {
		x = str[i] - 97;

		// check if Xth bit of counter is unset
		if ((counter & (1 << x)) == 0) {

			str[length] = 'a' + x;

			// mark current character as visited
			counter = counter | (1 << x);

			length++;
		}
		i++;
	}

	return str.substr(0, length);
}
int stringConstruction(string s) {
   string l = removeDuplicatesFromString(s);
   return l.length();
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

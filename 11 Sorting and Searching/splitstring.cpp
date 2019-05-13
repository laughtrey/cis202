/**
 * Provided class starter code for splitting a string of information
 * with a selected delimiter.
 */
#include "splitstring.h"
#include <vector>
#include <string>
using namespace std;
// split: receives a char delimiter; returns a vector of strings
// By default ignores repeated delimiters, unless argument rep == 1.
vector<string>& splitstring::split(char delim, int rep)
{
	if (!flds.empty()) flds.clear(); // empty vector if necessary
	string work = data();
	string buf = "";
	int i = 0;
	while (i < work.length()) {
		if (work[i] != delim)
			buf += work[i];
		else if (rep == 1) {
			flds.push_back(buf);
			buf = "";
		} else if (buf.length() > 0) {
			flds.push_back(buf);
			buf = "";
		}
		i++;
	}
	if (!buf.empty())
		flds.push_back(buf);
	return flds;
}

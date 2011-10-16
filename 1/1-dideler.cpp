/* Problem 1
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Dennis Ideler - Nov 2010
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
using namespace std;

typedef long long               ll;
typedef vector<int>             vi;
typedef vector<vi>              vvi;
typedef pair<int, int>		pi;
typedef vector<pi>              vii; // vector of integer pairs
typedef set<int>                si;
typedef map<string, int>        msi;

#define DEBUG
#define REP(i,a)        for(reg i=0;i<a;i++)
#define FOR(i,a,b)      for(i=a;i<b;i++)
#define VE              vector<int>
#define SZ              size()
#define PB              push_back
#define TRsi(c,it)	for(si::iterator it=(c).begin();it!=(c).end();it++) // cout << " " << *it;
#define TRvii(c,it)     for(vii::iterator it=(c).begin();it!=(c).end();it++) // cout << " " << *it;
#define TRmsi(c,it)     for(msi::iterator it=(c).begin();it!=(c).end();it++)
#define INF             2000000000 // 2 billion
#define reg             register int // e.g. reg i = 0;
//memset(arr, 0, sizeof(arr)); // clear array of integers

int main()
{
	// Checking every number below 1000 to see if it's a multipe of 3 or 5 is too slow.
	// Instead we calculate and sum the multiples of 3 OR 5 that are below 1000 (OR indicates no duplicates)

	unsigned int sum=0, mul3=3, mul5=5;
	si multiples; // set of multiples of 3 or 5

	for(; mul3 < 1000; mul3+=3) // insert multiples of 3 below 1000
		multiples.insert(mul3);
		
	for(; mul5 < 1000; mul5+=5) // insert multiples of 5 below 1000 (multiples dividible by 15 are duplicates and won't be inserted)
		multiples.insert(mul5);
	
	TRsi(multiples,it)
		sum += (int) *it;

	printf("%d\n",sum);
	return 0;
}


#include <iostream>
#include <vector>

// typedefs
typedef long long ll;
typedef std::pair<int, int> pii;
typedef std::vector<pii> vpii;

// Macros
// they change certain lines of code to given ones
#define F first
#define S second
#define PB push_back
#define MP std::make_pair

// (std::make_pair(v1, v2) is a shortened as std::pair<int, int> (v1, v2))
// provided that v1 and v2 are integers


// More complicated macro
#define REP(i,a,b) for (int i = a; i <= n; i++)

// Sometimes macros can cause bugs that is hard to resolve
#define SQ(a) (a * a) // bad variant
#define SQUARE(a) (a) * (a)

// In general, it is possible to do following:
#define BEGIN {
#define END }

int main()
BEGIN
	ll value = 234234;
	vpii vec {};
	vec.push_back(pii (4, 2));
	
	vec.PB(MP(5, 3));
	std::cout << "first: " << vec[1].F << " second: " << vec[1].S << std::endl;
	
	int i {};
	int n = 10;
	REP(i, 0, n)
	{
		std::cout << "i: " << i << '\n';
	}

	std::cout << "Invalid square of 3 + 3: " << SQ(3 + 3) << std::endl;
	std::cout << "Correct square of 3 + 3: " << SQUARE(3 + 3) << std::endl;
	return 0;
END


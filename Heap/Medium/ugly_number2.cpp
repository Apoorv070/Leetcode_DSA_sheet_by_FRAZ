//https://leetcode.com/problems/ugly-number-ii/
class Solution {
public:

    int nthUglyNumber(int n) {
        
	long num;
	set<long> s({ 1 });

	for (int i=0; i<n; i++) {
		num = *s.begin();
		s.erase(num);
		s.insert(num*2);
		s.insert(num*3);
		s.insert(num*5);
	}

	return num;
    }

};

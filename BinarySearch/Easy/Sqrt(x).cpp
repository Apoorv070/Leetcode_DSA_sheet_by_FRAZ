class Solution {
public:
int mySqrt(int x)
{
	long long low = 0;
	long long high = x;

	while (low < high)
	{
		long long mid = (high - low) / 2 + low;

		if (mid * mid == x)
			return mid;
		else if (mid * mid > x)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return low * low > x ? low - 1 : low;
}
};

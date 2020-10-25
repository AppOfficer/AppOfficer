// Header File FOR ALL!
// File Name: ALL.h

// begin WHOLE file

#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////
// File: my_maths.h ////////////////////////////
////////////////////////////////////////////////

// This file is for Mathematic operations
// File Name: my_maths.h

// begin file

namespace my_all {

// Constants

	const long long LLINF = 0x7fffffffffffffff;
	const long LINF = 0x7fffffff;
	const int INF = 0x7fffffff;
	const short SINF = 0x7fff;
	const float FMAX = 3.4e+38;
	const float FMIN = -3.4e+38;
	const double DLMAX = 1.7e+308;
	const double DLMIN = -1.7e+308;

	const double _eps = 1e-8;

// Non-class(Non-struct) functions

// For operations
	template <class T> bool Equ(const T& a, const T& b, const double& eps = _eps) {
		return (fabs(a - b) < eps);
	}
	template <class T> bool More(const T& a, const T& b, const double& eps = _eps) {
		return (a - b > eps);
	}
	template <class T> bool Less(const T& a, const T& b, const double& eps = _eps) {
		return (a - b < -eps);
	}
	template <class T> bool MoreEqu(const T& a, const T& b, const double& eps = _eps) {
		return (a - b > -eps);
	}
	template <class T> bool LessEqu(const T& a, const T& b, const double& eps = _eps) {
		return (a - b < eps);
	}

// This function is for the Maximum of the two numbers
// use template
// *** Function Name: template <class T> T Max(T a, T b) ***
	template <class T> const T Max(const T& a, const T& b) {
		return (a > b ? a : b);
	}

// This function is for the Minimum of the two numbers
// use template
// *** Function Name: template <class T> T Min(T a, T b) ***
	template <class T> const T Min(const T& a, const T& b) {
		return (a < b ? a : b);
	}

// This function is for absolute value
// use template
// *** Function Name: template <class T> T abs(T a) ***
	template <class T> const T abs(const T& a) {
		return (a < 0 ? -a : a);
	}

// This function is for the greatest common divisor
// *** Function Name: const int gcd(const int& a, const int& b) ***
	const int gcd(const int& a, const int& b) {
		if(b == 0) return a;
		else return gcd(b, a % b);
	}

// Reload gcd
// *** Function Name: const long long gcd(const long long& a, const long long& b) ***
	const long long gcd(const long long& a, const long long& b) {
		if(b == 0LL) return a;
		else return gcd(b, a % b);
	}

// This function is for the least common multiple
// *** Function Name: const int lcm(const int& a, const int& b) ***
	const int lcm(const int& a, const int& b) {
		return (a / gcd(a, b) * b);
	}

// Reload lcm
// *** Function Name: const long long lcm(const long long& a, const long long& b) ***
	const long long lcm(const long long& a, const long long& b) {
		return (a / gcd(a, b) * b);
	}

// This function is for power
// *** Function Name: const int pow(const int& a, const int& b) ***
	const int pow(const int& a, const int& b) {
		int res = 1;
		for(int i = 1; i <= b; i++)
			res *= a;
		return res;
	}

// Reload pow
// *** Function Name: const long long pow(const long long& a, const int& b) ***
	const long long pow(const long long& a, const int& b) {
		long long res = 1LL;
		for(int i = 1; i <= b; i++)
			res *= a;
		return res;
	}

// Reload pow
// *** Function Name: const double pow(const double& a, const int& b) ***
	const double pow(const double& a, const int& b) {
		double res = 1.0;
		for(int i = 1; i <= b; i++)
			res *= a;
		return res;
	}

// This function is for (pow + mod)
// *** Function Name: const int pow_mod(const int& a, const int& b, const int& k) ***
	const int pow_mod(const int& a, const int& b, const int& k) {
		int res = 1;
		for(int i = 1; i <= b; i++)
			res = res * (a % k) % k;
		return res;
	}

// Reload pow_mod
// *** Function Name: const long long pow_mod(const long long& a, const int& b, const long long& k) ***
	const long long pow_mod(const long long& a, const int& b, const long long& k) {
		int res = 1LL;
		for(int i = 1; i <= b; i++)
			res = res * (a % k) % k;
		return res;
	}

// This function is for binary power
// *** Function Name: const int binary_pow(const int& a, const long long& b) ***
	const int binary_pow(const int& a, const long long& b) {
		if(b == 1LL) return 1;
		if(b == 1LL) return a;

		if(b & 1LL)
			return a * binary_pow(a, b - 1LL);
		else {
			int res = binary_pow(a, b / 2LL);
			return res * res;
		}
	}

// Reload binary_pow
// *** Function Name: const long long binary_pow(const long long& a, const long long& b) ***
	const long long binary_pow(const long long& a, const long long& b) {
		if(b == 1LL) return 1LL;
		if(b == 1LL) return a;

		if(b & 1LL)
			return a * binary_pow(a, b - 1LL);
		else {
			long long res = binary_pow(a, b / 2LL);
			return res * res;
		}
	}

// Reload binary_pow
// *** Function Name: const double binary_pow(const double& a, const long long& b) ***
	const double binary_pow(const double& a, const long long& b) {
		if(b == 0LL) return 1.0;
		if(b == 1LL) return a;

		if(b & 1LL)
			return a * binary_pow(a, b - 1LL);
		else {
			double res = binary_pow(a, b / 2LL);
			return res * res;
		}
	}

// This function is for (binary_pow + mod)
// *** Function Name: const int binary_pow_mod(const int& a, const long long& b, const int& k) ***
	const int binary_pow_mod(const int& a, const long long& b, const int& k) {
		if(b == 0LL) return 1 % k;
		if(b == 1LL) return a % k;

		if(b & 1LL)
			return ((a % k) * (binary_pow_mod(a, b - 1LL, k))) % k;
		else {
			int res = binary_pow_mod(a, b / 2LL, k);
			return (res * res) % k;
		}
	}

// Reload binary_pow_mod
// *** Function Name: const long long binary_pow_mod(const long long& a, const long long& b, const long long& k) ***
	const long long binary_pow_mod(const long long& a, const long long& b, const long long& k) {
		if(b == 0LL) return 1LL % k;
		if(b == 1LL) return a % k;

		if(b & 1LL)
			return ((a % k) * (binary_pow_mod(a, b - 1LL, k))) % k;
		else {
			long long res = binary_pow_mod(a, b / 2LL, k);
			return (res * res) % k;
		}
	}

// This function is for turning array(int) to string
	string array_to_string(int x[], int len) {
		string s;
		for(int i = len; i >= 1; i--)
			s += char(x[i] + '0');
		return s;
	}

// This function is for turning string to array(int)
	int string_to_array(string s, int x[]) {
		for(int i = 0; i < s.size(); i++)
			x[s.size() - i] = s[i] - '0';
		return s.size();
	}

// This function is for turning number(int) to string
	string num_to_string(int x) {
		string s;
		int temp = x;
		while(temp > 0) {
			s = s + char(temp % 10 + '0');
			temp /= 10;
		}
		reverse(s.begin(), s.end());
		return s;
	}

// This function is for turning string to number(int)
	void string_to_num(const string& s, int& x) {
		x = 0;
		for(int i = 0; i < s.size(); i++)
			x = x * 10 +(s[i] - '0');
	}

// Reload string_to_num
	int string_to_num(const string& s) {
		int x = 0;
		for(int i = 0; i < s.size(); i++)
			x = x * 10 +(s[i] - '0');
		return x;
	}

// This function is for copying arrays
// use template
	template <class T>
	int arrcpy(T a[], T b[], int st, int pos) {
		for(int i = st; i <= st + pos - 1; i++)
			b[i - st + 1] = a[i];
		return pos;
	}

// This function is for comparing arrays
	int arr_compare(int a[], int b[], int lena, int lenb) {
		string a1 = array_to_string(a, lena), b1 = array_to_string(b, lenb);
		if(a1.size() < b1.size()) return -1;
		if(a1.size() > b1.size()) return 1;
		if(a1 < b1) return -1;
		if(a1 > b1) return 1;
		return 0;
	}

// This function is for quick read(int)
// *** Function Name: const int quick_read_int() ***
	const int quick_read_int() {
		int res = 0, negative = 1;
		char c = getchar();
		while((c < '0' || c > '9') && c != '-') c = getchar();
		while(c == '-') negative *= -1, c = getchar();
		while(c >= '0' && c <= '9') res = res * 10 + (c - '0'), c = getchar();
		return res * negative;
	}

// This function is for quick read(long long)
// *** Function Name: const long long quick_read_ll() ***
	const long long quick_read_ll() {
		long long res = 0LL, negative = 1LL;
		char c = getchar();
		while((c < '0' || c > '9') && c != '-') c = getchar();
		while(c == '-') negative *= -1LL, c = getchar();
		while(c >= '0' && c <= '9') res = res * 10LL + (long long)(c - '0'), c = getchar();
		return res * negative;
	}

// This function is for quick read(double)
// *** Function Name: const double quick_read_double(const string how_read) ***
	const double quick_read_double(const char& how_read = 'F') {
		double res, negative, points, final_e, binary_pow(const double&, const long long&);
		long long e;
		char c, e_ch;
		if(how_read == 'f' || how_read == 'F' || how_read == 'p' || how_read == 'P') {
			res = 0.0, negative = 1.0, points = 1.0;
			c = getchar();
			while((c < '0' || c > '9') && c != '-' && c != '.') c = getchar();
			while(c == '-') negative *= -1.0, c = getchar();
			while(c >= '0' && c <= '9') res = res * 10.0 + double(c - '0'), c = getchar();
			while(c == '.') c = getchar();
			while(c >= '0' && c <= '9') res = res * 10.0 + double(c - '0'), points *= 10.0, c = getchar();
			return res = (res * negative / points);
		} else if(how_read == 'e' || how_read == 'E') {
			res = 0.0, negative = 1.0, points = 1.0, e = 0LL, final_e = 0.0;
			c = getchar();
			while((c < '0' || c > '9') && c != '-' && c != '.') c = getchar();
			while(c == '-') negative *= -1.0, c = getchar();
			while(c >= '0' && c <= '9') res = res * 10.0 + double(c - '0'), c = getchar();
			while(c == '.') c = getchar();
			while(c >= '0' && c <= '9') res = res * 10.0 + double(c - '0'), points *= 10.0, c = getchar();
			while((c == 'e') || (c == 'E')) c = getchar();
			while((c == '-') || (c == '+')) e_ch = c;
			while(c >= '0' && c <= '9') e = e * 10LL + (long long)(c - '0');
			final_e = binary_pow(10.0, e);
			final_e = ((e_ch == '-') ? (1.0 / final_e) : (final_e));
			return res = (res * negative / points * final_e);
		} else {
			cerr << "CAN'T READ ---- SIGNAL ERROR!" << endl;
			exit(EXIT_FAILURE);
			return 0.0;
		}
	}

// class(struct) type and their functions

	struct Fraction;
	struct bign;

// Fraction
// *** Struct Name: struct Fraction ***
	struct Fraction {
		long long up, down;
		Fraction() : up(0LL), down(0LL) {}
		Fraction(long long _up, long long _down) : up(_up), down(_down) {}
	};

	const Fraction Frac_reduction(Fraction result) {
		if(result.down < 0LL) {
			result.up = -result.up;
			result.down = -result.down;
		}

		if(result.up == 0LL) result.down = 1LL;
		else {
			int d = gcd(abs(result.up), abs(result.down));
			result.up /= d;
			result.down /= d;
		}

		return result;
	}

	const Fraction Frac_add(const Fraction& f1, const Fraction& f2) {
		Fraction result;
		result.up = f1.up * f2.down + f2.up * f1.down;
		result.down = f1.down * f2.down;
		return Frac_reduction(result);
	}
	const Fraction Frac_minu(const Fraction& f1, const Fraction& f2) {
		Fraction result;
		result.up = f1.up * f2.down - f2.up * f1.down;
		result.down = f1.down * f2.down;
		return Frac_reduction(result);
	}
	const Fraction Frac_multi(const Fraction& f1, const Fraction& f2) {
		Fraction result;
		result.up = f1.up * f2.up;
		result.down = f1.down * f2.down;
		return Frac_reduction(result);
	}
	const Fraction Frac_divide(const Fraction& f1, const Fraction& f2) {
		Fraction result;
		result.up = f1.up * f2.down;
		result.down = f1.down * f2.up;
		return Frac_reduction(result);
	}

	const Fraction scanFrac(const Fraction &f) {
		scanf("%lld/%lld", &f.up, &f.down);
		return f;
	}
	void showFracResult(Fraction r) {
		r = Frac_reduction(r);
		if(r.down == 1LL) printf("%lld", r.up);
		else if(abs(r.up) > r.down)
			printf("%lld %lld/%lld", r.up / r.down, abs(r.up) % r.down, r.down);
		else printf("%lld/%lld", r.up, r.down);
	}

// High Precision Calculation(Hpc)
// *** Struct Name: struct bign ***
	struct bign {
		const static int MaxLen = 1005;
		int num[MaxLen];
		int len;
		bign() : len(0) {
			memset(num, 0, sizeof(num));
		}
		bign(int _x) {
			memset(num, 0, sizeof(num));
			string s = num_to_string(_x);
			len = string_to_array(s, num);
		}

		int& operator[] (const int i) {
			int& tmp = num[i];
			return tmp;
		}
		int& at(const int i) {
			int& tmp = num[i];
			return tmp;
		}

		void operator= (bign _x) {
			arrcpy(num, _x.num, 0, _x.len);
			len = _x.len;
		}
		const bign operator+ (const bign& _x) {
			int bign_add(bign, bign, bign&, const int& = 10);
			bign ans;
			bign_add(*this, _x, ans);
			return ans;
		}
		const bign operator- (const bign& _x) {
			int bign_sub(bign, bign, bign&, const int& = 10);
			bign ans;
			bign_sub(*this, _x, ans);
			return ans;
		}
		const bign operator* (const int& x) {
			int bign_multi(bign, const int&, bign&, const int& = 10);
			bign ans;
			bign_multi(*this, x, ans);
			return ans;
		}
		const bign operator* (const bign& _x) {
			int bign_multi(bign, bign, bign&, const int& = 10);
			bign ans;
			bign_multi(*this, _x, ans);
		}
		const bign operator/ (const int& x) {
			int bign_divide(bign, int, bign, int&);
			bign ans;
			int r;
			bign_divide(*this, x, ans, r);
			return ans;
		}
		const bign operator/ (const bign& _x) {
			int bign_divide(bign, bign, bign, bign);
			bign ans;
			bign r;
			bign_divide(*this, _x, ans, r);
			return ans;
		}
		const int operator% (const int& x) {
			int bign_divide(bign, int, bign, int&);
			bign ans;
			int r;
			bign_divide(*this, x, ans, r);
			return r;
		}
		const bign operator% (const bign& _x) {
			int bign_divide(bign, bign, bign, bign);
			bign ans;
			bign r;
			bign_divide(*this, _x, ans, r);
			return r;
		}

		bool operator< (bign _x) {
			return arr_compare(num, _x.num, len, _x.len) < 0;
		}
		bool operator>= (bign _x) {
			return !(*this < _x);
		}
		bool operator> (bign _x) {
			return arr_compare(num, _x.num, len, _x.len) > 0;
		}
		bool operator<= (bign _x) {
			return !(*this > _x);
		}
		bool operator== (bign _x) {
			return arr_compare(num, _x.num, len, _x.len) == 0;
		}
		bool operator!= (bign _x) {
			return !(*this == _x);
		}

		const int to_number() {
			string s = array_to_string(num, len);
			int x = string_to_num(s);
			return x;
		}
		const string to_string() {
			string s = array_to_string(num, len);
			return s;
		}
		const char* to_cstring() {
			string s = array_to_string(num, len);
			const char* ch = s.c_str();
			return ch;
		}
	};

	const int bign_add(bign a, bign b, bign& c, const int& value = 10) {
		int mxln = Max(a.len, b.len);
		c.len = 0;
		int x = 0;
		for(int i = 1; i <= mxln + 1; i++) {
			c[i] = a[i] + b[i] + x;
			x = c[i] / value;
			c[i] %= value;
			c.len++;
		}
		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_sub(bign a, bign b, bign& c, const int& value = 10) {
		if(arr_compare(a.num, b.num, a.len, b.len) < 0) {
			c[0] = int('-');
			swap(a, b);
		}

		int mxln = Max(a.len, b.len);
		c.len = 0;
		int x = 0;
		for(int i = 1; i <= mxln; i++) {
			if(a[i] < b[i]) a[i] += value, a[i + 1]--;
			c[i] = a[i] - b[i];
			c.len++;
		}
		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_multi(bign a, const int& b, bign& c, const int& value = 10) {
		c.len = a.len + 20;

		for(int i = 1; i <= a.len; i++) {
			c[i] += a[i] * b;
			if(c[i] > value) {
				c[i + 1] += c[i] / value;
				c[i] %= value;
			}
		}

		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_multi(bign a, bign b, bign& c, const int& value = 10) {
		c.len = a.len + b.len + 2;

		for(int i = 1; i <= a.len; i++)
			for(int j = 1; j <= b.len; j++) {
				c[i + j - 1] += a[i] * b[j];
				if(c[i + j - 1] >= value) {
					c[i + j] += c[i + j - 1] / value;
					c[i + j - 1] %= value;
				}
			}

		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_divide(bign a, int b, bign& c, int& r) {
		c.len = a.len;
		for(int i = a.len; i > 1; i--) {
			c[i] = a[i] / b;
			a[i - 1] += a[i] % b * 10;
		}
		c[1] = a[1] / b;
		r = a[1] % b;
		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_divide(bign a, bign b, bign& c, bign r) {
		c.len = a.len - b.len + 2;
		for(int i = a.len; i >= 1; i--) {
			bign tmp;
			arrcpy(a.num, tmp.num, i, a.len - i + 1);
			while(arr_compare(tmp.num, b.num, a.len - i + 1, b.len) >= 0) {
				c[i]++;
				tmp = tmp - b;
			}
			for(int j = i; j <= a.len; j++)
				a[j] = tmp[j - i + 1];
		}
		while(a[a.len] == 0 && a.len > 1) a.len--;
		if(a[a.len] != 0) {
			r[0] = a.len;
			for(int i = 1; i <= a.len; i++)
				r[i] = a[i];
		} else {
			r[0] = 1;
			r[1] = 0;
		}
		while(c[c.len] == 0 && c.len > 1) c.len--;
		return c.len;
	}

	const int bign_pow(bign& a, int num, int p, int value) {
		a.len = 1;
		a[1] = 1;
		for(int i = 1; i <= p; i++) {
			int x = 0;
			for(int j = 1; j <= a.len; j++) {
				a[j] = a[j] * num + x;
				x = a[j] / value;
				a[j] %= value;
			}
			while(x != 0) {
				a.len++;
				a[a.len] = a[a.len] * num + x;
				x = a[a.len] / value;
				a[a.len] %= value;
			}
		}
		a.len++;
		while(a[a.len] == 0 && a.len > 1) a.len--;
		return a.len;
	}

	const bign bign_binary_pow(const bign& a, const long long& b) {
		if(b == 1LL) return 1;
		if(b == 1LL) return a;

		if(b & 1LL) {
			bign res = bign_binary_pow(a, b - 1LL);
			return res * a;
		} else {
			bign res = bign_binary_pow(a, b / 2LL);
			return res * res;
		}
	}

}

// end file



////////////////////////////////////////////////
// File: Sorts.h ///////////////////////////////
////////////////////////////////////////////////

// This file if for sorts
// use templates
// File Name: Sorts.h

// begin file

namespace my_all {

	typedef unsigned int sz_array;

	template <class T> void Ssort(sz_array n, T a[], bool cmp(...) = less<T>()) {
		int k = 0;
		for(int i = 1; i <= n; i++) {
			k = i;
			for(int j = i + 1; j <= n - 1; j++)
				if(cmp(a[j], a[i])) k = j;
			swap(a[k], a[i]);
		}
	}
	template <class T> void Ssort(T a[], int l, int r, bool cmp(...) = less<T>()) {
		int k = 0;
		for(int i = l; i <= r; i++) {
			k = i;
			for(int j = i + 1; j <= r - 1; j++)
				if(cmp(a[j], a[i])) k = j;
			swap(a[k], a[i]);
		}
	}
	template <class T> void Bsort(sz_array n, T a[], bool cmp(...) = less<T>()) {
		for(int i = 1; i <= n; i++)
			for(int j = i; j <= n - 1; j++)
				if(cmp(a[j + 1], a[j]))
					swap(a[j],a[j + 1]);
	}
	template <class T> void Bsort(T a[], int l, int r, bool cmp(...) = less<T>()) {
		for(int i = l; i <= r; i++)
			for(int j = i; j <= r - 1; j++)
				if(cmp(a[j + 1], a[j]))
					swap(a[j],a[j + 1]);
	}
	template <class T> void Isort(sz_array n, T a[], bool cmp(...) = less<T>()) {
		for(int i = 2; i <= n; i++) {
			int k = i;
			while(cmp(a[k], a[k - 1]) && k > 1) {
				swap(a[k], a[k + 1]);
				k--;
			}
		}
	}
	template <class T> void Isort(T a[], int l, int r, bool cmp(...) = less<T>()) {
		for(int i = l + 1; i <= r; i++) {
			int k = i;
			while(cmp(a[k], a[k - 1]) && k > 1) {
				swap(a[k], a[k - 1]);
				k--;
			}
		}
	}
	template <class T> void Ksort(sz_array n, T a[], int t[], sz_array maxa, bool cmp(...) = less<T>()) {
		for(int i = 1; i <= n; i++) t[a[i]]++;
		int k = 1;
		if(cmp(1, 2))
			for(int i = 0; i <= maxa; i++)
				while(t[i] && k <= n) a[k++] = i, t[i]--;
		else
			for(int i = maxa; i >= 0; i--)
				while(t[i] && k <= n) a[k++] = i, t[i]--;
	}
	template <class T> void Ksort(T a[], int l, int r, int t[], sz_array maxa, bool cmp(...) = less<T>()) {
		for(int i = l; i <= r; i++) t[a[i]]++;
		int k = l;
		if(cmp(1, 2))
			for(int i = 0; i <= maxa; i++)
				while(t[i] && k <= r) a[k++] = i, t[i]--;
		else
			for(int i = maxa; i >= 0; i--)
				while(t[i] && k <= r) a[k++] = i, t[i]--;
	}
	template <class T> void Qsort(T a[], int l, int r, bool cmp(...) = less<T>()) {
		if(l >= r) return;
		int mid = (l + r) / 2;
		int i = l, j = r;
		while(cmp(a[i], a[mid])) i++;
		while(cmp(a[mid], a[j])) j--;
		while(i <= j) {
			swap(a[i], a[j]);
			while(cmp(a[i], a[mid])) i++;
			while(cmp(a[mid], a[j])) j--;
		}
		Qsort(a, l, mid - 1, cmp);
		Qsort(a, mid, r, cmp);
	}

}

// end file



////////////////////////////////////////////////
// File: Types.h ///////////////////////////////
////////////////////////////////////////////////

// This file is for all types
// File Name: Types.h

// begin file

namespace my_all {

// Binary Search(Sort) Tree
	template <class T>
	class BST {
			// Private section
		public:
			// Public Declarations
			T data;
			BST<T>* lchild;
			BST<T>* rchild;
		protected:
			// Protected Declarations
	};

	template <class T>
	BST<T>* BST_newNode(T x) {
		BST<T>* node;
		node = new BST<T>;
		node->data = x;
		node->lchild = node->rchild = NULL;
		return node;
	}

	template <class T>
	BST<T>* BST_findMax(BST<T>* root) {
		while(root->rchild != NULL)
			root = root->rchild;
		return root;
	}

	template <class T>
	BST<T>* BST_findMin(BST<T>* root) {
		while(root->lchild != NULL)
			root = root->lchild;
		return root;
	}

	template <class T>
	bool BST_search(BST<T>* root, T x) {
		if(root == NULL) return false;

		if(root->data == x) return true;
		else if(root->data > x) return BST_search(root->lchild, x);
		else return BST_search(root->rchild, x);
	}

	template <class T>
	void BST_insert(BST<T>* &root, T x) {
		if(root == NULL) {
			root = BST_newNode(x);
			return;
		}

		if(x < root->data) BST_insert(root->lchild, x);
		else BST_insert(root->rchild, x);
	}

	template <class T>
	void BST_deleteNode(BST<T>* &root, T x) {
		if(root == NULL) return;
		if(root->data == x) {
			if(root->lchild == NULL && root->rchild == NULL)
				root = NULL;
			else if(root->lchild != NULL) {
				BST<T>* pre = BST_findMax(root->lchild);
				root->data = pre->data;
				deleteNode(root->lchild, pre->data);
			} else {
				BST<T>* next = BST_findMin(root->rchild);
				root->data = next->data;
				deleteNode(root->rchild, next->data);
			}
		} else if(x < root->data)
			BST_deleteNode(root->lchild, x);
		else BST_deleteNode(root->rchild, x);
	}

	template <class T>
	BST<T>* BST_Create(T data[], int n) {
		BST<T>* root = NULL;
		for(int i = 1; i <= n; i++)
			BST_insert(root, data[i]);
		return root;
	}

// preorder
	template <class T>
	void BST_preorder(BST<T>* root, bool do_sth(BST<T>* root)) {
		if(root == NULL) return;

		do_sth(root);
		BST_preorder(root->lchild, do_sth);
		BST_preorder(root->rchild, do_sth);
	}
// inorder
	template <class T>
	void BST_inorder(BST<T>* root, bool do_sth(BST<T>* root)) {
		if(root == NULL) return;

		BST_inorder(root->lchild, do_sth);
		do_sth(root);
		BST_inorder(root->rchild, do_sth);
	}
// postorder
	template <class T>
	void BST_postorder(BST<T>* root, bool do_sth(BST<T>* root)) {
		if(root == NULL) return;

		BST_postorder(root->lchild, do_sth);
		BST_postorder(root->rchild, do_sth);
		do_sth(root);
	}
// LayerOrder
	template <class T>
	void BST_LayerOrder(BST<T>* root, bool do_sth(BST<T>* root)) {
		queue <BST <T>*> q;
		q.push(root);
		while(!q.empty()) {
			BST <T>* now = q.front();
			q.pop();
			do_sth(now);
			if(now->lchild != NULL) q.push(now->lchild);
			if(now->rchild != NULL) q.push(now->rchild);
		}
	}


// AVL tree (update for BST)
	template <class T>
	class AVL {
			// Private section
		public:
			// Public Declarations
			T data;
			AVL<T>* lchild;
			AVL<T>* rchild;
			int height;
		protected:
			// Protected Declarations
	};

	template <class T>
	AVL<T>* AVL_newNode(T v) {
		AVL<T>* Node = new AVL<T>;
		Node->data = v;
		Node->height = 1;
		Node->lchild = Node->rchild = NULL;
		return Node;
	}

	template <class T>
	int getHeight(AVL<T>* root) {
		if(root == NULL) return 0;
		return root->height;
	}

	template <class T>
	int getBalanceFactor(AVL<T>* root) {
		return getHeight(root->lchild) - getHeight(root->rchild);
	}

	template <class T>
	void updateHeight(AVL<T>* root) {
		root->height = max(getHeight(root->lchild), getHeight(root->rchild) + 1);
	}

	template <class T>
	bool AVL_search(AVL<T>* root, T x) {
		if(root == NULL) return false;

		if(root->data == x) return true;
		else if(root->data > x) return AVL_search(root->lchild, x);
		else return AVL_search(root->rchild, x);
	}

// Left Rotation
	template <class T>
	void L(AVL<T>* &root) {
		AVL<T>* temp = root->rchild;
		root->rchild = temp->lchild;
		temp->lchild = root;
		updateHeight(root);
		updateHeight(temp);
		root = temp;
	}
// Right Rotation
	template <class T>
	void R(AVL<T>* &root) {
		AVL<T>* temp = root->lchild;
		root->lchild = temp->rchild;
		temp->rchild = root;
		updateHeight(root);
		updateHeight(temp);
		root = temp;
	}

	template <class T>
	void AVL_insert(AVL<T>* &root, T x) {
		if(root == NULL) {
			root = AVL_newNode(x);
			return;
		}

		if(x < root->data) {
			AVL_insert(root->lchild, x);
			updateHeight(root);
			if(getBalanceFactor(root->lchild) == 1)
				R(root);
			else if(getBalanceFactor(root->lchild) == -1) {
				L(root->lchild);
				R(root);
			}
		} else {
			AVL_insert(root->rchild, x);
			updateHeight(root);
			if(getBalanceFactor(root) == -2) {
				if(getBalanceFactor(root->rchild) == -1)
					L(root);
				else if(getBalanceFactor(root->rchild) == 1) {
					R(root->rchild);
					L(root);
				}
			}
		}
	}

	template <class T>
	AVL<T>* AVL_Create(T data, int n) {
		AVL<T>* root = NULL;
		for(int i = 1; i <= n; i++)
			insert(root, data[i]);
		return root;
	}

// preorder
	template <class T>
	void AVL_preorder(AVL<T>* root, bool do_sth(AVL<T>* root)) {
		if(root == NULL) return;

		do_sth(root);
		AVL_preorder(root->lchild, do_sth);
		AVL_preorder(root->rchild, do_sth);
	}
// inorder
	template <class T>
	void AVL_inorder(AVL<T>* root, bool do_sth(AVL<T>* root)) {
		if(root == NULL) return;

		AVL_inorder(root->lchild, do_sth);
		do_sth(root);
		AVL_inorder(root->rchild, do_sth);
	}
// postorder
	template <class T>
	void AVL_postorder(AVL<T>* root, bool do_sth(AVL<T>* root)) {
		if(root == NULL) return;

		AVL_postorder(root->lchild, do_sth);
		AVL_postorder(root->rchild, do_sth);
		do_sth(root);
	}
// LayerOrder
	template <class T>
	void AVL_LayerOrder(AVL<T>* root, bool do_sth(AVL<T>* root)) {
		queue <AVL<T>*> q;
		q.push(root);
		while(!q.empty()) {
			AVL<T>* now = q.front();
			q.pop();
			do_sth(now);
			if(now->lchild != NULL) q.push(now->lchild);
			if(now->rchild != NULL) q.push(now->rchild);
		}
	}

// Union-Find-Set declare here
	struct UFS {
		vector <int> father;

		UFS(int n);
		int findFather(int x);
		void Union(int a, int b);
	};

	UFS::UFS(int n) {
		father = vector<int>(n, -1);
	}

	int UFS::findFather(int x) {
		if(father[x] < 0) return x;
		return father[x] = findFather(father[x]);
	}

	void UFS::Union(int a, int b) {
		int faA = findFather(a);
		int faB = findFather(b);
		if(faA != faB) {
			father[faA] += father[faB];
			father[faB] = faA;
		}
	}

// pair(normal)
	template <class T1, class T2> struct Pair {
		typedef T1 first_type;
		typedef T2 second_type;

		first_type first;
		second_type second;

		Pair();
		template <class U, class V> Pair(const Pair<U, V>& pr);
		Pair(const first_type& a, const second_type& b);
		Pair& operator= (Pair& x);
		bool operator== (const Pair<T1, T2>& rhs);
		bool operator!= (const Pair<T1, T2>& rhs);
		bool operator<  (const Pair<T1, T2>& rhs);
		bool operator<= (const Pair<T1, T2>& rhs);
		bool operator>  (const Pair<T1, T2>& rhs);
		bool operator>= (const Pair<T1, T2>& rhs);
#if cplusplus >= 201103L
		void swap(Pair& pr) noexcept(noexcept(swap(first,pr.first)) && noexcept(swap(second,pr.second)) );
#endif
	};

// queue(normal)
	template <class T, class Container = deque<T> > class Queue {
		public:
			typedef T value_type;
			typedef Container container_type;
			typedef size_t size_type;

		private:
			container_type con;

		public:
			explicit Queue(const container_type& ctnr = container_type()) {
				con = ctnr;
			}
			bool empty() const {
				return con.empty();
			}
			size_type size() const {
				return con.size();
			}
			value_type& front() {
				return con.front();
			}
			const value_type& front() const {
				return con.front();
			}
			value_type& back() {
				return con.back();
			}
			const value_type& back() const {
				return con.back();
			}
			void push(const value_type& val) {
				con.push_back(val);
			}
			void pop() {
				con.pop_front();
			}
			void clear() {
				con.clear();
			}

#if cplusplus >= 201103L
			template <class... Args> void emplace (Args&&... args);
			void swap(Queue& x) noexcept();
#endif
	};

// stack(normal)
	template <class T, class Container = deque<T> > class Stack {
		public:
			typedef T value_type;
			typedef Container container_type;
			typedef size_t size_type;

		private:
			container_type con;

		public:
			explicit Stack(const container_type& ctnr = container_type()) {
				con = ctnr;
			}
			bool empty() const {
				return con.empty();
			}
			size_type size() const {
				return con.size();
			}
			value_type& top() {
				return con.back();
			}
			const value_type& top() const {
				return con.back();
			}
			void push(const value_type& val) {
				con.push_back(val);
			}
			void pop() {
				con.pop_back();
			}
			void clear() {
				con.clear();
			}

#if cplusplus >= 201103L
			template <class... Args> void emplace(Args&&... args);
			void swap(Stack& x) noexcept();
#endif
	};

// priority_queue(heap)
	template <class T, class Container = vector<T>,
	         class Compare = less<typename Container::value_type> > class Priority_Queue {
		public:
			typedef T value_type;
			typedef Container container_type;
			typedef size_t size_type;

		private:
			container_type con;
			Compare comp;

		public:
			explicit Priority_Queue(const Compare& comp = Compare(),
			                        const Container& ctnr = Container()) {
				con = ctnr;
				make_heap(con.begin(), con.end(), comp);
			}
			bool empty() const {
				return con.empty();
			}
			size_type size() const {
				return con.size();
			}
			const value_type& top() const {
				return con.front();
			}
			void push(const value_type& val) {
				con.push_back();
				push_heap(con.begin(), con.end(), comp);
			}
			void pop() {
				pop_heap(con.begin(), con.end(), comp);
				con.pop_back();
			}
			void clear() {
				con.clear();
				make_heap(con.begin(), con.end());
			}

#if cplusplus >= 201103L
			template <class... Args> void emplace (Args&&... args);
			void swap (Priority_Queue& x) noexcept();
#endif
	};

	template <class T> class List {
		public:
			typedef T value_type;
			typedef size_t size_type;

		private:
			struct node {
				value_type val;
				node *pre, *next;
				node() : pre(NULL), next(NULL) {};
				node(const value_type& _val) : val(_val) {};
			};
			node *head, *tail;
			size_type len;
			bool is_sort;

			node* newNode(const value_type& _val) {
				node* p = new node(_val);
				return p;
			}
			void make_loop() {
				head->pre = tail;
				tail->next = head;
			}
			void make_connect(node* &front, node* &back) {
				front->next = back;
				back->pre = front;
			}

		public:
			List() : head(NULL), tail(NULL), len(0), is_sort(false) {};
			void push_back(const value_type& val) {
				if(head == NULL) {
					head = newNode(val);
					tail = head;
					make_loop();
					return;
				}
				node* p = newNode(val);
				make_connect(tail, p);
				tail = p;
				make_loop();
				len++;
				is_sort = false;
			}
			void pop_back() {
				if(head == NULL) {
					cerr << "List Pop Error: EMPTY LIST!" << endl;
					exit(EXIT_FAILURE);
				}
				if(head == tail) {
					delete head;
					head = tail = NULL;
					return;
				}
				node* p = tail->pre;
				delete tail;
				tail = p;
				make_loop();
				len--;
			}
			void push_front(const value_type& val) {
				if(head == NULL) {
					head = newNode(val);
					tail = head;
					make_loop();
					return;
				}
				node* p = newNode(val);
				make_connect(p, head);
				head = p;
				make_loop();
				len++;
				is_sort = false;
			}
			void pop_front() {
				if(head == NULL) {
					cerr << "List Pop Error: EMPTY LIST!" << endl;
					exit(EXIT_FAILURE);
				}
				if(head == tail) {
					delete head;
					head = tail = NULL;
				}
				node* p = head->next;
				delete head;
				head = p;
				make_loop();
				len--;
			}
			void sort(bool cmp(...) = less<value_type>()) {
				node* fr, ba;
				node* p;
				while(p != tail) {
					fr = p;
					ba = fr->next;
					while(ba != head) {
						if(cmp(ba->val, fr->val))
							if(fr == head) {
								node* ne = ba->next;
								make_connect(ba, fr);
								make_connect(fr, ne);
								head = ba;
								make_loop();
							} else {
								node* pr = fr->pre, ne = ba->next;
								make_connect(ba, fr);
								make_connect(pr, ba);
								make_connect(fr, ne);
							}
						fr = ba;
						ba = fr->next;
					}
					p = p->next;
				}
				is_sort = true;
			}
			void insert_sort(const value_type& val, bool cmp(...) = less<value_type>()) {
				if(!is_sort) {
					cerr << "List Insert_sort Error: THE LIST IS NOT SORTED! " << endl;
					exit(EXIT_FAILURE);
				}
				if(cmp(val, head->val)) {
					push_front(val);
					is_sort = true;
					len++;
					return;
				}
				if(cmp(tail->val, val)) {
					push_back(val);
					is_sort = true;
					len++;
					return;
				}
				node* p = head->next;
				while(p != tail && !cmp(p->val, val)) p = p->next;
				p = p->pre;
				node* q = newNode(val);
				make_connect(q, p->next);
				make_connect(p, q);
				make_loop();
				is_sort = true;
			}
			bool empty() const {
				return (head == NULL && tail == NULL && len == 0);
			}
			size_type size() const {
				return len;
			}
		private:
			node* get_pos(const int& pos) {
				int mid = len / 2;
				if(len > mid) {
					node* p = tail;
					int pos_new = len - pos;
					for(int i = 1; i <= pos_new; i++) p = p->pre;
					return p;
				} else {
					node* p = head;
					for(int i = 1; i <= pos; i++) p = p->next;
					return p;
				}
			}
		public:
			void insert(const value_type& val, const int& which) {
				if(which > len) {
					cerr << "List Insert Error: INSERT PLACE OVERFLOW! " << endl;
					exit(EXIT_FAILURE);
				}
				if(which == 0) {
					push_front(val);
					len++;
					return;
				}
				if(which == len) {
					push_back(val);
					len++;
					return;
				}
				node* p = get_pos(which);
				node* q = newNode(val);
				make_connect(q, p->next);
				make_connect(p, q);
				make_loop();
				is_sort = false;
				len++;
			}

			value_type front() {
				if(empty()) {
					cout << "List Get Front Error: THE LIST IS EMPTY! " << endl;
					exit(EXIT_FAILURE);
				}
				return head->val;
			}
			const value_type front() const {
				if(empty()) {
					cout << "List Get Front Error: THE LIST IS EMPTY! " << endl;
					exit(EXIT_FAILURE);
				}
				return head->val;
			}
			value_type back() {
				if(empty()) {
					cout << "List Get Front Error: THE LIST IS EMPTY! " << endl;
					exit(EXIT_FAILURE);
				}
				return tail->val;
			}
			const value_type back() const {
				if(empty()) {
					cout << "List Get Front Error: THE LIST IS EMPTY! " << endl;
					exit(EXIT_FAILURE);
				}
				return tail->val;
			}
	};


	template <class Key, class T, class Compare = less<T>, class Container = AVL<Pair<Key, T> > > class Map {
		public:
			typedef Key key_type;
			typedef T mapped_type;
			typedef Compare compare_type;
			typedef Container container_type;
			typedef Pair<key_type, mapped_type> value_type;

		private:
			container_type con;

		public:
#define is(what)
			is(member) mapped_type operator[](int pos)
			{
				
			}
	};

// some functions define here

// pair(normal)
	template <class T1, class T2> Pair<T1, T2>::Pair() {
		first = second = 0;
	}
	template <class T1, class T2> template <class U, class V> Pair<T1, T2>::Pair(const Pair<U, V>& pr) {
		first = pr.first;
		second = pr.second;
	}
	template <class T1, class T2> Pair<T1, T2>::Pair(const Pair<T1, T2>::first_type& a, const Pair<T1, T2>::second_type& b) {
		first = a;
		second = b;
	}
	template <class T1, class T2> Pair<T1, T2>& Pair<T1, T2>::operator= (Pair& x) {
		first = x.first;
		second = x.second;
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator== (const Pair<T1, T2>& rhs) {
		return first == rhs.first && second == rhs.second;
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator!= (const Pair<T1, T2>& rhs) {
		return !(*this == rhs);
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator<  (const Pair<T1, T2>& rhs) {
		return first < rhs.first || (!(rhs.first < first) && second < rhs.second);
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator<= (const Pair<T1, T2>& rhs) {
		return !(rhs < *this);
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator>  (const Pair<T1, T2>& rhs) {
		return rhs < *this;
	}
	template <class T1, class T2> bool Pair<T1, T2>::operator>= (const Pair<T1, T2>& rhs) {
		return !(*this < rhs);
	}
#if cplusplus >= 201103L
	template <class T1, class T2> void Pair<T1, T2>::swap(Pair<T1, T2>& pr) noexcept(noexcept(swap(first,pr.first)) && noexcept(swap(second,pr.second)) ) {
		swap(first, pr.first);
		swap(second, pr.second);
	}
#endif

}

// end file



////////////////////////////////////////////////
// File: Functions.h ///////////////////////////
////////////////////////////////////////////////

namespace my_all {

#define func(type, name, vals) type name vals
#define var(type, name) type name
#define var_init(type, name, val) type name = val

	func(void, FileCloseC, (FILE* in, FILE* out))  {
		fclose(in);
		fclose(out);
	}
	func(void, FileCloseCPP, (ifstream in, ofstream out)) {
		in.close();
		out.close();
	}
}

// end file



////////////////////////////////////////////////
// File: my_defines ////////////////////////////
////////////////////////////////////////////////

// This file is for all the defines
// Go with it! It will be very helpful with you. It is just like the 'MFC' in the Microsoft Visual C++.

namespace my_all {

#define FILE_CLOSE_C(in, out) {fclose(in); fclose(out);}
#define FILE_CLOSE_CPP(in, out) {in.close(); out.close();}

}

// end file


// end WHOLE file

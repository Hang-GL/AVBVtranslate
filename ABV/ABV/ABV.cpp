#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[58];
const string b[58] = {"f","Z","o","d","R","9","X","Q","D","S","U","m","2","1","y","C","k","r","6","z","B","q","i","v","e","Y","a","h","8","b","t","4","x","s","W","p","H","n","J","E","7","j","L","5","V","G","3","g","u","M","T","K","N","P","A","w","c","F"};
const bool u[28] = { 0,0,1,0,0,1,0,0,1,1,0,0,1,1,0,1,1,1,0,0,1,0,0,1,0,1,0,1 };
int ran[10] = {6,2,4,8,5,9,3,7,1,0};
bool o[10];
long long TN(string i)
{
	int n[100];
	int a = 0;
	do
	{
		n[a] = i[a] - 48;
		a++;
	} 
	while (a<i.length());
	a = 0;
	long long o = 0;
	do
	{
		o = o + n[a] * pow(10, i.length()-1-a);
		a = a + 1;
	} 
	while (a < i.length());
	return o;
}
long long YH(long long i)
{
	int b = i;
	int c = 0;
	bool a[28];
	do
	{
		a[c] = b % 2;
		b = b / 2;
		c ++;
	} 
	while (b > 0);
	c--;
	bool t[28];
	int q=0;
	do
	{
		if (c == -1)
		{
			t[q] = u[q];
		}
		else
		{
			if (a[q] == u[q])
			{
				t[q] = 0;
			}
			else
			{
				t[q] = 1;
			}
			c--;
		}
		q++;
	} 
	while (q<28);
	c = 0;
	long long o = 0;
	do
	{
		o = o + t[c]*pow(2, c);
		c++;
	} 
	while (c < 28);
	return o= o+ 100618342136696320;
}
string ATB(string i)
{
	long long z=YH(TN(i));
	int s[10];
	int c = 0;
	do
	{
		s[c] = (z/ (long long)pow(58,c))%58;
		c++;
	} 
	while (c < 10);
	c = 0;
	string w="";
	do
	{
		w.append(b[s[c]]);
		c++;
	} 
	while (c < 10);
	c = 0;
	string o = "";
	string y;
	do
	{
		y = w[ran[c]];
		o.append(y);
		c++;
	} 
	while (c < 10);
	return o;
}
string BTA(string i)
{
	int cn[10];
	int t1 = 0;
	int t2 = 0;
	string a1, a2;
	do
	{
		do
		{
			a1 = i[t1];
			a2 = b[t2];
			if (a1==a2)
			{
				cn[t1] = t2;
			}
			t2++;
		} 
		while (t2 < 58);
		t2 = 0;
		t1++;
	} 
	while (t1 < 10);
	t1 = 0;
	long long tal=0;
	do
	{
		tal = tal + cn[t1] * (long long)pow(58, ran[t1]);
		t1++;
	} 
	while (t1 < 10);
	tal = YH(tal - 100618342136696320)-100618342136696320;
	return to_string(tal);
}
int main()
{
	cout << "输入AV或BV号：";
	int n=0;
	do
	{
		a[n] = n;
		n++;
	}
	while (n<58);
	string in;
	cin >> in;
	if (in.substr(0,2)=="AV" or in.substr(0, 2) == "av")
	{
		if (in.length() <= 11)
		{
			cout << endl << "BV" << ATB(in.substr(2, in.length())) << endl;
			system("pause");
		}
		else
		{
			cout << "OVERLOAD";
			system("pause");
		}
	}
	if (in.substr(0, 2) == "BV" or in.substr(0, 2) == "BV")
	{
		int v = in.length();
		if(v == 12)
		{
			cout << endl << "AV" << BTA(in.substr(2, in.length())) << endl;
			system("pause");
		}
		else
		{
			cout << "INCORRECT";
			system("pause");
		}
	}
}
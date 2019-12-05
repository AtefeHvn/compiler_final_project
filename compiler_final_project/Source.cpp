#include<conio.h>
#include<iostream>
#include<vector>
#include <list>
using namespace std;

//vector<string> keyword = { "Asm","catch","default","enum","for","goto","" };

int fail(int start) {
	int nextStart;
	switch (start) {
	case 1:nextStart = 3;
		break;
	case 3:nextStart = 15;
		break;
	case 15:nextStart = 100;
		break;	
	}
	return nextStart;
}

void Else(int start,int loc,int state, FILE * fp) {
	start = fail(start);
	state = start;
	fseek(fp, loc, SEEK_SET);
}

int main() {

	list<string> mylist;
	mylist="aa\nbb"
	mylist.push_back(myint);
	cout >> mylist;
	_getch();
	return 0;
	/*int state = 1, start = 1, loc;
	char ch;
	FILE * fp;
	fp = fopen("compilerrrr.txt", "r");
	while (1) {
		switch (state) {
		case 1:
			loc = ftell(fp);
			ch = getc(fp);
			if ((ch == '_') || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
				state = 2;

			else {
				Else(start, loc, state, fp);

			}
			break;
		case 2:
			ch = getc(fp);
			if ((ch == '_') || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
				state = 2;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				cout << "ID";
				state = 100;
			}
			else {
				Else(start, loc, state, fp);
				
			}
			break;
		case 3:
			loc = ftell(fp);
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 4;
			else if ((ch == '+') || (ch == '-'))
				state = 5;
			else {
				Else(start, loc, state, fp);
				
			}
			break;

		case 4:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 4;
			else if (ch == 'E' || ch == 'e')
				state = 6;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "NUM";
			}
			else if (ch == '.')
				state = 9;
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 5:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 4;
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 6:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 7;
			else if ((ch == '+') || (ch == '-'))
				state = 8;
			else {
				Else(start, loc, state, fp);
			}

		case 7:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 7;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "NUM";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 8:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state =7;
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 9:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 10;
			else {
				Else(start, loc, state, fp);
			} 
			break;
		case 10:
			ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 10;
			else if (ch == 'E' || ch == 'e')
				state = 11;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "REAL";
			}
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 11:ch = getc(fp);
			if ((ch == '+') || (ch == '-'))
				state = 12;
			else {
				Else(start, loc, state, fp);
			}
			break;

		case 12:ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 13;
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 13:ch = getc(fp);
			if ((ch >= '0'&&ch <= '9'))
				state = 14;
			else {
				Else(start, loc, state, fp);
			}
			break;
		case 14:ch = getc(fp);
			if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "REAL";
			}

		case 15:loc = ftell(fp);
			ch = getc(fp);
			if (ch == '+')
				state = 16;
			else if (ch == '-')
				state = 18;
			else if ((ch == '/')|| (ch == '*')|| (ch == '%') || (ch == '=')|| (ch == '!'))
				state = 19;
			else if (ch == '|')
				state = 20;
			else if (ch == '&')
				state = 21;
			else if (ch == '<')
				state = 22;
			else if (ch == '>')
				state = 23;
			else if (ch == '^'|| ch == '~')
				state = 17;
			else if (ch == '?')
				state = 24;
			else {
				Else(start, loc, state, fp);
			}
			break;

		case 16:
			ch = getc(fp);
			if ((ch == '+')|| (ch == '='))
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
			
		case 17:
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 18:
			ch = getc(fp);
			if ((ch == '-') || (ch == '='))
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;

		case 19:
			ch = getc(fp);
			else if (ch == '=')
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 20:
			ch = getc(fp);
			else if (ch == '|')
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 21:
			ch = getc(fp);
			else if (ch == '&')
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 22:
			ch = getc(fp);
			else if (ch == '<')
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 23:
			ch = getc(fp);
			else if (ch == '>')
				state = 17;
			else if ((ch == ' ') || (ch == '\n') || (ch == EOF))
			{
				state = 100;
				cout << "OPERATOR";
			}

			else {
				Else(start, loc, state, fp);
			}
			break;
		case 24:
			ch = getc(fp);
			 if (ch == ':')
				state = 17
			else {
			Else(start, loc, state, fp);
			}
			break;
		}
	}*/
}


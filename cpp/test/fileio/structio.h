#include <iostream>
#pragma once

struct file{
	int i;
	char ch;
	char str[3][80];
};

void showst(struct file *st){
	cout << "st.i: " << st->i << endl;
	cout << "st.ch: "<< st->ch << endl;
	cout << "st.str[0]: " << st->str[0] << endl;
	cout << "st.str[1]: " << st->str[1] << endl;
	cout << "st.str[2]: " << st->str[2] << endl;
}

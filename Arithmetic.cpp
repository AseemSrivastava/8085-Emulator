#include<bits/stdc++.h>
using namespace std;

int flag_on_off_8bit_ADD(int &val1)
{
	if((val1&15)+(val1&15)>15)AC=1;
	int val=val1+val1;
	if(val>255)
	{
		CF=1;
		val-=256;
	}
	if(!val)ZF=1;
	int parity_checker_bit = 1;
	int parity_counter = 0;
	for(int i=0;i<8;++i)
	{
		if(parity_checker_bit&val)++parity_counter;
		parity_checker_bit<<=1;
	}
	PF = 1;
	if(parity_counter&1)PF = 0;
	if(val<0)SF=1;
	return val;
}	

int flag_on_off_8bit_ADD(int &val1,int &val2)
{
	if((val1&15)+(val2&15)>15)AC=1;
	int val=val1+val2;
	if(val>255)
	{
		CF=1;
		val-=256;
	}
	if(!val)ZF=1;
	int parity_checker_bit = 1;
	int parity_counter = 0;
	for(int i=0;i<8;++i)
	{
		if(parity_checker_bit&val)++parity_counter;
		parity_checker_bit<<=1;
	}
	PF = 1;
	if(parity_counter&1)PF = 0;
	if(val<0)SF=1;
	return val;
}	

int flag_on_off_8bit_SUB(int &val1,int &val2)
{
	if(val1<val2)SF=CF=1;
	int tmp_val2 = val2^255;
	++tmp_val2;
	if((val1&15)+(tmp_val2&15)>15)AC=1;
	int val=val1-val2;
	int parity_checker_bit = 1;
	int parity_counter = 0;
	for(int i=0;i<8;++i)
	{
		if(parity_checker_bit&val)++parity_counter;
		parity_checker_bit<<=1;
	}
	PF = 1;
	if(parity_counter&1)PF = 0;
	if(!val)ZF=1;
	if(val<0)
	{
		val+=256;
	}
	return val;
}

int flag_on_off_8bit_SUB(int &val1)
{
	PF = 1;
	ZF = 1;
	return 0;
}

void ADD(string &user_instruction)
{
	SF=0,ZF=0,AC=0,PF=0,CF=0;
	switch(user_instruction[4])
	{
		case 'A':
				A=flag_on_off_8bit_ADD(A);
				break;
		case 'B':
				A=flag_on_off_8bit_ADD(A,B);
				break;
		case 'C':
				A=flag_on_off_8bit_ADD(A,C);
				 break;
		case 'D':
				A=flag_on_off_8bit_ADD(A,D);
				break;
		case 'E':
				A=flag_on_off_8bit_ADD(A,E);
				break;
		case 'H':
				A=flag_on_off_8bit_ADD(A,H);
				break;
		case 'L':
				A=flag_on_off_8bit_ADD(A,L);
				break;
		default: 
				cout<<"You found a bug!";
	}
}

void ADI(string &user_instruction)
{
	SF=0,ZF=0,AC=0,PF=0,CF=0;
	string hex_number = "";
	hex_number.push_back(user_instruction[4]);
	hex_number.push_back(user_instruction[5]);
	int tmp = hex_to_dec(hex_number);
	A=flag_on_off_8bit_ADD(A,tmp);
}

void SUI(string &user_instruction)
{
	SF=0,ZF=0,AC=0,PF=0,CF=0;
	string hex_number = "";
	hex_number.push_back(user_instruction[4]);
	hex_number.push_back(user_instruction[5]);
	int tmp = hex_to_dec(hex_number);
	A=flag_on_off_8bit_SUB(A,tmp);
}

void SUB(string &user_instruction)
{
	SF=0,ZF=0,AC=0,PF=0,CF=0;
	switch(user_instruction[4])
	{
		case 'A':
				A=flag_on_off_8bit_SUB(A);
				break;
		case 'B':
				A=flag_on_off_8bit_SUB(A,B);
				break;
		case 'C':
				A=flag_on_off_8bit_SUB(A,C);
				 break;
		case 'D':
				A=flag_on_off_8bit_SUB(A,D);
				break;
		case 'E':
				A=flag_on_off_8bit_SUB(A,E);
				break;
		case 'H':
				A=flag_on_off_8bit_SUB(A,H);
				break;
		case 'L':
				A=flag_on_off_8bit_SUB(A,L);
				break;
		default: 
				cout<<"You found a bug!";
	}
}

void DCR(string &user_instruction)
{
	bool tmp_CF = CF;
	SF=0,ZF=0,AC=0,PF=0;
	int tmp = 1;
	switch(user_instruction[4])
	{
		case 'A':
				A=flag_on_off_8bit_SUB(A,tmp);
				break;
		case 'B':
				B=flag_on_off_8bit_SUB(B,tmp);
				break;
		case 'C':
				C=flag_on_off_8bit_SUB(C,tmp);
				 break;
		case 'D':
				D=flag_on_off_8bit_SUB(D,tmp);
				break;
		case 'E':
				E=flag_on_off_8bit_SUB(E,tmp);
				break;
		case 'H':
				H=flag_on_off_8bit_SUB(H,tmp);
				break;
		case 'L':
				L=flag_on_off_8bit_SUB(L,tmp);
				break;
		default: 
				cout<<"You found a bug!";
	}
	CF = tmp_CF;
}

void INR(string &user_instruction)
{
	bool tmp_CF = CF;
	SF=0,ZF=0,AC=0,PF=0;
	int tmp = 1;
	switch(user_instruction[4])
	{
		case 'A':
				A=flag_on_off_8bit_ADD(A,tmp);
				break;
		case 'B':
				B=flag_on_off_8bit_ADD(B,tmp);
				break;
		case 'C':
				C=flag_on_off_8bit_ADD(C,tmp);
				 break;
		case 'D':
				D=flag_on_off_8bit_ADD(D,tmp);
				break;
		case 'E':
				E=flag_on_off_8bit_ADD(E,tmp);
				break;
		case 'H':
				H=flag_on_off_8bit_ADD(H,tmp);
				break;
		case 'L':
				L=flag_on_off_8bit_ADD(L,tmp);
				break;
		default: 
				cout<<"You found a bug!";
	}
	CF = tmp_CF;
}
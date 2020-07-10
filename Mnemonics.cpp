#include<bits/stdc++.h>
using namespace std;
unordered_map<string,pair<int,char>>mnemonics{
	{"ADD",{1,'1'}},
	{"ADI",{2,'2'}},
	{"DAD",{3,'1'}},
	{"DCR",{4,'1'}},
	{"DCX",{5,'1'}},
	{"INR",{6,'1'}},
	{"INX",{7,'1'}},
	{"SUB",{8,'1'}},
	{"SUI",{9,'2'}},
	{"SET",{10,'1'}},
	{"JMP",{11,'3'}},
	{"JC",{12,'3'}},
	{"JNC",{13,'3'}},
	{"JZ",{14,'3'}},
	{"JNZ",{15,'3'}},
	{"MOV",{16,'1'}},
	{"MVI",{17,'2'}},
	{"LXI",{18,'3'}},
	{"LDA",{19,'3'}},
	{"STA",{20,'3'}},
	{"LHLD",{21,'3'}},
	{"SHLD",{22,'3'}},
	{"STAX",{23,'1'}},
	{"XCHG",{24,'1'}},
	{"CMA",{25,'1'}},
	{"CMP",{26,'1'}},
	{"EOF",{27,'0'}},
	{"HELP",{28,'0'}}
};	

unordered_map<int,pair<int,string>>instruction_size{
	{1,{5,"ADD B"}},
	{2,{7,"ADI 45H"}},
	{3,{5,"DAD B"}},
	{4,{5,"DCR A"}},
	{5,{5,"DCX B"}},
	{6,{5,"INR B"}},
	{7,{5,"INX B"}},
	{8,{5,"SUB D"}},
	{9,{7,"SUI 04H"}},
	{10,{13,"SET 2500, 05H"}},
	{11,{9,"JMP 4000H"}},
	{12,{12,"JC 4000H"}},
	{13,{9,"JNC 5000H"}},
	{14,{8,"JZ 8000H"}},
	{15,{9,"JNZ 4555H"}},
	{16,{8,"MOV B, A"}},
	{17,{10,"MVI A, 54H"}},
	{18,{12,"LXI H, 5050H"}},
	{19,{9,"LDA 4000H"}},
	{20,{9,"STA 4000H"}},
	{21,{10,"LHLD 4000H"}},
	{22,{10,"SHLD 4000H"}},
	{23,{6,"STAX B"}},
	{24,{4,"XCHG"}},
	{25,{3,"CMA"}},
	{26,{5,"CMP B"}},
	{27,{3,"EOF"}},
	{28,{4,"HELP"}}
};	

unordered_map<char,int>char_to_int{
	{'0',0},
	{'1',1},
	{'2',2},
	{'3',3},
	{'4',4},
	{'5',5},
	{'6',6},
	{'7',7},
	{'8',8},
	{'9',9},
	{'A',10},
	{'B',11},
	{'C',12},
	{'D',13},
	{'E',14},
	{'F',15}
};

unordered_map<int,char>int_to_char{
	{0,'0'},
	{1,'1'},
	{2,'2'},
	{3,'3'},
	{4,'4'},
	{5,'5'},
	{6,'6'},
	{7,'7'},
	{8,'8'},
	{9,'9'},
	{10,'A'},
	{11,'B'},
	{12,'C'},
	{13,'D'},
	{14,'E'},
	{15,'F'}
};
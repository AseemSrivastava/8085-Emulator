#include<'main.h'>
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
	{"JNZ",{15,'3'}
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
	{"HELP",{28,'0'}},
};	

unordered_map<char,int>char_to_int{
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
	{'F',15},
};
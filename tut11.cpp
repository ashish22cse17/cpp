/*###############################|user snippets in cpp|##########################*/
// setting-->>user snippets-->>edit as you want.......
/*{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	// "Print to console": {
	// 	"prefix": "log",
	// 	"body": [
	// 		"console.log('$1');",
	// 		"$2"
	// 	],
	// 	"description": "Log output to console"
	// }
}*/
/*#################|continue and break|########################################*/
#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 10; i++)
    {
        //***************continue****************
       if(i==2)
       continue;
       cout<<i<<endl;
    ///****************break***************
       if(i==5)
       break;
    }
    return 0; 
}
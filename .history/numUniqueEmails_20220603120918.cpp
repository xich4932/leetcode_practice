#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


int numUniqueEmails(vector<string>& emails) {
    int ret = 0;
    set<string> dict_;
    for(auto email : emails){
        
        string temp = email.substr(0, email.find_first_of("+@"));
        //while(temp.find(".") != string::npos)
        replace(temp.begin(), temp.end(), '.' , '');
        //temp.append(email.find("@"), email.end() );
        temp += email.substr(email.find("@") , email.length() - email.find("@")  );
        cout <<"-------------------" <<endl;
        cout << temp << " " << email << endl;
        if(temp == "") continue;
        if(! dict_.count(temp)){
            dict_.insert(temp);
            ret ++;
        }
    }
    return ret;
}
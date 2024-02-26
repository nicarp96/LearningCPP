#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool verifyCorectitude(string str){
    size_t n;
    string brackets[] {"[]","()","{}"};

    for(int i = 0;i<sizeof(brackets);i++){
                n=str.find(brackets[i]);
                if(n!=string::npos){
                    str.erase(n);
                    str.erase(n);

                    if(str.length()==0){
                        return true;
                    }
                    return verifyCorectitude(str);
                }
    }
    return false;
}

struct brpair{
    int opening;
    int closing;
};

int main() {
    ifstream fin("expresii.in");
    int n;
    fin>>n;
    vector<string> strs;
    for(int i = 0;i<n;i++){
        string s;
        fin>>s;
        strs.push_back(s);
    }
    fin.close();
    brpair sqrbr,roundbr,acol;
    ofstream fout("expresii.out");
    for(auto x:strs){
        sqrbr.opening=count(x.begin(),x.end(),'[');
        sqrbr.closing=count(x.begin(),x.end(),']');
        roundbr.opening=count(x.begin(),x.end(),'(');
        roundbr.closing=count(x.begin(),x.end(),')');
        acol.opening=count(x.begin(),x.end(),'{');
        acol.closing=count(x.begin(),x.end(),'}');
        if(sqrbr.opening==sqrbr.closing&&roundbr.closing==roundbr.opening&&acol.opening==acol.closing){
            if(verifyCorectitude(x)){
            fout<<"DA"<<" ("<<roundbr.opening<<") ["<<sqrbr.opening<<"] {"<<acol.opening<<"}\n";
            }
        }
        else{
            fout<<"NU\n";
        }

    }
    fout.close();
    return 0;
}

// search substring in string
# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin,s1,'\n');
    getline(cin,s2,'\n');
    // for (int i=0; i<s1.length(); i++)
    // {
    //     if (s1[i]>='A' && s1[i]<='Z')
    //         s1[i]=s1[i]-'A'+'a';
    // }
    for (int i=0; i<s2.length(); i++)
    {
        if (s2[i]>='A' && s2[i]<='Z')
            s2[i]=s2[i]-'A'+'a';
    }
    string s3="/*"+s2+"*/";

    string::size_type pos=0;
    pos = s1.find(s2);
    while ( pos != string::npos )
    {
        s1.replace(pos,s2.length(),s3);
        pos = s1.find(s2,pos+s3.length());
    }
    cout << s1 << endl;
    return 0;
}
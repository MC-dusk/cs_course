// replace substring in string, case insensitive
# include <iostream>
# include <string>
using namespace std;

int main()
{
    string origin, sub, formatted;
    getline(cin,origin,'\n');
    getline(cin,sub,'\n');
    formatted = origin;
    for (int i=0; i<origin.length(); i++)
    {
        if (origin[i]>='A' && origin[i]<='Z')
            formatted[i]=origin[i]-'A'+'a';
    }
    for (int i=0; i<sub.length(); i++)
    {
        if (sub[i]>='A' && sub[i]<='Z')
            sub[i]=sub[i]-'A'+'a';
    }
    string::size_type pos=formatted.find(sub);
    while ( pos != string::npos )
    {
        origin.insert(pos,"/*");
        formatted.insert(pos,"/*");
        pos += 2+sub.length();
        origin.insert(pos,"*/");
        formatted.insert(pos,"*/");
        pos = formatted.find(sub,pos+2);
    }
    cout << origin << endl;
    return 0;
}
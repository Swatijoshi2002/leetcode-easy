class Solution {
public:
string addBinary(string a, string b) {
string res="";
int m=a.length()-1;
int n=b.length()-1;
bool carry=false;
while(m>=0 || n>=0)
{
char x=(m>=0)?a[m--]:'0';
char y=(n>=0)?b[n--]:'0';
if(x=='1' && y=='1')
{
res+=(carry)?'1':'0';
carry=true;
}
else if(x=='0' && y=='0')
{
res+=(carry)?'1':'0';
carry=false;
}
else{
res+=(carry)?'0':'1';
}
}
if(carry)
res+='1';
else{}
reverse(res.begin(),res.end());
return res;
}
};

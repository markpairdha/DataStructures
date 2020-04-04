
bool isboolchar(char x)
{
    return (x >= '0' && x <= '9')? true : false ;
}
int atoi(string s)
{
    int res = 0,i=0,flag=1;
    if(s[0] == '-')
    {
        flag = -1;
        i++;
    }
    for(;i<s.length();i++)
    {
        if(isboolchar(s[i]) == false)
          return -1;
        else
          res = res*10 + s[i] - '0';
    }
    return flag*res;
}


// s1 = geeksforgeeks
// s2 = for
int strstr(string s1, string s2)
{
    if(s1.length() < s2.length())
   {
    return -1;
   }
    int i,j;
    for(i=0;i<=(s1.length() - s2.length());i++)
    {
        for(j=0;j<s2.length();j++)
        {
            if(s1[i+j] != s2[j])
              break;
        }    
        if(j == s2.length())
        {
         return i;
        }
    }
    return -1;
}


//{

int i=0;
for(i=s.length()-1;i>=0;i--)        // move in a reverse order
{
   if(s[i]=='*' && islower(s[i-1]) && isupper(s[i-2])) 
      {
           swap(s[i-1],s[i-2]);
           s.erase(i,1);       //erase 1 character at 'i'th position in a string
      }
   if(s[i]=='0')
      {
         s[i]=s[0];
         s.erase(0,1);      //erase 1 character at 0th position in a string
      }
 }
 return s;

//}
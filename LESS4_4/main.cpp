
#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstring>
int main()
{
char str[] = "Fall seven times and stand up eight", result[60];
    for (char *p1=str,*p2=result;*p2=*p1;++p1,++p2)
    {
        if (isalpha(*p1) && (p1==str||!isalpha(p1[-1])))
          {
            auto p = std::find_if_not(p1,p1+strlen(p1),::isalpha);
            if ((p-p1)%2!=0)
              {
                p1=p-1;
                --p2;
              }
           }
     }

    std::cout << result << std::endl;

}

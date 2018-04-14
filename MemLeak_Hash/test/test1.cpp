#include<iostream>
#include<string.h>
#include"vld_cpp.h"
using namespace std;

int main(int argc, char *argv[])
{
    int *pa = new int(10);
    int *pb = new int[10];
    return 0;
}

/*
class String
{
public:
    String(const char *str = "")
    {
        if(str == NULL)
        {
            data = new char[1];
            data[0] = '\0';
        }
        else
        {
            data = new char[strlen(str)+1];
            strcpy(data,str);
        }
    }
    ~String()
    {
        delete []data;
    }   
private:
    char *data;
};

int main(int argc, char *argv[])
{
    int *p = new int(10);
    int *pa = new int[10];
    //String t("Hello");
    String *pt = new String("xyz");
    delete []pa;
    delete p;
    return 0;
}

/*
int main()
{
    //atexit(check_leak);
    //int *p = new(__FILE__,__LINE__) int(10);
    int *p = new int(10);
    //int *p1 = new int[10];
    int *p2 = new int(100);
    delete p;
    //check_leak();
    return 0;
}
*/
